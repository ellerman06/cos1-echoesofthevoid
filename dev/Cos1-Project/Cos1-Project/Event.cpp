#include "Event.h"
#include <iostream>
#include <cstdlib>


void Event::triggerRandomEvent(Ship& ship)
{
	int randomEvent = rand() % 11;
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
		case 7:std::cout << "\nMicro-Meteor Shower!\n";
			std::cout << "Small impacts rattle the hull.\n";
			ship.damageHull(5);
			std::cout << "Hull -5\n";
			break;
		case 8:
			std::cout << "\nCaptain, incoming Space Pirates!\n";
			std::cout << "Pirates attack ship before you can escape.\n";
			ship.damageHull(15);
			ship.spendCredits(50);
			std::cout << "Hull -15\n";
			std::cout << "Credits -50\n";
			break;
		case 9:
			std::cout << "\nReactor Failure!\n";
			std::cout << "Emergency systems consume excess fuel.\n";
			ship.useFuel(15);
			std::cout << "Fuek -15\n";
			break;
		case 10:
			if (rand() % 2 == 0)
			{
				std::cout <<
					"=====================================\n";
				std::cout << "   !!!AINCENT ALIEN VESSEL DISCOVERED!!!\n";
				std::cout <<
					"=====================================\n";
				std::cout << "You discover a drifting alien ship containaing valuable tecnology and supplies.\n";

				ship.addCredits(500);
				ship.addFuel(15);
				ship.repairHull(20);
				std::cout << "Credits +500\n";
				std::cout << "Fuel +15\n";
				std::cout << "Hull +20\n";

			}
			else 
			{
				std::cout <<
					"=====================================\n";
				std::cout << "   ***BLACK HOLE ENCOUNTER***\n";
				std::cout <<
					"=====================================\n";
				std::cout << "Your ship is pulled toward a gravitational anamoly before escaping at great cost.\n";

				ship.damageHull(25);
				ship.useFuel(25);
				ship.spendCredits(100);
				std::cout << "Hull -25\n";
				std::cout << "Fuel -15\n";
				std::cout << "Credits -100\n";
			}
			break;
	}

}
