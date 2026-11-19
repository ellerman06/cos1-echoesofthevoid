#pragma once
#include "Ship.h"
#include "Planet.h"
#include <vector>
#include "Event.h"

class Game
{

private:
	Ship playerShip;
	Event event;

	std::vector<Planet> planets; 
	Planet* currentPlanet;
    std::string currentLocation; 

public:
	void start();
	void displayMainMenu();
	void displayObjectives();

	void intialPlanets();
	void displayPlanets();
	void travel();
	void repairShip();
	void trade();
	void checkWinCondition();
	void checkLoseCondition();
	void saveGame();
	void loadGame();


};