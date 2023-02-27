#include "SceneManager.h"

Final_Tello::SceneManager::SceneManager(Scene* initialScene)
{
	scenes.push_back(initialScene);
	currentScene = initialScene;
}

Final_Tello::SceneManager::~SceneManager()
{
	
}

void Final_Tello::SceneManager::AddScene(Scene* newScene)
{
	scenes.push_back(newScene);
}


void Final_Tello::SceneManager::LoadScene(Scene_Name sceneToLoad)
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

void Final_Tello::SceneManager::ReloadScene()
{
	currentScene->Init();
}

Final_Tello::Scene* Final_Tello::SceneManager::GetCurrentScene()
{
	return currentScene;
}

void Final_Tello::SceneManager::UpdateCurrentScene()
{
	currentScene->Update();
}

void Final_Tello::SceneManager::DrawCurrentScene()
{
	currentScene->Draw();
}

void Final_Tello::SceneManager::DeinitCurrentScene()
{
	currentScene->Deinit();
}
