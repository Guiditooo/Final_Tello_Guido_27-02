#ifndef EXTRAS_H
#define EXTRAS_H

#include <iostream>

namespace Final_Tello
{

	const std::string LEVEL1_NAME = "Predefinido 1";
	const std::string LEVEL2_NAME = "Predefinido 2";
	const std::string LEVEL3_NAME = "Predefinido 3";


	static bool gameShouldClose = false;

	enum class Scene_Name
	{
		MENU,
		GAMEPLAY,
		GAMEOVER
	};

	enum class Menu_Options
	{
		PLAY,
		SELECTION,
		STATS,
		EXIT, //Pregunta para salir.
		COUNT
	};

	enum class Menu_States
	{
		MENU,
		SETTINGS,
		STATS
	};

	struct Level
	{
		public:
		Level() 
		{
			levelData = "";
			levelName = LEVEL1_NAME;
			levelHiScoreUser = "Guido";
			levelHiScore = 1;
		}
		std::string levelData;
		std::string levelName;
		std::string levelHiScoreUser;
		int         levelHiScore;
	};

	namespace Settings
	{
		
	}


}

#endif