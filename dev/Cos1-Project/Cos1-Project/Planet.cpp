#include "Planet.h"
#include <iostream>

Planet::Planet()
{
	name = "Unknown";
	fuelPrice = 0;
	repairCost = 0; 
}

Planet::Planet(std::string name, int fuelPrice, int repairCost)
{
	this->name = name;
	this->fuelPrice = fuelPrice;
	this->repairCost = repairCost;
}

std::string Planet::getName() const
{
	return name;
}

int Planet::getFuelPrice() const
{
	return fuelPrice;
}

int Planet::getRepairCost() const
{
	return repairCost;
}

void Planet::displayPlanetInfo() const
{
	std::cout << "  \nPlanet: " << name << std::endl;
	std::cout << " Fuel Price: " << fuelPrice << std::endl;
	std::cout << " Repair Cost: " << repairCost << std::endl;
}
