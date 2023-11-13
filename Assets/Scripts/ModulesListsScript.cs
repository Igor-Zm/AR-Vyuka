using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public enum categoriesEnum
{
    //All, Math, Physics, Chemistry, History, Biology, Other
    All, Math, Physics, Chemistry, History,  Other
}

public class ModulesListsScript : MonoBehaviour
{
    [Header("If you want to add a module into the menu, \nthis is the place to do it."), Space(10), ]
    public List<Modules> modules;

    [Header("Don't change variables below"), Space(10)]
    public GameObject modulePrefab;
    public Transform contentModuleScroll;
    public GameObject onScreenCanvas;
    public GameObject categoryTextPrefab;
    public Transform contentCategory;

    public GameObject categoryTabPrefab;

    public List<GameObject> categoryTabs;
    public List<GameObject> modulesInScene; // Not actual modules, UI btns for modules.
    public Text searchText;

    public int stepCategory;
    public int offsetCategory;
    int newCategoryPosX = 0;
    bool CategoryClicked = false;

    public InputField searchBar;


    public string[] categoriesText;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < categoriesEnum.GetNames(typeof(categoriesEnum)).Length; i++)
        {
            SpawnCategory(i);
        }

        for (int i = 0; i < modules.Count; i++)
        {
            SpawnObjects(i);
        }

    }

    // Replaces GetChilds for tags
    public void OnValueChangedSearchBar()
    {
        for (int i = 0; i < categoryTabs.Count; i++)
        {
            if (categoryTabs[i].activeSelf)
            {
                for (int j = 0; j < categoryTabs[i].transform.GetChild(0).GetChild(0).childCount; j++)
                {
                    TextMeshProUGUI moduleName = categoryTabs[i].transform.GetChild(0).GetChild(0).GetChild(j).GetChild(1).GetComponent<TextMeshProUGUI>();
                    if (moduleName.text.ToLower().Contains(searchBar.text.ToLower()))
                    {
                        moduleName.gameObject.transform.parent.gameObject.SetActive(true);
                    }
                    else if (searchBar.text == "")
                    {
                        moduleName.gameObject.transform.parent.gameObject.SetActive(true);
                    }
                    else
                    {
                        moduleName.gameObject.transform.parent.gameObject.SetActive(false);
                    }
                }
            }
        }
    }

    public void Update()
    {
       //if (CategoryClicked)
       //{
       //    RectTransform contentCategoryRT = contentCategory.GetComponent<RectTransform>();
       //    contentCategoryRT.anchoredPosition = Vector2.Lerp(new Vector2(contentCategoryRT.anchoredPosition.x, contentCategoryRT.anchoredPosition.y), new Vector2(newCategoryPosX, contentCategoryRT.anchoredPosition.y), 0.01f);
       //    //print("New position: " + newCategoryPosX + " compared to actual pos: " + contentCategoryRT.anchoredPosition.x);
       //    if (Mathf.Round(contentCategoryRT.anchoredPosition.x) == newCategoryPosX)
       //    {
       //        CategoryClicked = false;
       //    }
       //}

    }

    public void SpawnObjects(int i)
    {
        GameObject module = Instantiate(modulePrefab, contentModuleScroll);
        modulesInScene.Add(module);
        //modules[i].moduleSceneName.SetActive(true);
        module.GetComponent<Button>().onClick.AddListener(delegate { ClickBTN(modules[i].moduleSceneIndex); }); // adding function to the button 
        module.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = modules[i].coverText;
        module.transform.GetChild(0).GetComponent<RawImage>().texture = modules[i].coverImage;
    }

    public void SpawnCategory(int i)
    {
        // Spawning text
        GameObject categoryText = Instantiate(categoryTextPrefab, contentCategory);
        categoryText.name = (categoriesEnum)i + "";
        categoryText.GetComponent<TextMeshProUGUI>().text = categoriesText[i];
        categoryText.GetComponent<Button>().onClick.AddListener(delegate { CategoryButton(); });


        // Spawning tabs
        GameObject categoryTab = Instantiate(categoryTabPrefab, gameObject.transform);
        categoryTab.name += " " + (categoriesEnum)i;
        categoryTabs.Add(categoryTab); //important for hiding
        categoryTab.SetActive(false);
        if (i == 0)
        {
            categoryTab.SetActive(true); // 'All' tab is active on load
            contentModuleScroll = categoryTab.transform.GetChild(0).GetChild(0); // First tab is always All, where everything should be displayed
        }
    }

    public void ClickBTN(int _moduleSceneIndex)
    {
        /* legacy code
        HideAllModules();
        moduleSceneName.SetActive(true);
        gameObject.SetActive(false);
        */

        SceneManager.LoadScene(_moduleSceneIndex);
    }

    //public void HideAllModules()
    //{
    //    for (int i = 0; i < modules.Count; i++)
    //    {
    //        modules[i].moduleSceneName.SetActive(false);
    //    }
    //}

    [ContextMenu("Extra")]
    public void Extra()
    {
        for (int i = 0; i < modules.Count; i++)
        {
            Modules module = modules[i];
            module.categoriesEnumInstance2 = module.categoriesEnumInstance;
            modules[i] = module;
        }
    }
    public void HideAllCategoriesTabs()
    {
        for (int i = 0; i < categoryTabs.Count; i++)
        {
            categoryTabs[i].SetActive(false);
        }
    }

    //public void BackToMainMenuBtn()
    //{
    //    gameObject.SetActive(true);
    //}

    public void CategoryButton()
    {
        GameObject currentlyActiveCategoryTab = null;
        // Hide all tabs
        HideAllCategoriesTabs();
        // Show the right one
        for (int i = 0; i < categoryTabs.Count; i++)
        {
            if (categoryTabs[i].name.Contains(EventSystem.current.currentSelectedGameObject.name))
            {
                categoryTabs[i].SetActive(true);
                currentlyActiveCategoryTab = categoryTabs[i];
            }
        }
        // Re-parent the modules to this tab if needed
        // Comparting strings is innefective... Too bad!
        for (int i = 0; i < modules.Count; i++)
        {
            if (EventSystem.current.currentSelectedGameObject.name.Contains("All"))
            {
                modulesInScene[i].transform.SetParent(currentlyActiveCategoryTab.transform.GetChild(0).GetChild(0));
            }
            else if (modules[i].categoriesEnumInstance.ToString() == EventSystem.current.currentSelectedGameObject.name || modules[i].categoriesEnumInstance2.ToString() == EventSystem.current.currentSelectedGameObject.name)
            {
                modulesInScene[i].transform.SetParent(currentlyActiveCategoryTab.transform.GetChild(0).GetChild(0));
            }
        }

        for (int i = 0; i < contentCategory.childCount; i++)
        {
            contentCategory.GetChild(i).GetComponent<TextMeshProUGUI>().color = new Color(145f/255f,150f/255f,162f/255f);
            if (i == 0 || i == contentCategory.childCount -1)
            {
                if (contentCategory.GetChild(i).name.Contains(EventSystem.current.currentSelectedGameObject.name))
                {
                    // maybe some code?
                    contentCategory.GetChild(i).GetComponent<TextMeshProUGUI>().color = new Color(15f / 255f, 255f / 255f, 188f / 255f);
                }
            }
            else
            {
                if (contentCategory.GetChild(i).name.Contains(EventSystem.current.currentSelectedGameObject.name))
                {
                    newCategoryPosX = (i + 1) * -stepCategory + offsetCategory;
                    RectTransform contentCategoryRT = contentCategory.GetComponent<RectTransform>();
                    CategoryClicked = true;
                    contentCategory.GetChild(i).GetComponent<TextMeshProUGUI>().color = new Color(15f / 255f, 255f / 255f, 188f / 255f);
                    //contentCategoryRT.anchoredPosition = new Vector2(newCategoryPosX, contentCategoryRT.anchoredPosition.y);
                }
            }

        }

    }

}

[System.Serializable]
public struct Modules
{
    public string coverText;
    public Texture coverImage;
    public int moduleSceneIndex;
    [Header("Select a category \nDo not leave at \"All\"")]
    public categoriesEnum categoriesEnumInstance;
    public categoriesEnum categoriesEnumInstance2;
}

[System.Serializable]
public struct Category
{
    public string name;
}

