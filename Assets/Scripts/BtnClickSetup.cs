using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class BtnClickSetup : MonoBehaviour {
	public List<Button> scriptBtns;
	public List<Button> bankBtns;

	public Dictionary<string, Vector3> moveDic = new Dictionary<string, Vector3>(){
		{"UR", new Vector3(1f, 0f, 0f)},
		{"DL", new Vector3(-1f, 0f, 0f)},
		{"UL", new Vector3(0f, 0f, 1f)},
		{"DR", new Vector3(0f, 0f, -1f)}
	};

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

		//set up play/execute script button
		GameObject.Find("PlayButton").GetComponent<Button>().onClick.AddListener(() => {
			List<Vector3> moveList = new List<Vector3>();

			for(int i = 0; i < scriptBtns.Count; i++){
				if(scriptBtns[i].GetComponent<Image>().sprite.name != "UISprite"){
					string moveName = scriptBtns[i].GetComponent<Image>().sprite.name;
					if(moveDic.ContainsKey(moveName))
						moveList.Add(moveDic[moveName]);
					else
						print("moveDic doens't have key: " + moveName);
				}
			}

			GameObject zobit = GameObject.Find("Zobit");
			zobit.GetComponent<ZobitController>().executeScript(moveList);
		});

		GameObject.Find("ResetButton").GetComponent<Button>().onClick.AddListener(() => {
			GameObject zobit = GameObject.Find("Zobit");
			zobit.GetComponent<ZobitController>().reset();
		});






		//
		//
		//
		//DEBUG CRAP
		//
		//

		//fill in script with random values
		GameObject.Find("debug_fillin").GetComponent<Button>().onClick.AddListener(() => {
			//set up script buttons
			for(int i = 0; i < scriptBtns.Count; i++){
				Sprite randCommandSprite = 
					bankBtns[(int)Random.Range(0, bankBtns.Count)].transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;

				scriptBtns[i].GetComponent<Image>().sprite = randCommandSprite;
			}
		});

	}
	void Update(){
//		print(SelectionManager.bankBtnNow.GetInstanceID());
	}
	
}
