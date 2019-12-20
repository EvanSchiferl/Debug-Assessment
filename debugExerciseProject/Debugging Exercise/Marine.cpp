#include "Marine.h"
#include "Entity.h"

static int health;

Marine::Marine()
{
	int health = 50;
}


Marine::~Marine()
{
}

int Marine::attack()
{
	return 10;
}

int Marine::squad()
{
	return 10;
}

void Marine::takeDamage(int damage)
{
	 health -= damage;
	 if (health < 0)
		 health = 0;
}

bool Marine::marineAlive()
{
	return health > 0;
}

