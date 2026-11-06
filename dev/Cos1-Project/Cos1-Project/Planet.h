#pragma once

#include <string>

class Planet
{
private:
	std::string name; 
	int fuelPrice;
	int repairCost;

 public:
	Planet();

	Planet(std::string name, int fuelPrice, int repairCost);

	std::string getName() const;
	int getFuelPrice() const;
	int getRepairCost() const;

	void displayPlanetInfo() const;

};