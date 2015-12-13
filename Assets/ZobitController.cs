using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ZobitController : MonoBehaviour {
	Animator anim;
	Vector3 destination;
	Vector3 startingPosition;
	Vector3 startingForwardRotation;
	List<Vector3> moveList;
	int moveListIndex;
	bool moving;
	string nextMove;
	float moveDistanceMultiplier = 1f;
	float speedMultiplier = 2f;

	public Dictionary<string, Vector3> moveDic = new Dictionary<string, Vector3>(){
		{"UR", new Vector3(1f, 0f, 0f)},
		{"DL", new Vector3(-1f, 0f, 0f)},
		{"UL", new Vector3(0f, 0f, 1f)},
		{"DR", new Vector3(0f, 0f, -1f)},
		{"D", new Vector3(0f, 0f, -.5f)},
		{"R", new Vector3(.5f, 0f, -.5f)},
		{"U", new Vector3(.5f, 0f, .5f)},
		{"L", new Vector3(-.5f, 0f, .5f)},
		{"leap", new Vector3(0f, 1f, 0f)}
	};
	
	void Start () {
		anim = this.gameObject.GetComponent<Animator>();
		moveList = new List<Vector3>();
		startingPosition = this.transform.position;
		startingForwardRotation = transform.forward;
	}
	
	void Update () {
		if(moving){
			this.transform.forward = Vector3.RotateTowards(transform.forward, transform.position - destination, Time.deltaTime * 10f, 0f);
			this.transform.position = Vector3.MoveTowards(transform.position, destination, Time.deltaTime * speedMultiplier);

//			Vector3 one = transform.position;
//			one.y = 0f;
//			Vector3 two = destination;
//			destination.y = 0f;
//
//			this.transform.forward = Vector3.RotateTowards(transform.forward, one - two, Time.deltaTime * 10f, 0f);
////			Vector3 moveVec = destination - transform.position;
//			Vector3 moveVec = two - one;
//			moveVec.y = transform.position.y;
//			moveVec = moveVec.normalized;
//			this.GetComponent<CharacterController>().SimpleMove(moveVec * 3f);

		}
	}

	//waits for zobit to get to next waypoint, then sets his destination to the next waypoint
	IEnumerator moveZobitToDestination ()
	{
		while (true) {
//			Vector3 one = transform.position;
//			one.y = 0f;
//			Vector3 two = destination;
//			destination.y = 0f;

//			if ((one - two).magnitude < .01f) {
			if ((transform.position - destination).magnitude < .01f) {
				if(moveListIndex == moveList.Count - 1){
					anim.SetBool("walking", false);
					moving = false;
					yield break;
				}else{
					destination = transform.position + (moveList[++moveListIndex] * moveDistanceMultiplier);
				}
			}
			yield return null;
		}
	}
	
	//initiates movement. called when play button is pressed,
	//Vector3 version
	public void executeScript(List<Vector3> ml){
		if(ml.Count > 0){
			anim.SetBool("walking", true);
			moveList = ml;
			moveListIndex = 0;
			transform.position = startingPosition;
			destination = transform.position + (moveList[moveListIndex] * moveDistanceMultiplier);
			moving = true;
			StartCoroutine ("moveZobitToDestination");
		}
	}

	//stops script execution and resets zobit to starting position and rotation
	public void reset(){
		anim.SetBool("walking", false);
		moving = false;
		moveListIndex = 0;
		StopCoroutine("moveZobitToDestination");
		this.transform.position = startingPosition;
		this.transform.forward = startingForwardRotation;
	}
}
