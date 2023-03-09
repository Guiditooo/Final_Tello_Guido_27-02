#include "iostream"
#include "Game.h"
#include "../Menu/Menu.h"

namespace Final_Tello
{
	Game::Game()
	{
		levelController = new LevelController();

		//Scene* sceneMenu = new Menu(levelController);
		//Scene* sceneGameplay = new Scene("Gameplay");
		//Scene* sceneGameOver = new Scene("GameOver");

		//sceneManager = new SceneManager(sceneMenu);

		//sceneManager->AddScene(sceneGameplay);
		//sceneManager->AddScene(sceneGameOver);

	}
	Game::~Game()
	{
		
	}
	void Game::Run()
	{

		system("Title Final Programacion 2 - Tello Guido");

		while (!gameShouldClose)
		{
			/*
			while (!sceneManager->GetCurrentScene()->SceneShouldEnd())
			{
				SceneManager::UpdateCurrentScene();
				SceneManager::DrawCurrentScene();
			}

			sceneManager->LoadScene(Scene_Name::GAMEOVER);
			*/
		}
		
	}
}
