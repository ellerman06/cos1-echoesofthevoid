#include <iostream>
#include "Game.h"
#include "Planet.h"


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

		std::cout << "Current Location: : " << currentLocation << "\n\n";
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
			  travel();
			 break;
		case 3:
			trade();
			break;
		case 4:
			  repairShip();
			 break;
		case 5:
			std::cout << "\nSafe travels, Captain.\n";
			break;
		default: std::cout << "\nInvalid Choice\n";
			break;
		}
		checkLoseCondition();
		checkWinCondition();
	}
}

void Game::intialPlanets()
{
	planets.push_back(Planet("Earth Station", 5, 10));
	planets.push_back(Planet("Mars Colony", 3, 15));
	planets.push_back(Planet("Titan Outpost", 7, 5));
	planets.push_back(Planet("Nebula Station", 10, 20));

	currentLocation = "Earth Station";
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

void Game::travel()
{
	if (playerShip.getFuel() < 15) //guard clause 
	{
		std::cout << "\nFuel too low, need to stop by the nearest moon to fill up!\n";
		return;
	}
	int destination;
	displayPlanets();
	std::cout << "Traveler, please select a destination: ";
	std::cin >> destination;
	if (destination >= 1 && destination <= planets.size())
	{
		if (currentLocation == planets[destination - 1].getName())
		{
			std::cout << "\n You are already there, fuel is not cheap, Captain!\n";
			return;
		}
		currentLocation = planets[destination - 1].getName();
		playerShip.useFuel(15); //travel costs
		std::cout << "\nTravel succesfull!\n";

		event.triggerRandomEvent(playerShip);

		std::cout << "Current Location: " << currentLocation << std::endl; 
		std::cout << "Fuel Remaining: " << playerShip.getFuel() << std::endl;
	}
	else
	{
		std::cout << "\nInvalid destination.\n";
	}
}
void Game::repairShip()
{
	const int repairCost = 50;
	const int repairAmount = 25;
	if (playerShip.getCredits() < repairCost)
	{
		std::cout << "\nNot enough credits.\n";
		return;
	}
		playerShip.spendCredits(repairCost);
		playerShip.repairHull(repairAmount);

		std::cout << "\nShip repaired!\n";
		std::cout << "Hull +" << repairAmount << std::endl;
		std::cout << "Credits -" << repairCost << std::endl;
}

void Game::trade()
{
	const int fuelCost = 10; 
	const int fuelAmount = 5;

	int choice;

	std::cout << "\n======== SPACE PORT MARKET ========\n";
	std::cout << "Fuel Price: " << fuelCost << "\nCredits = " << fuelAmount << " Fuel\n";

	std::cout << "\nCredits: " << playerShip.getCredits() << std::endl; ;
	std::cout << "Fuel: " << playerShip.getFuel() << std::endl;

	std::cout << "\n1. Buy Fuel?\n";
	std::cout << "\n2. Leave Market!\n";

	std::cout << "\nChoice: ";
	std::cin >> choice; 

	switch (choice)
	{
	case 1:
		if (playerShip.getFuel() == 100)
		{
			std::cout << "\nFuel tanks are already full.\n";
			return;
		}
		if (playerShip.getCredits() < fuelCost)
		{
			std::cout << "\nNot enough credits\n";
			return;
		}

		playerShip.spendCredits(fuelCost);
		playerShip.addFuel(fuelAmount);

		std::cout << "\nFuel purchased!\n";
		std::cout << "Fuel +" << fuelAmount << std::endl;
		std::cout << "Credits -" << fuelCost << std::endl;

		break;
	case 2:
		std::cout << "\nLeaving market.\n";
		break;
	default:
		std::cout << "\nInvalid choice.\n";
	}
}

void Game::checkWinCondition()
{
	if (currentLocation == "Nebula Station" && playerShip.getCredits() >= 1000)
	{
		std::cout << "\n=============================\n";
		std::cout << "                 VICTORY\n";
		std::cout << "\n=============================\n";
		std::cout << "You reached Nebula Station.\n";
		std::cout << "With 1000+ credits.\n\n";
		std::cout << "Congratulations, Captain!";
		exit(0);

	}
}

void Game::checkLoseCondition()
{
	if (playerShip.getHull() <= 0)
	{
		std::cout << "\n=============================\n";
		std::cout << "                 GAME OVER\n";
		std::cout << "\n=============================\n";
		std::cout << "Your ship was destroyed.\n";
		exit(0);
	}
	if (playerShip.getFuel() <= 0)
	{
		std::cout << "\n=============================\n";
		std::cout << "                 GAME OVER\n";
		std::cout << "\n=============================\n";
		std::cout << "You have ran out of fuel!\n";
		exit(0);
	}
}
