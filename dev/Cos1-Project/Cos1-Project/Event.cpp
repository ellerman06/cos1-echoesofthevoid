#include "Event.h"
#include <iostream>
#include <cstdlib>


void Event::triggerRandomEvent(Ship& ship)
{
	int randomEvent = rand() % 7;
	switch (randomEvent)
	{
		case 0:
			std::cout << "\nQuiet Journey.\n";
			break;
		case 1:
			std::cout << "\nWe have been hit by a Meteor Strike!!\n";
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
		case 4:
			std::cout << "\nFuel Cache Found!\n";
			std::cout << "A forgotten supply depot was discovered.\n";
			ship.addFuel(15);
			std::cout << "Fuel +15\n";
			break;
		case 5:
			std::cout << "\nDistress Signal Detected!\n";
			std::cout << "You rescued a stranded crew.\n";
			ship.addCredits(150);
			std::cout << "Credits +150\n";
			break;
		case 6:
			std::cout << "\nRogue AI Probe Encountered!\n";
			std::cout << "The probe uploads valuable navigation data.\n";
			ship.addFuel(10);
			ship.addCredits(100);
			std::cout << "Credits +100\n";
			std::cout << "Fuel +10\n";
			break;
		case 7:



			break;
    }

}
