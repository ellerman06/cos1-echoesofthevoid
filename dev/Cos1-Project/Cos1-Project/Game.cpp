#include <iostream>
#include "Game.h"
#include "Planet.h"
#include <fstream>
#include <string>


void Game::start()
{
	intialPlanets();
	std::cout << "Welcome to Echoes of the Void.\n";
	std::cout << "Please enter your name, Captain: ";
	std::getline(std::cin, captainName);
	std::cout <<
		
		"-----------------------------------------\n";
	std::cout << "Greetings Captain" << " " << captainName << ", let's begin our journey through space!\n";
	displayMainMenu();
}

void Game::displayMainMenu()
{
	int choice = 0;
	while (choice != 7)
	{
		std::cout <<
			"=======================================================\n";
		std::cout << "         ECHOES OF THE VOID\n";
		std::cout <<
			"=======================================================\n";

		std::cout << "Current Location: : " << currentPlanet->getName() << std::endl;
		std::cout << "Credits: : " << playerShip.getCredits() << std::endl;
		std::cout << "Fuel: : " << playerShip.getFuel() << std::endl;
		std::cout << "Hull: : " << playerShip.getHull() << "\n\n";
		
		std::cout << "1. View Game Objectives\n";
		std::cout << "2. View Ship Status\n";
		std::cout << "3. Travel\n";
		std::cout << "4. Trade\n";
		std::cout << "5. Repair Ship\n";
		std::cout << "6. Save Game\n";
		std::cout << "7. Load Game\n";
		std::cout << "8. Exit\n";
		
		std::string input;
		std::cout << "\nChoice: ";
		std::getline(std::cin, input);
		try
		{
			choice = std::stoi(input);
		}
		catch(...)
		{
			std::cout << "\nInvalid Choice.\n";
			continue; 
		}

		switch (choice)
		{
		case 1:
			displayObjectives();
			break;
		case 2:
			playerShip.displayStatus();
			 break;
		case 3:
			travel();
			break;
		case 4:
			trade();
			 break;
		case 5:
			repairShip();
			break;
		case 6:
			saveGame();
			break;
		case 7:
			loadGame();
			break;
		case 8:
			std::cout << "\nSafe Travels, Captain.\n";
			break;
		default: std::cout << "\nInvalid Choice\n";
			break;
		}
		checkLoseCondition();
		checkWinCondition();
	}
}

void Game::displayObjectives()
{
	std::cout <<
		"=====================================\n";
	std::cout << "          ECHOES OF THE VOID\n";
	std::cout << "OBJECTIVES\n";
	std::cout <<
		"=====================================\n";
	std::cout << "\nMission Briefing:\n";
	std::cout << "Travel across the galaxy, manage your\n";
	std::cout << "resources, and build your fortune.\n";
	std::cout << "\n===== WIN CONDITIONS =====\n";
	std::cout << "Reach Nebula Statiion with 1000 Credits or more!\n";

	std::cout << "\n===== LOSE CONDITIONS =====\n";
	std::cout << "- Hull integrity reaches 0\n";
	std::cout << "- Fuel reaches 0.\n";


	std::cout << "\n===== TIPS =====\n";
	std::cout << "- Travel carefully and monitor fuel.\n";
	std::cout << "- Repair your ship after taking damage.\n";
	std::cout << "- Use trading to earn and manage Credits.\n";
	std::cout << "- Random events can help or hurt you.\n";\
		std::cout <<
		"\n=====================================\n";


}

