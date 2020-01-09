#pragma once

class Marine
{
public:
	bool marineAlive();
	bool isAlive;
	int squad();
	int health = 20;

	Marine();
	~Marine();

	int attack();
	void takeDamage(int damage);

};

