#include "Menu.h"
#include "../SceneManager/SceneManager.h"

/*

using namespace Final_Tello;
using namespace std;

Menu::Menu(LevelController* newLevelController) : Scene(newLevelController, "Menu")
{
	input = "";
	state = Menu_States::STATS;
}

Menu::~Menu()
{
}

void Menu::Init()
{
	
}

void Menu::Update()
{
	if (state == Menu_States::MENU)
	{
		if (input == "1")
		{
			
		}

		if (input == "2")
		{
			//SETTINGS
		}

		if (input == "3")
		{
			//ESTADISTICAS
		}

		if (input == "4")
		{
			gameShouldClose = true;
		}
	}
	else
	{
		state = Menu_States::MENU;
		SetRedraw();
	}
}

void Menu::Draw()
{
	if (state == Menu_States::MENU)
	{
		do {
			cout << endl << " Nivel Seleccionado> [" << levelController->GetCurrentLevelName() << "]" << endl << endl;

			cout << endl << " 1. Jugar";
			cout << endl << " 2. Cambiar nivel seleccionado";
			cout << endl << " 3. Estadisticas";
			cout << endl << " 4. Salir";

			cout << endl << "Tu seleccion: ";
			input = cin.get();
		} while (input != "1" && input != "2" && input != "3" && input != "4");
	}

	if (state == Menu_States::SETTINGS)
	{
		
	}

	if (state == Menu_States::STATS)
	{
		cout << endl << " Nivel seleccionado> [" << levelController->GetCurrentLevelName() << "]" << endl;
		cout << endl << " Usuario con mejor puntaje> " << levelController->GetCurrentLevelHiScoreUser() << endl;
		cout << endl << " Mejor puntaje> " << levelController->GetCurrentLevelHiScore() << endl << endl;

		cout << endl << " Toque cualquier tecla para continuar.";
		system("pause");
	}


	Scene::Draw();
}

void Menu::Deinit()
{
}



*/