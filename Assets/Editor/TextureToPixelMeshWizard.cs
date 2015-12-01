using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;

public class TextureToPixelMeshWizard : ScriptableWizard
{
	private float length = 1.0f;
	private float height = 1.0f;
	private float width = 1.0f;
	private Texture2D textureToConvert;
	private int numIndices = 24;
	private string fileName = "default";
	Color colorToMask = new Color (0.0f, 0.0f, 0.0f, 0.0f);
	HashSet<Vector3> hiddenTriangleTester = new HashSet<Vector3>();
	HashSet<Vector3> hiddenTrianglesAverage = new HashSet<Vector3>();
	
	Dictionary<Vector3, int[]> hiddenTriangles = new Dictionary<Vector3, int[]>();
	
	[MenuItem("Assets/Texture to 3D Pixels")]
	static void CreateWizard ()
	{
		ScriptableWizard.DisplayWizard ("Texture to 3D Pixels", typeof(TextureToPixelMeshWizard));
		
	}
	
	void OnGUI ()
	{
		GUILayout.BeginVertical ();
		textureToConvert = EditorGUILayout.ObjectField ("Texture:", textureToConvert, typeof(Texture2D)) as Texture2D;	
		colorToMask = EditorGUILayout.ColorField ("Color to mask:", colorToMask);
		fileName = EditorGUILayout.TextField ("Filename:", fileName);
		length = EditorGUILayout.FloatField ("Pixel Length:", length);
		height = EditorGUILayout.FloatField ("Pixel Height:", height);
		width = EditorGUILayout.FloatField ("Pixel Depth:", width);
		if (GUILayout.Button ("Create 3D Pixel Mesh")) {
			if (textureToConvert == null) {
				EditorUtility.DisplayDialog ("No texture selected", "You must select a texture to be converted", "Ok");	
				return; 
			} else {
				if (textureToConvert.format != TextureFormat.ARGB32) {
					EditorUtility.DisplayDialog ("Incorrect texture format", "Please change the format of the texture to ARGB32", "Ok");	
					return;
				}
				TextureImporter myImporter = TextureImporter.GetAtPath (AssetDatabase.GetAssetPath (textureToConvert)) as TextureImporter;
				if (myImporter != null && myImporter.isReadable == false) {
					EditorUtility.DisplayDialog ("Texture not readable", "Please turn on read/write enabled in the texture settings", "Ok");							
					return;
				}
			}
			CreateAndSaveMesh ();
		}
		
	}
	
	void CreateAndSaveMesh ()
	{
		Mesh createdMesh = CreateMesh ();
		AssetDatabase.CreateAsset (createdMesh, "Assets/" + fileName + ".asset");
	}
	
	Mesh CreateCube (float x, float y, Color colorOfCube, int textureWidth, int textureHeight)
	{
		Mesh mesh = new Mesh ();
		Vector3[] verts = new Vector3[numIndices];
		Color[] colors = new Color[numIndices];
		float x_offset = (x * length * 2.0f) - (((float)textureWidth * length));
		float y_offset = (y * height * 2.0f) - (((float)textureHeight * height) - height);
		// Make the cube verts
		verts [0] = new Vector3 (-length + x_offset, -height + y_offset, width);
		verts [1] = new Vector3 (-length + x_offset, height + y_offset, width); // left side
		verts [2] = new Vector3 (length + x_offset, height + y_offset, width); // right side
		verts [3] = new Vector3 (length + x_offset, -height + y_offset, width);
		
		verts [4] = new Vector3 (-length + x_offset, height + y_offset, width); // left side marker
		verts [5] = new Vector3 (-length + x_offset, height + y_offset, -width); // left side marker
		verts [6] = new Vector3 (length + x_offset, height + y_offset, -width); // right side marker
		verts [7] = new Vector3 (length + x_offset, height + y_offset, width); // right side marker
		
		verts [8] = new Vector3 (-length + x_offset, -height + y_offset, width);
		verts [9] = new Vector3 (-length + x_offset, height + y_offset, width); // left side
		verts [10] = new Vector3 (-length + x_offset, height + y_offset, -width); // left side
		verts [11] = new Vector3 (-length + x_offset, -height + y_offset, -width); 
		
		verts [12] = new Vector3 (-length + x_offset, -height + y_offset, -width);
		verts [13] = new Vector3 (-length + x_offset, height + y_offset, -width); // left side
		verts [14] = new Vector3 (length + x_offset, height + y_offset, -width); //right side
		verts [15] = new Vector3 (length + x_offset, -height + y_offset, -width);
		
		verts [16] = new Vector3 (-length + x_offset, -height + y_offset, width);
		verts [17] = new Vector3 (-length + x_offset, -height + y_offset, -width);
		verts [18] = new Vector3 (length + x_offset, -height + y_offset, -width);
		verts [19] = new Vector3 (length + x_offset, -height + y_offset, width);
		
		verts [20] = new Vector3 (length + x_offset, -height + y_offset, width);
		verts [21] = new Vector3 (length + x_offset, height + y_offset, width); // right side
		verts [22] = new Vector3 (length + x_offset, height + y_offset, -width); // right side
		verts [23] = new Vector3 (length + x_offset, -height + y_offset, -width);
		
		for (int i = 0; i < colors.Length; i++) {
			colors [i] = colorOfCube;	
		}
		
		mesh.vertices = verts;
		mesh.colors = colors;
		
		int[] triangles = {
			0,
			2,
			1,
			3,
			2,
			0,
			4,
			6,
			5,
			6,
			4,
			7,
			8,
			9,
			10,
			10,
			11,
			8,
			12,
			13,
			14,
			14,
			15,
			12,
			16,
			17,
			18,
			18,
			19,
			16,
			20,
			22,
			21,
			22,
			20,
			23
		};
		mesh.triangles = triangles;
		return mesh;
	}
	
