#ifndef GAME_H
#define GAME_H

#include "../SceneManager/SceneManager.h"

namespace Final_Tello
{
	class Game
	{
	public:
		Game();
		~Game();

		void Run();
		void StopRunning();

		void Pause();
		void UnPause();
	private:
		SceneManager* sceneManager;
	};

}

#endif