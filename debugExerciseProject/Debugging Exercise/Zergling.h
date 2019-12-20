#pragma once

class Zergling
{
public:
	bool zerglingAlive();
	bool isAlive;
	int swarm();
	
	Zergling();
	~Zergling();

	int attack();
	void takeDamage(int damage);

};

