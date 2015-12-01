using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public static class SelectionManager {
	public static Button scriptBtnNow;
	public static Button bankBtnNow;
	public static ColorBlock initColorBlock;
//	public static List<Button> scriptBtns;
//	public static List<Button> bankBtns;

	public static void selectScriptBtn(Button btn){
		scriptBtnNow = btn;

		ColorBlock cb = btn.colors;
		cb.normalColor = Color.red;
		cb.highlightedColor = Color.red;
		btn.colors = cb;

		//unselect every other button
		GameObject btnsGO = GameObject.Find("ScriptBtns");
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button currBtn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			if(currBtn.gameObject.GetInstanceID() != scriptBtnNow.gameObject.GetInstanceID()){
				currBtn.colors = initColorBlock;
			}
		}
	}

	public static void selectBankBtn(Button btn){
		bankBtnNow = btn;

		ColorBlock cb = btn.colors;
		cb.normalColor = Color.red;
		cb.highlightedColor = Color.red;
		btn.colors = cb;

		//unselect every other button
		GameObject btnsGO = GameObject.Find("BankBtns");
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button currBtn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			if(currBtn.gameObject.GetInstanceID() != bankBtnNow.gameObject.GetInstanceID()){
				currBtn.colors = initColorBlock;
			}
		}
	}

}
