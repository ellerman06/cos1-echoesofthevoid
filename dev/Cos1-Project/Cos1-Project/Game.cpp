#include <iostream>
#include "Game.h"

void Game::start()
{
	displayMainMenu();
}

void Game::displayMainMenu()
{
	int choice = 0;
	while (choice != 5)
	{
		std::cout <<
			"=====================================\n";
		std::cout << "          ECHOES OF THE VOID\n";
		std::cout <<
			"=====================================\n";
		std::cout << "1. View Ship Status\n";
		std::cout << "2. Travel\n";
		std::cout << "3. Trade\n";
		std::cout << "4. Repair Ship\n";
		std::cout << "5. Exit\n";
		
		std::cout << "\nChoice: ";
		std::cin >> choice; 

		switch (choice)
		{
		case 1: 
			playerShip.displayStatus();
			break;
		case 2:
			std::cout << "\nTravel sytem coming soon. . . \n";
		case 3: 
			std::cout<< "\nTrading sytem coming soon. . . \n";
		case 4: 
			std::cout<< "\nRepair sytem coming soon. . . \n";
		case 5: 
			std::cout<< "\nSafe travels, Captain.\n";
		case 6: 
			std::cout<< "\nInvalid Choice. \n";

		}

	}
}
