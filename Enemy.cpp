#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Enemy.h"
#include "Orcs.h"
#include "Globins.h"

using namespace std;
Enemy::Enemy()
{
}

//Outputs every time the player chooses to fight and offers the 3 options
void Enemy::Encounter(int herohealth, string Playerchoice)
{
    cout << "During the start of this fight, your hero's health is " << herohealth << " hit points." << endl;
    cout << "What would you like to do? (attack, defend, heal)" << endl;
}
//Converts any uppercase to a lowercase in order to comply with the program.
void Enemy::convert(string &c)
{
    for (int ii=0;ii<c.length();ii++)
    {
        c[ii] = tolower(c[ii]);
    }
}

