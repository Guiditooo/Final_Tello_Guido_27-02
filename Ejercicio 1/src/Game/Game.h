#ifndef GAME_H
#define GAME_H

#include "../SceneManager/SceneManager.h"
#include "../LevelController/LevelController.h"

namespace Final_Tello
{
	class Game
	{
	public:
		Game();
		~Game();

		void Run();
		void StopRunning(); //Mensaje de salir del juego
	private:
		//SceneManager* sceneManager;
		LevelController* levelController;
	};

}

#endif