	Mesh CreateMesh ()
	{
		ArrayList verts = new ArrayList ();
		ArrayList colors = new ArrayList ();
		ArrayList triangles = new ArrayList ();
		
		int count = 0; 
		
		for (int x = 0; x < textureToConvert.width; x++) {
			for (int y = 0; y < textureToConvert.height; y++) {
				Color pixelColor = textureToConvert.GetPixel (x, y);
				if (pixelColor == colorToMask)
					continue;
				
				Mesh pixel3D = CreateCube (x, y, pixelColor, textureToConvert.width, textureToConvert.height);
				
				for (int i = 0; i < numIndices; i++) {
					verts.Add (pixel3D.vertices [i]);
					colors.Add (pixel3D.colors [i]);
				}
				
				int[] tris = pixel3D.triangles;
				for (int z = 0; z < 36; z++)
					tris [z] = tris [z] + (count * numIndices);
				
				for (int j = 0; j < 36; j++) {
					triangles.Add (tris [j]);	
				}
				
				count++;
			}
			
		}
		
		
		Vector3[] tempVerts = verts.ToArray (typeof(Vector3)) as Vector3[];
		int[] tempTriangles = triangles.ToArray (typeof(int)) as int[]; 
		hiddenTriangles.Clear();
		hiddenTrianglesAverage.Clear();
		
		//remove internal faces
		for (int k = 0; k < tempTriangles.Length; k += 3) {
			
			Vector3[] tri = new Vector3[3]{
				tempVerts [tempTriangles[k]], 
				tempVerts [tempTriangles[k + 1]], 
				tempVerts [tempTriangles[k + 2]]
			};
			Vector3 faceAvg = (tri [0] + tri [1] + tri [2]) / 3f;
			
			//try to add average to tester hashset. if we can't it's a duplicate, and therefore
			//the average of an internal face, and so we add it to another hashset for later.
			if(!hiddenTriangleTester.Add(faceAvg)){
				hiddenTrianglesAverage.Add(faceAvg);
			}
		}
		Debug.Log(hiddenTriangleTester.Count + " " + hiddenTrianglesAverage.Count);
		
		ArrayList newTris = new ArrayList();
		for(int h = 0; h < tempTriangles.Length; h += 3){
			Vector3[] tri = new Vector3[3]{
				tempVerts [tempTriangles[h]], 
				tempVerts [tempTriangles[h + 1]], 
				tempVerts [tempTriangles[h + 2]]
			};
			Vector3 faceAvg = (tri [0] + tri [1] + tri [2]) / 3f;
			
			//if signature isn't in hidden triangles hashset, we're free to add it for rendering
			if(!hiddenTrianglesAverage.Contains(faceAvg)){
				newTris.Add(tempTriangles[h]);
				newTris.Add(tempTriangles[h + 1]);
				newTris.Add(tempTriangles[h + 2]);
			}
		}
		
		
		Mesh theMesh = new Mesh ();
		Vector3[] theVerts = verts.ToArray (typeof(Vector3)) as Vector3[];
		Color[] theColors = colors.ToArray (typeof(Color)) as Color[];
		//		int[] theTriangles = triangles.ToArray (typeof(int)) as int[]; 
		int[] theTriangles = newTris.ToArray (typeof(int)) as int[]; 
		
		
		
		theMesh.vertices = theVerts;
		theMesh.colors = theColors;
		theMesh.triangles = theTriangles;
		
		theMesh.RecalculateBounds ();
		theMesh.Optimize ();
		theMesh.RecalculateNormals ();
		return theMesh;
		
	}
	
	
}
