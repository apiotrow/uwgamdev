using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public static class SelectionManager {
	public static Button selectedBtn;
	public static string selectedBtnType = "";

	public static int btnNowInstanceID = -3;

	public static ColorBlock initColorBlock;


	public static void selectScriptBtn(Button btn){
		//if we're clicking a button that's already selected, unselect
		if(btnNowInstanceID == btn.GetInstanceID()){
			deselectSelected(btn);
		}else if(selectedBtnType == "BankBtns"){
			btn.gameObject.GetComponent<Image>().sprite = 
				selectedBtn.transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;
			resetSelection(btn);
		}else{
			selectedBtn = btn;
			btnNowInstanceID = selectedBtn.GetInstanceID();
			selectedBtnType = "ScriptBtns";

			selectColors(btn);
			deselectAllBesidesCurrent("ScriptBtns");
		}
	}

	public static void selectBankBtn(Button btn){
		//if we're clicking a button that's already selected, unselec
		if(btnNowInstanceID == btn.GetInstanceID()){
			deselectSelected(btn);
		}else if(selectedBtnType == "ScriptBtns"){
			selectedBtn.gameObject.GetComponent<Image>().sprite = 
				btn.transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;
			resetSelection(btn);
		}else{
			selectedBtn = btn;
			btnNowInstanceID = selectedBtn.GetInstanceID();
			selectedBtnType = "BankBtns";
		
			selectColors(btn);
			deselectAllBesidesCurrent("BankBtns");
		}
	}

	static void selectColors(Button btn){
		//give this button selected colors
		ColorBlock cb = btn.colors;
		cb.normalColor = Color.red;
		cb.highlightedColor = Color.red;
		btn.colors = cb;
	}

	static void resetSelection(Button btn){
		selectedBtn.colors = initColorBlock;
		selectedBtnType = "";
		selectedBtn = null;
		btnNowInstanceID = -3;
		btn.colors = initColorBlock;
	}

	static void deselectSelected(Button btn){
		selectedBtn = null;
		btnNowInstanceID = -3;
		selectedBtnType = "";
		btn.colors = initColorBlock;
	}

	static void deselectAllBesidesCurrent(string type){
		//unselect every other button
		GameObject btnsGO = GameObject.Find(type);
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button currBtn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			if(currBtn.GetInstanceID() != selectedBtn.GetInstanceID()){
				currBtn.colors = initColorBlock;
			}
		}
	}

}
