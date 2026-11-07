
#include <iostream>
#include "Ship.h"
#include "Game.h"
#include "Planet.h"
#include <ctime>
#include <cstdlib>

int main()
{
	Ship playerShip;

	/*playerShip.displayStatus();

	playerShip.useFuel(20);
	playerShip.damageHull(15);
	playerShip.addCredits(250);*/

	//std::cout << "\nAFTER Updates:\n"; // updated status
	//playerShip.displayStatus();

	srand(time(0));

	Game game;
	game.start();

	Planet mars("Mars Colony", 3, 15);  // test
	mars.displayPlanetInfo();

	return 0;

}
