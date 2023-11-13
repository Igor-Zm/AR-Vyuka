#if UNITY_EDITOR


using UnityEngine;
using UnityEditor;
using System.IO;

public class ScreenshotEditor : MonoBehaviour
{
    [MenuItem("Tools/Take Screenshot")]
    private static void TakeScreenshot()
    {
        string screenshotFolderPath = "Assets/thumbnails/";
        if (!Directory.Exists(screenshotFolderPath))
            Directory.CreateDirectory(screenshotFolderPath);

        string screenshotName = "Screenshot_" + System.DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss") + ".png";
        string screenshotPath = Path.Combine(screenshotFolderPath, screenshotName);

        ScreenCapture.CaptureScreenshot(screenshotPath);

        Debug.Log("Screenshot taken: " + screenshotPath);

        // Reimport the folder to show the screenshot immediately in Unity.
        AssetDatabase.Refresh();
    }
}
#endif
