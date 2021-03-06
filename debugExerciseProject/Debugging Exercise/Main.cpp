// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2018

#include <iostream>
#include "Marine.h"
#include "Zergling.h"
#include "Entity.h"

using std::cout;
using std::endl;

int squadSize = 10;
int swarmSize = 10;


bool marineAlive(Marine*arr)
{
	for (int squad = 0; squad < squadSize; squad++)
	{
		if(arr[squad].health > 0)
			return true;
	}
	return false;
}

	
bool zerglingAlive(Zergling*arr)
{
	for (int swarm = 0; swarm < swarmSize; swarm++)
	{
		if (arr[swarm].health > 0)
			return true;
	}
	
	return false;
}


// Is there a Marine Alive?
bool marineAlive(Marine * squadArr, size_t arrSize)
{
	return false;
};

// Is there a zergling Alive
bool zerglingAlive(Zergling * swarmArr, size_t arrSize)
{
	return false;
}


int main(void)
{
	Marine squad[10];
	Zergling swarm[10];


	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (marineAlive(squad) && zerglingAlive(swarm)) // If anyone is left alive to fight . . .
	{
		if (marineAlive(squad)) // if there's at least one marine alive
		{
			for (size_t i = 0; i < squadSize; i++) // go through the squad
			{
				// each marine will attack the first zergling in the swarm
				cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;
				int damage = squad[i].attack();

				//find first alive zergling (element of swarm) and make that one take the damage.
			
				for (size_t d = 0; d < 10; d++)
				{
					if (swarm[d].health > 0)
					{
						//apply the damage
						swarm[d].takeDamage(damage);
						//check if it's died
						if(swarm[d].health <= 0)
						{
						// display dead message & reduce swarm size by 1
							swarmSize--;
							cout << "The zergling target dies" << endl;
						}
						else
							cout << "The zergling target lives" << endl;
						//break out of loop 	
						break;
					}


				}
				
				cout << "There are " << swarmSize << " zerglings left." << endl;
			}
		}


		if (zerglingAlive(swarm)) // if there's at least one zergling alive
		{
			for (size_t i = 0; i < swarmSize; i++) // loop through zerglings
			{
				cout << "A zergling attacks for " << swarm[i].attack() << " damage." << endl;
				int damage = swarm[i].attack();
				//find first alive marine (element of sqaud) and make that one take the damage.

				squad[0].takeDamage(damage);
				squadSize--;
				if (!squad[0].isAlive)
				{
					cout << "The marine target dies" << endl;
				}
				else
					cout << "The marine succumbs to his wounds." << endl;
					cout << "There are " << squadSize << " marines left." << endl;
					
					if (squadSize < 0)
					{
						squadSize = 0;
					}
			}
		}
	}

	// Once one team is completely eliminated, the fight ends and one team wins
	cout << "The fight is over. ";
	if (marineAlive(squad))
	{
		cout << "The Marines win." << endl;
	} else 
		cout << "The Zerg win." << endl;
	}
;
