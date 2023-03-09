#include "SceneManager.h"
/*
using namespace Final_Tello;

::Scene* ::SceneManager::currentScene = nullptr;

::SceneManager::SceneManager(Scene* initialScene)
{
	scenes.push_back(initialScene);
	currentScene = initialScene;
	nextScene = Scene_Name::MENU;
}

::SceneManager::~SceneManager()
{
	int aux = scenes.size();
	for (short i = 1; i <= aux; i++)
	{
		delete scenes[aux-i];
		scenes.pop_back();
	}
}

void ::SceneManager::AddScene(Scene* newScene)
{
	scenes.push_back(newScene);
}


void ::SceneManager::LoadScene(Scene_Name sceneToLoad)
{
	if (static_cast<int>(sceneToLoad) >= Scene::GetScenesCount())
	{
		std::cout << "ERROR LOADING SCENE" << std::endl;
		return;
	}

	if (static_cast<int>(sceneToLoad) == currentScene->GetID())
	{
		std::cout << std::endl << "ERROR LOADING THE SAME SCENE" << std::endl;
		return;
	}

	currentScene->Deinit(); //Borro cualquier cosa adicional de la escena vieja
	
	Scene** pointer = scenes.data(); //Me da el inicio del vector de escenas
	currentScene = *(pointer + static_cast<int>(sceneToLoad)); //Me muevo hasta la escena requerida.

	currentScene->Init(); //Inicializo la nueva escena

}

void ::SceneManager::ReloadScene()
{
	currentScene->Init();
}

::Scene* ::SceneManager::GetCurrentScene()
{
	return currentScene;
}

void SceneManager::SetNextScene(Scene_Name newNextScene)
{
	nextScene = newNextScene;
}

void SceneManager::LoadNextScene()
{
	currentScene->Deinit(); //Borro cualquier cosa adicional de la escena vieja

	Scene** pointer = scenes.data(); //Me da el inicio del vector de escenas
	currentScene = *(pointer + static_cast<int>(nextScene)); //Me muevo hasta la escena requerida.

	currentScene->Init(); //Inicializo la nueva escena
}

void ::SceneManager::UpdateCurrentScene()
{
	currentScene->Update();
}

void ::SceneManager::DrawCurrentScene()
{
	if (currentScene->SceneShouldRedraw() || !currentScene->SceneJustDrawn())
	{
		system("CLS");
		std::cout << "/// --- " << currentScene->GetDisplayName() << " --- \\\\\\" << std::endl;

		currentScene->Draw();
	}
}

void ::SceneManager::DeinitCurrentScene()
{
	currentScene->Deinit();
}
*/