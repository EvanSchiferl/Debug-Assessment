#pragma once

class Marine
{
public:
	bool marineAlive();
	bool isAlive;
	int squad();
	int health = 10;

	Marine();
	~Marine();

	int attack();
	void takeDamage(int damage);

};

