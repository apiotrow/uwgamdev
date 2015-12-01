using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public static class SelectionManager {
	public static Button selectedBtn;
	public static string selectedBtnType = "";
	public static int btnNowInstanceID = -3;
	public static ColorBlock initColorBlock;

	public static void tapBtn(Button btn, string type){

		//if we're clicking a button that's already selected, unselect it
		if(btnNowInstanceID == btn.GetInstanceID()){
			deselectSelected(btn);

		//if a script button is selected and we've just tapped a bank button
		//assign the script button the bank button's icon
		}else if(type == "BankBtns" && selectedBtnType == "ScriptBtns"){
				selectedBtn.gameObject.GetComponent<Image>().sprite = 
					btn.transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;
			resetSelection(btn);

		//if a bank button is selected and we've just tapped a script button
		//assign the script button the bank button's icon
		}else if(type == "ScriptBtns" && selectedBtnType == "BankBtns"){
				btn.gameObject.GetComponent<Image>().sprite = 
					selectedBtn.transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;
			resetSelection(btn);

		//if nothing is selected at all, just select the button that was tapped
		}else{
			selectNewButton(btn, type);
		}
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

	static void selectNewButton(Button btn, string type){
		selectedBtn = btn;
		btnNowInstanceID = selectedBtn.GetInstanceID();
		selectedBtnType = type;
		selectColors(btn);
		deselectAllBesidesCurrent(type);
	}
	
	static void selectColors(Button btn){
		//give this button selected colors
		ColorBlock cb = btn.colors;
		cb.normalColor = Color.red;
		cb.highlightedColor = Color.red;
		btn.colors = cb;
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
