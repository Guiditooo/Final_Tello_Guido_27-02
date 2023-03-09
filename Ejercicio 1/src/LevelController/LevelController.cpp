#include "LevelController.h"

using namespace Final_Tello;

LevelController::LevelController()
{
	currentLevel = new Level();
}

LevelController::~LevelController()
{
}

void LevelController::ReadLevel(std::string filePath)
{
}

void LevelController::OverrideLevelHighScore(std::string newName, int newHiScore)
{
}

std::string LevelController::GetCurrentLevelName()
{
	return currentLevel->levelName;
}

int LevelController::GetCurrentLevelHiScore()
{
	return currentLevel->levelHiScore;
}

std::string LevelController::GetCurrentLevelHiScoreUser()
{
	return currentLevel->levelHiScoreUser;
}
