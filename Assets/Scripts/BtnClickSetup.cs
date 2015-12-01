using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class BtnClickSetup : MonoBehaviour {
	public List<Button> scriptBtns;
	public List<Button> bankBtns;

	void Start () {
		scriptBtns = new List<Button>();
		bankBtns = new List<Button>();
		GameObject btnsGO;

		//set up script buttons
		btnsGO = GameObject.Find("ScriptBtns");
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button btn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			btn.onClick.AddListener(() => {
				SelectionManager.tapBtn(btn, "ScriptBtns");
			});
			scriptBtns.Add(btn);

			SelectionManager.initColorBlock = btn.colors;
		}

		//set up bank buttons
		btnsGO = GameObject.Find("BankBtns");
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button btn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			btn.onClick.AddListener(() => {
				SelectionManager.tapBtn(btn, "BankBtns");
			});
			bankBtns.Add(btn);
		}

		GameObject.Find("PlayButton").GetComponent<Button>().onClick.AddListener(() => {
			List<Vector3> moveList = new List<Vector3>();
			GameObject zobit = GameObject.Find("Zobit");
			moveList.Add(new Vector3(-24f, 0.5f, -3f));
			moveList.Add(new Vector3(-24f, 0.5f, -4f));
			moveList.Add(new Vector3(-23f, 0.5f, -4f));
			zobit.GetComponent<ZobitController>().executeScript(moveList);
		});

		GameObject.Find("ResetButton").GetComponent<Button>().onClick.AddListener(() => {
			GameObject zobit = GameObject.Find("Zobit");
			zobit.GetComponent<ZobitController>().reset();
		});

	}
	void Update(){
//		print(SelectionManager.bankBtnNow.GetInstanceID());
	}
	
}
