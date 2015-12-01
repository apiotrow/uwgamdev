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
				SelectionManager.selectScriptBtn(btn);
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
				SelectionManager.selectBankBtn(btn);
			});
			bankBtns.Add(btn);
		}


	}
	void Update(){
//		print(SelectionManager.bankBtnNow.GetInstanceID());
	}
	
}