void Game::intialPlanets()
{
	planets.push_back(Planet("Earth Station", 5, 10));
	planets.push_back(Planet("Mars Colony", 3, 15));
	planets.push_back(Planet("Lunar Gateway", 4, 8));
	planets.push_back(Planet("Cygnus Reach", 8, 6));
	planets.push_back(Planet("The Oracle", 6, 12));
	planets.push_back(Planet("Titan Outpost", 7, 5));
	planets.push_back(Planet("Nebula Station", 10, 20));

	currentPlanet = &planets[0];
	currentLocation = currentPlanet->getName();
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
	std::string input;
	displayPlanets();
	std::cout << "Traveler, please select a destination: ";
	std::getline(std::cin, input);

	try
	{
		destination = std::stoi(input);
	}
	catch (...)
	{
		std::cout << "\nInvalid destination.\n";
		return;
	}
	if (destination >= 1 && destination <= planets.size())
	{
		if (currentLocation == planets[destination - 1].getName())
		{
			std::cout << "\nYou are already there, fuel is not cheap, Captain!\n";
			return;
		}
		currentPlanet = &planets[destination - 1];
		currentLocation = currentPlanet->getName();

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

	std::cout << "\n======== SPACE PORT MARKET ========\n";
	std::cout << "Fuel Price: " << fuelCost << "\nCredits = " << fuelAmount << " Fuel\n";

	std::cout << "\nCredits: " << playerShip.getCredits() << std::endl; ;
	std::cout << "Fuel: " << playerShip.getFuel() << std::endl;

	std::cout << "\n1. Buy Fuel?\n";
	std::cout << "\n2. Leave Market!\n";


	int choice;
	std::string input;
	std::cout << "\nChoice: ";


	std::getline(std::cin, input);
	try
	{
		choice = std::stoi(input);
	}
	catch (...)
	{
		std::cout << "\nInvalid Choice.\n";
		return;
	}


	switch (choice)
	{
	case 1:
	{



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
		int quantity;
		std::cout << "\nYou can afford " << playerShip.getCredits() / fuelCost << " fuel pack.\n";
		std::cout << "How many fuel packs would you like to buy? ";
		std::getline(std::cin, input);
		try
		{
			quantity = std::stoi(input);
		}
		catch (...)
		{
			std::cout << "\nInvalid amount.\n";
			return;
		}
		if (quantity <= 0)
		{
			std::cout << "\n Please enter a positive number.\n";
			return;
		}
		int totalCost = fuelCost * quantity;
		int totalFuel = fuelAmount * quantity;
		if (playerShip.getCredits() < totalCost)
		{
			std::cout << "\nNOt enough credits.\n";
			return;
		}
		playerShip.spendCredits(totalCost);
		playerShip.addFuel(totalFuel);

		std::cout << "\nFuel purchased!\n";
		std::cout << "Fuel +" << totalFuel << std::endl;
		std::cout << "Credits -" << totalCost << std::endl;

		break;
	}
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
		std::cout << "\n====================================\n";
		std::cout << "                 VICTORY\n";
		std::cout << "\n====================================\n";
		std::cout << "You reached Nebula Station.\n";
		std::cout << "With 1000+ credits.\n\n";
		std::cout << "Congratulations, Captain!";
		std::cout << "\nYour legacy among the stars will be remembered.\n";
		std::cout << "\n=============================\n";

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

void Game::saveGame()
{
	std::ofstream saveFile("savegame.txt");
	if (!saveFile)
	{
		std::cout << "\nUnable to save game.\n";
		return;
	}
	saveFile << playerShip.getFuel() << std::endl;
	saveFile << playerShip.getHull() << std::endl;
	saveFile << playerShip.getCredits() << std::endl;
	saveFile << currentLocation << std::endl;
	saveFile.close();
	
	std::cout << "\Game saved successfully!\n";
}

void Game::loadGame()
{
	std::ifstream loadFile("savegame.txt");
	if (!loadFile)
	{
		std::cout << "\nNo save file found.\n";
		return;
	}
	int fuel; 
	int hull;
	int credits;
	std::string location;
	loadFile >> fuel;
	loadFile >> hull;
	loadFile >> credits; 
	loadFile.ignore(); // skip leftover 

	std::getline(loadFile, location);

	playerShip.setFuel(fuel);
	playerShip.setHull(hull);
	playerShip.setCredits(credits);

	currentLocation = location; 

	loadFile.close();

	std::cout << "\nGame loaded successfully!\n";

}
