#include <iostream>
#include "Scene.h"

namespace Final_Tello
{
	
	int Scene::sceneCount = 0;

	Scene::Scene(string newName)
	{
		displayName = newName;
		sceneCount++;
		shouldEnd = false;
	}

	Scene::~Scene() 
	{
		sceneCount--;
	}

	void Scene::Init()
	{
	}

	void Scene::Update()
	{
	}

	void Scene::Draw()
	{
		std::cout << "///" << displayName << "\\\\\\" << std::endl;
	}

	void Scene::Deinit()
	{
	}

	int Scene::GetScenesCount()
	{
		return sceneCount;
	}

	int Scene::GetID()
	{
		return id;
	}

	bool Scene::SceneShouldEnd()
	{
		return shouldEnd;
	}

}