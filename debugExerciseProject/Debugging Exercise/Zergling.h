#pragma once

class Zergling
{
public:
	bool zerglingAlive();
	bool isAlive;
	int swarm();
	int health = 10;

	Zergling();
	~Zergling();

	int attack();
	void takeDamage(int damage);

};

