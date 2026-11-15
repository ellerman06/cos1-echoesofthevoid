
#include <iostream>
#include "Ship.h"
#include "Game.h"
#include "Planet.h"
#include <ctime>
#include <cstdlib>

int main()
{
	Ship playerShip;

	srand(time(0));

	Game game;
	game.start();

	Planet mars("Mars Colony", 3, 15);  // test
	mars.displayPlanetInfo();

	return 0;

}
