#include <iostream>
#include "Game/Game.h"



void main()
{
	Final_Tello::Game* newGame = new Final_Tello::Game();

	if (newGame != nullptr)
	{
		newGame->Run();
	}

	delete newGame;

}

