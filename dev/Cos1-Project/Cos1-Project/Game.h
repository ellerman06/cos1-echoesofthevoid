#pragma once
#include "Ship.h"
#include "Planet.h"
#include <vector>

class Game
{

private:
	Ship playerShip;

	std::vector<Planet> planets; 

public:
	void start();
	void displayMainMenu();

	void intialPlanets();
	void displayPlanets();
};