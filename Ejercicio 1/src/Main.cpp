#include <iostream>
#include "Game/Game.h"
#include <string>


void main()
{
	std::string text = "5";
	int multiplier = 5;
	for (short i = 2; i < 200; i++)
	{
		text += ", ";
		text += std::to_string(multiplier * i);
	}
	std::cout << text;

	/*
	Final_Tello::Game* newGame = new Final_Tello::Game();

	if (newGame != nullptr)
	{
		newGame->Run();
	}

	delete newGame;
	*/
}

