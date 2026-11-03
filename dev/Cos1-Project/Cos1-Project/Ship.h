#pragma once
class Ship
{
private:

	int fuel;
	int hull;
	int credits;

public:
	Ship();
	void displayStatus() const;

	int getFuel() const; // thank you for having us practice commands, ctrl + d is lovely!
	int getHull() const;
	int getCredits() const;

	void addFuel(int amount);
	void useFuel(int amount);
	void repairHull(int amount);
	void damageHull(int amount);
	void addCredits(int amount);
	void spendCredits(int amount);

};
