#include <iostream>
#include "Game.h"

void Game::start()
{
	intialPlanets();
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
			displayPlanets();
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

void Game::intialPlanets()
{
	planets.push_back(Planet("Earth Station", 5, 10));
	planets.push_back(Planet("Mars Colony", 3, 15));
	planets.push_back(Planet("Titan Outpost", 7, 5));
	planets.push_back(Planet("Nebula Station", 10, 20));
}
void Game::displayPlanets()
{
	std::cout << "\n===== DESTINATIONS =====\n";
	
	for (int i = 0; i < planets.size(); i++)
	{
		std::cout << i + 1 << ". " << planets[i].getName() << std::endl;
	}
	std::cout << std::endl; 

}
