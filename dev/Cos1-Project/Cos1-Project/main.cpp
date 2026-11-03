
#include <iostream>
#include "Ship.h"
#include "Game.h"

int main()
{
	Ship playerShip;

	playerShip.displayStatus();

	playerShip.useFuel(20);
	playerShip.damageHull(15);
	playerShip.addCredits(250);

	std::cout << "\nAFTER Updates:\n"; // updated status
	playerShip.displayStatus();

	Game game;
	game.start();

	return 0;

}
