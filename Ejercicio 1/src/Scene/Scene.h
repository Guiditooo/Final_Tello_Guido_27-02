#ifndef SCENE_H
#define SCENE_H

#include <iostream>


namespace Final_Tello
{

	using namespace std;

	class Scene
	{
	public:
		Scene(string newName);
		~Scene();
		
		static int GetScenesCount();

		virtual void Init();
		virtual void Update();
		virtual void Draw();
		virtual void Deinit();

		int GetID();
		bool SceneShouldEnd();

	private:
		string displayName;
		int id;
		static int sceneCount;
		bool shouldEnd;
	};

}

#endif