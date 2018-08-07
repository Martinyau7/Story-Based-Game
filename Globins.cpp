#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Enemy.h"
#include "Orcs.h"
#include "Globins.h"


using namespace std;

Globins::Globins()
{
}

int Globins::Globinsattackfx(int *Pherohealth, string Playerchoice,int *PGlobinshealth)
{
    if (Playerchoice == "defend")
    {
        cout << "The Globin leader attempted to deal " << Globinsattack << ", but your defense deflected " << herodefense << " damage. \n";
        test = Globinsattack - herodefense;
        if (test < 0)
        {
            test = 0;
        }
        cout << "The Globin leader dealt a total of " << test << " damage in this turn! \n";
        if (test > 0)
        {
            *Pherohealth = *Pherohealth - test;
        }
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";


    return *Pherohealth, *PGlobinshealth;
    }
    if (Playerchoice == "heal")
    {
        cout << "You attempted to heal as the Globin leader swung his fist at you, the Globin leader dealt a total of " << Globinsattack << " damage, while you healed " << heroheal << " hit points.";
        *Pherohealth = *Pherohealth - Globinsattack;
        *Pherohealth = *Pherohealth + heroheal;
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

    return *Pherohealth, *PGlobinshealth;

    }
    cout << "As you held up your fists to take a swing, the globin leader also decides to attack you as well. He held up his hands and takes a jab at you. \n";
    cout << "You dealt a total of " << heroattack << " damage to the globin leader. \n";
    *PGlobinshealth = *PGlobinshealth - heroattack;
    cout << "You see the fist coming towards you and the globin leader deals " << Globinsattack << " damage! \n";
    *Pherohealth = *Pherohealth - Globinsattack;
    cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

     return *Pherohealth, *PGlobinshealth;
}

int Globins::Globinsdefensefx (int *Pherohealth, std::string Playerchoice,int *PGlobinshealth)
{
        if (Playerchoice == "defend")
    {
        cout << "You and the globin leader both attempted to defend in this turn, no damage was done to anyone. \n";
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

        return *Pherohealth, *PGlobinshealth;
    }
    if (Playerchoice == "heal")
    {
        cout << "You attempted to heal as the Globin leader defend, you healed " << heroheal << " hit points. \n";
        *Pherohealth = *Pherohealth + heroheal;
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader guard has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

        return *Pherohealth, *PGlobinshealth;

    }
    cout << "The globin leader decided to defend while you swung your fist at him! You attempted to deal " << heroattack << " damage, but the Globin leader deflected " << Globinsdefense << " damage. \n";
    test = heroattack - Globinsdefense;

    if (test < 0)
    {
        test = 0;
    }
    cout << "You dealt a total damage of " << test << " to the Goblin leader." << endl;
    if (test > 0)
    {
        *PGlobinshealth = *PGlobinshealth - test;
    }
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";
      return *Pherohealth, *PGlobinshealth;

}

int Globins::Globinshealfx (int *Pherohealth, std::string Playerchoice,int *PGlobinshealth)
{
        if (Playerchoice == "defend")
    {
        cout << "You defend while the globin leader attempted to heal, the globin leader healed a total of " << Globinsheal << " hit points. \n";
        *PGlobinshealth = *PGlobinshealth + Globinsheal;
        if (*PGlobinshealth > 10)
        {
            *PGlobinshealth = *PGlobinshealth - Globinsheal;
        }
        cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

        return *Pherohealth, *PGlobinshealth;
    }
    if (Playerchoice == "heal")
    {
        cout << "You attempted to heal " << heroheal << " hit points, while the Globin leader decided to do the same \n";
        *Pherohealth = *Pherohealth + heroheal;
        if (*Pherohealth > 10)
        {
            *Pherohealth = *Pherohealth - heroheal;
        }
        cout << "The globin leader has healed " << Globinsheal << " hit points. \n";
        *PGlobinshealth = *PGlobinshealth + Globinsheal;
        if (*PGlobinshealth > 10)
        {
            *PGlobinshealth = *PGlobinshealth - Globinsheal;
        }
         cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader guard has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";

        return *Pherohealth, *PGlobinshealth;

    }
    cout << "The globin leader decided to heal while you swung your fist at him! You attempted to deal " << heroattack << " damage. \n";
    *PGlobinshealth = *PGlobinshealth - heroattack;
    cout << "The globin leader healed a total of " << Globinsheal << " hit points. \n";
        *PGlobinshealth = *PGlobinshealth + Globinsheal;
        if (*PGlobinshealth > 10)
        {
            *PGlobinshealth = *PGlobinshealth - Globinsheal;
        }
    cout << "Your hero now has " << *Pherohealth << " health. \nThe Globin leader has " << *PGlobinshealth << " health. \nWhat would you like to do? \n\n";
    return *Pherohealth, *PGlobinshealth;


}
