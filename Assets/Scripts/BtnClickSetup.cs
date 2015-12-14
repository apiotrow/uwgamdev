using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class BtnClickSetup : MonoBehaviour {
	public List<Button> scriptBtns;
	public List<Button> bankBtns;
	public float moveDistance = 2f;



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
		//	populate bank button with sprites from resources/sprites/arrows
		btnsGO = GameObject.Find("BankBtns");
		Sprite[] arrowSprites = System.Array.ConvertAll(Resources.LoadAll("Sprites/Arrows", typeof(Sprite)),o=>(Sprite)o);
		for(int i = 0; i < btnsGO.transform.childCount; i++){
			Transform ch = btnsGO.transform.GetChild(i);
			Button btn = ch.transform.Find("BG").gameObject.GetComponent<Button>();
			btn.onClick.AddListener(() => {
				SelectionManager.tapBtn(btn, "BankBtns");
			});

			//assign it a sprite from the array
			if(i < arrowSprites.Length)
				btn.transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite = arrowSprites[i];

			bankBtns.Add(btn);
		}

		//set up play/execute script button
		GameObject.Find("PlayButton").GetComponent<Button>().onClick.AddListener(() => {
			List<Vector3> moveList = new List<Vector3>();
			ZobitController zobitC = GameObject.Find("Zobit").GetComponent<ZobitController>();

			for(int i = 0; i < scriptBtns.Count; i++){
				if(scriptBtns[i].GetComponent<Image>().sprite.name != "nothingicon"){
					string moveName = scriptBtns[i].GetComponent<Image>().sprite.name;
					//commented out just for mockup
//					if(zobitC.moveDic.ContainsKey(moveName))
//						moveList.Add(zobitC.moveDic[moveName]);
//					else
//						print("moveDic doens't have key: " + moveName);
				}

			}
			moveList.Add(new Vector3(0f, 0f, -1f));
			moveList.Add(new Vector3(0f, 0f, -1f));
			moveList.Add(new Vector3(0f, 0f, -1f));
			moveList.Add(new Vector3(0f, 0f, -1f));
			moveList.Add(new Vector3(0f, 0f, -1f));

			moveList.Add(new Vector3(1f, 0f, 0f));
			moveList.Add(new Vector3(1f, 0f, 0f));
			moveList.Add(new Vector3(1f, 0f, 0f));
			moveList.Add(new Vector3(1f, 0f, 0f));
			moveList.Add(new Vector3(1f, 0f, 0f));
			moveList.Add(new Vector3(1f, 0f, 0f));

			moveList.Add(new Vector3(0f, 0f, 1f));
			moveList.Add(new Vector3(0f, 0f, 1f));
			moveList.Add(new Vector3(0f, 0f, 1f));
			moveList.Add(new Vector3(0f, 0f, 1f));
			moveList.Add(new Vector3(0f, 0f, 1f));
			moveList.Add(new Vector3(0f, 0f, 1f));

			zobitC.executeScript(moveList);
		});

		GameObject.Find("ResetButton").GetComponent<Button>().onClick.AddListener(() => {
			GameObject zobit = GameObject.Find("Zobit");
			zobit.GetComponent<ZobitController>().reset();
		});

		GameObject.Find("DeleteButton").GetComponent<Button>().onClick.AddListener(() => {
			for(int i = 0; i < scriptBtns.Count; i++){
				Sprite randCommandSprite = null;
				scriptBtns[i].GetComponent<Image>().sprite = Resources.Load<Sprite>("Sprites/nothingicon") as Sprite;
			}
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
				Sprite randCommandSprite = null;

				//assign a random sprite from the bank. if the bank button doesn't have
				//a sprite, try another one until you get one that isn't null
				while(randCommandSprite == null){
					randCommandSprite = bankBtns[(int)Random.Range(0, bankBtns.Count)].transform.parent.Find("Icon").gameObject.GetComponent<Image>().sprite;
				}
				scriptBtns[i].GetComponent<Image>().sprite = randCommandSprite;
			}
		});

	}
	void Update(){
//		print(SelectionManager.bankBtnNow.GetInstanceID());
	}
	
}
