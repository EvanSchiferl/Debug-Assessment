#pragma once

class Marine
{
public:
	bool marineAlive();
	bool isAlive;
	int squad();

	Marine();
	~Marine();

	int attack();
	void takeDamage(int damage);

};

