#ifndef SCENE_H
#define SCENE_H
/*
#include <iostream>
#include "../LevelController/LevelController.h"

namespace Final_Tello
{

	using namespace std;

	class Scene
	{
	public:
		Scene(LevelController* newLevelController, string newName);
		~Scene();
		
		static int GetScenesCount();

		virtual void Init();
		virtual void Update();
		virtual void Draw();
		virtual void Deinit();

		int GetID();
		string GetDisplayName();
		bool SceneShouldEnd();

		bool SceneJustDrawn();
		bool SceneShouldRedraw();

	private:
		string displayName;
		int id;
		static int sceneCount;
		bool shouldEnd;
		bool shouldRedraw;
		bool justDrawn;

	protected:
		virtual void DrawCheck();
		void SetRedraw();
		LevelController* levelController;

	};

}
*/
#endif