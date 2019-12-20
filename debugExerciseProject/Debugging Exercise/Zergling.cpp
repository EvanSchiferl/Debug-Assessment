#include "Zergling.h"
#include "Entity.h"

static int health;

Zergling::Zergling()
{
	int health = 50;
}


Zergling::~Zergling()
{
}

int Zergling::attack()
{
	return 10;
}

int Zergling::swarm()
{
	return 20;
}

void Zergling::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
		health = 0;
}

bool Zergling::zerglingAlive()
{
	return health = 0;
}