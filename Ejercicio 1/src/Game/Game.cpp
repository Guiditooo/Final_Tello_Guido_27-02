#include "iostream"
#include "Game.h"

namespace Final_Tello
{
	Game::Game()
	{
		Scene* sceneMenu = new Scene("Menu");
		Scene* sceneGameplay = new Scene("Gameplay");
		Scene* sceneGameOver = new Scene("GameOver");

		sceneManager = new SceneManager(sceneMenu);

		sceneManager->AddScene(sceneGameplay);
		sceneManager->AddScene(sceneGameOver);

	}
	Game::~Game()
	{
		
	}
	void Game::Run()
	{
		while (!gameShouldClose)
		{
			sceneManager->LoadScene(Scene_Name::MENU);
			
			while (!sceneManager->GetCurrentScene()->SceneShouldEnd())
			{
				SceneManager::UpdateCurrentScene();
				SceneManager::DrawCurrentScene();
			}

			sceneManager->LoadScene(Scene_Name::GAMEOVER);

		}
		
	}
}
