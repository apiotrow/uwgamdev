using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ZobitController : MonoBehaviour {
	Vector3 destination;
	int moveListIndex;
	List<Vector3> moveList;
	bool moving;
	Vector3 startingPosition;

	void Start () {
		moveList = new List<Vector3>();
		startingPosition = this.transform.position;
	}

	public void executeScript(List<Vector3> ml){
		moveList = ml;
		moveListIndex = 0;
		destination = moveList[moveListIndex];
		moving = true;
		StartCoroutine ("moveZobitToDestination");
	}

	public void reset(){
		moving = false;
		moveListIndex = 0;
		StopCoroutine("moveZobitToDestination");
		this.transform.position = startingPosition;
	}

	void Update () {
		if(moving){
			print (destination);
			Vector3 moveVec = destination - transform.position;
			this.transform.position = Vector3.MoveTowards(transform.position, destination, Time.deltaTime * 2f);
		}
	}

	IEnumerator moveZobitToDestination ()
	{
		while (true) {
			if ((transform.position - destination).magnitude < .1f) {
				if(moveListIndex == moveList.Count - 1){
					moving = false;
					yield break;
				}else{
					destination = moveList[++moveListIndex];
				}
			}
			yield return null;
		}
	}
}
