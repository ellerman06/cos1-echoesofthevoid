#include "Ship.h"
#include "iostream"
#include "Game.h"


Ship::Ship()
{
	fuel = 100;
	hull = 100;
	credits = 500;
}

void Ship::displayStatus() const
{
	std::cout << "\n===== SHIP STATUS ======\n";
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Hull: " << hull << std::endl;
	std::cout << "Credits: " << credits << std::endl;
	

}

int Ship::getFuel() const
{
	return fuel;
}

int Ship::getHull() const
{
	return hull;
}

int Ship::getCredits() const
{
	return credits;
}


void Ship::addFuel(int amount)
{
	fuel += amount;
	if (fuel > 100)
	{
		fuel = 100; 
	}
}

void Ship::useFuel(int amount)
{
	fuel -= amount;
	if (fuel < 0)
	{
		fuel = 0;
	}
}

void Ship::repairHull(int amount)
{
	hull += amount;
	if (hull > 100)
	{
		hull = 100;
	}
}

void Ship::damageHull(int amount)
{
	hull -= amount;
	if (hull < 0)
	{
		hull = 0;
	}
}

void Ship::addCredits(int amount)
{
	credits += amount;
}

void Ship::spendCredits(int amount)
{
	credits -= amount; 
	if (credits < 0)
	{
		credits = 0; 
	}
}
