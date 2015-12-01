using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ZobitController : MonoBehaviour {
	Animator anim;
	Vector3 destination;
	Vector3 startingPosition;
	Vector3 startingForwardRotation;
	public List<Vector3> moveList;
	int moveListIndex;
	bool moving;
	
	void Start () {
		anim = this.gameObject.GetComponent<Animator>();
		moveList = new List<Vector3>();
		startingPosition = this.transform.position;
		startingForwardRotation = transform.forward;
	}
	
	void Update () {
		if(moving){
			this.transform.forward = Vector3.RotateTowards(transform.forward, transform.position - destination, Time.deltaTime * 10f, 0f);
			Vector3 moveVec = destination - transform.position;
			this.transform.position = Vector3.MoveTowards(transform.position, destination, Time.deltaTime * 2f);
		}
	}

	//waits for zobit to get to next waypoint, then sets his destination to the next waypoint
	IEnumerator moveZobitToDestination ()
	{
		while (true) {
			if ((transform.position - destination).magnitude < .01f) {
				if(moveListIndex == moveList.Count - 1){
					anim.SetBool("walking", false);
					moving = false;
					yield break;
				}else{
					destination = transform.position + moveList[++moveListIndex];
				}
			}
			yield return null;
		}
	}

	//initiates movement. called when play button is pressed
	public void executeScript(List<Vector3> ml){
		anim.SetBool("walking", true);
		moveList = ml;
		moveListIndex = 0;
		transform.position = startingPosition;
		destination = transform.position + moveList[moveListIndex];
		moving = true;
		StartCoroutine ("moveZobitToDestination");
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
