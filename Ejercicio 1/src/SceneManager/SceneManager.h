#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <vector>
#include "../Scene/Scene.h"
#include "../Extras.h"

namespace Final_Tello
{

	class SceneManager
	{
	public:
		SceneManager(Scene* initialScene);
		~SceneManager();

		void AddScene(Scene* newScene);

		void LoadScene(Scene_Name sceneToLoad);
		void ReloadScene();

		Scene* GetCurrentScene();

		static void UpdateCurrentScene();
		static void DrawCurrentScene();
		static void DeinitCurrentScene();

	private:
		vector<Scene*> scenes;
		static Scene* currentScene;
	};

}

#endif