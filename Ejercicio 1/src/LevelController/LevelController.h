#ifndef LEVELCONTROLLER_H
#define LEVELCONTROLLER_H

#include "../Extras.h"

namespace Final_Tello
{

	class LevelController
	{
	public:
		LevelController();
		~LevelController();

		void ReadLevel(std::string filePath);
		void OverrideLevelHighScore(std::string newName, int newHiScore);

		std::string GetCurrentLevelName();
		int GetCurrentLevelHiScore();
		std::string GetCurrentLevelHiScoreUser();

	private:
		Level* currentLevel;
	};

}

#endif