#include "Event.h"
#include <iostream>
#include <cstdlib>


void Event::triggerRandomEvent(Ship& ship)
{
	int randomEvent = rand() % 4;
	switch (randomEvent)
	{
		case 0:
			std::cout << "\nQuiet Journey.\n";
			break;
		case 1:
			std::cout << "\nMeteor Strike!!\n";
			ship.damageHull(10);
			std::cout << "Hull -10\n";
			break;
		case 2: 
			std::cout << "\nWe have a fuel leak, Captain.\n";
			ship.useFuel(10);
			std::cout << "Fuel -10\n";
			break;
		case 3: 
			std::cout << "\nAbandoned Cargo Found!\n";
			ship.addCredits(100);
			std::cout << "Credits +100\n";
			break; 
    }

}
