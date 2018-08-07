#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Enemy.h"
#include "Orcs.h"
#include "Globins.h"


using namespace std;
Orcs::Orcs()
{
}

int Orcs::Orcsattackfx(int *Pherohealth, string Playerchoice, int *POrcshealth)
{
    if (Playerchoice == "defend")
    {
        cout << "The Orc guard decided to swing his sword toward you and attempt to deal " << Orcsattack << " damage! \n";
        //tests whether the attack is more than the defense, if it is, then it deducts the health. If not, then the attack is reset back to zero.
        test = Orcsattack - herodefense;
        if (test < 0)
        {
            test = 0;
        }
        cout << "You put up your hands and attempted to defend the Orc Guard's attack! You deflected a total of " << herodefense << " damage from the Orc Guard, while he attempted to deal " << Orcsattack << " damage. The Orc guard dealt a total of " << test << " damage! \n";
        if (test > 0)
        {
            *Pherohealth = *Pherohealth - test;
        }
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
    if (Playerchoice == "heal")
    {
        cout << "The Orc guard has decided to attack you with his sword while you held out your hands in an attempt to heal, the Orc guard dealt a total of " << Orcsattack << " damage. \n";
        cout << "However, you attempted to heal " << heroheal << " hit points. \n";
        *Pherohealth = *Pherohealth - Orcsattack;
        *Pherohealth = *Pherohealth + heroheal;
        //Caps the maximum heal to be 10.
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
    cout << "You decided to take a swing at the orc guard! You swung your powerful fists and dealt " << heroattack << " damage! \n\n";
    *POrcshealth = *POrcshealth - heroattack;
    cout << "The orc decided to attack you as well! He swung his sword towards you and deals " << Orcsattack << " damage! \n";
    *Pherohealth = *Pherohealth - Orcsattack;
    cout << "Your hero now has " << *Pherohealth << " health. \nThe orc guard has " << *POrcshealth << " health. What would you like to do? \n\n";

    return *Pherohealth;
    return *POrcshealth;
}

int Orcs::Orcsdefensefx(int *Pherohealth, string Playerchoice,int *POrcshealth)
{
     if (Playerchoice == "defend")
    {
        cout << "The Orc guard decided to defend as well, thus no one made an attempt to hurt each other. \n";
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
     if (Playerchoice == "heal")
    {
        cout << "The Orc guard has decided to defend with his shield while you held out your hands in an attempt to heal, the Orc guard can only hope that he had attacked you instead. \n";
        cout << "You attempted to heal " << heroheal << " hit points.\n";
        *Pherohealth = *Pherohealth + heroheal;
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
    cout << "The orc decided to defend against your attack! You attempted to deal " << heroattack << " damage but he put up his shield and blocked " << Orcsdefense << " damage! \n";
    test = heroattack - Orcsdefense;
    if (test < 0)
    {
        test = 0;
    }
    cout << "You dealt a total damage of " << test << " to the Orc." << endl;
    if (test > 0)
    {
        *POrcshealth = *POrcshealth - test;
    }
    cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";

    return *POrcshealth;
}

int Orcs::Orcshealfx (int *Pherohealth, std::string Playerchoice, int *POrcshealth)
{
      if (Playerchoice == "defend")
    {
        cout << "The Orc guard decided heal while you put up both of your hands to defend. The Orc guard healed a total of " << Orcsheal << " hit points. \n";
        *POrcshealth = *POrcshealth + Orcsheal;
        if (*POrcshealth > 10)
        {
            *POrcshealth = *POrcshealth - Orcsheal;
        }
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
     if (Playerchoice == "heal")
    {
        cout << "The Orc guard has decided to heal as well as you held out your hands in an attempt to heal. You stand back and casts your spells. \n";
        cout << "You attempted to heal " << heroheal << " hit points \n while the Orc Guard attempted to heal " << Orcsheal << " hit points. \n";
        *Pherohealth = *Pherohealth + heroheal;
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
        *POrcshealth = *POrcshealth + Orcsheal;
        if (*POrcshealth > 10)
        {
            *POrcshealth = *POrcshealth - Orcsheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";
        return *Pherohealth;
        return *POrcshealth;
    }
    cout << "The orc decided to heal while you decided to attack! Your attack dealt a total of " << heroattack << " damage. \n \n";
    *POrcshealth = *POrcshealth - heroattack;
    cout << "However, the orc healed " << Orcsheal << " hit points! \n \n";
    *POrcshealth = *POrcshealth + Orcsheal;
    if (*POrcshealth > 10)
    {
        *POrcshealth = *POrcshealth - Orcsheal;
    }
    cout << "Your hero now has " << *Pherohealth << " health. \nThe Orc guard has " << *POrcshealth << " health. \nWhat would you like to do? \n\n";

    return *POrcshealth;
}
