#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Enemy.h"
#include "Orcs.h"
#include "Globins.h"

using namespace std;
//initialize all functions in classes
int Orcsattackfx(int *Pherohealth,std::string Playerchoice,int *POrcshealth);
int Orcsdefensefx (int *Pherohealth, std::string Playerchoice,int *POrcshealth);
int Orcshealfx (int *Pherohealth, std::string Playerchoice, int *POrcshealth);
int Globinsattackfx(int *Pherohealth,std::string Playerchoice,int *PGlobinshealth);
int Globinsdefensefx (int *Pherohealth, std::string Playerchoice,int *PGlobinshealth);
int Globinshealfx (int *Pherohealth, std::string Playerchoice, int *PGlobinshealth);
void convert (string &c);

int main()
{
    srand(time(0));
    string choice;
    string Playerchoice;
    string c;
    int i;
    int Enemychoice;
    int Orcshealth = 10;
    int herohealth = 10;
    int Globinshealth = 10;


    //start of dialogue
    cout << "Hello adventurer! Welcome to the your hero's journey! \nYou have grown to an adult in the Rome culture and your elder tells you that you must complete the hero's journey to be considered a man in the culture. \n";
    cout << "As you are walking down your path to become the most prestigious hero in Rome, you are encountered by a forked road. \n \n";
    cout << "You noticed a sign that says turning left will result in encountering the orcs and the right is goblins. \n \n";
    cout << "What route would you like to choose? (type 'left' or 'right') \n";
    // Loops until the player make a valid choice
   while (i<INT_MAX)
    {
    cout << "Your choice: ";
    cin >> choice;
    cout << endl;
    Enemy eo;
    eo.convert(choice);
    if (choice == "back")
    {
        cout << "There is no turning back! You are not a coward. Try again. \n";
        cin.clear();
        cin.ignore();
        continue;
    }
    if ((choice == "left") || (choice == "right") || (choice == "up"))
    {
        break;
    }
    cout << "Invalid input, please try again \n";
    i++;
    }

    cout << "You have chosen to turn " << choice << ", you chose wisely. \n \n";
    if (choice == "up")
    {
        cout << "You see an inn on the side of the road, and you decided to 'turn up'. \n \n";
        cout << "You got really drunk and went home." << endl;
        return 0;
    }


    // start of adventure depending on what the user chose.
    if (choice == "right")
        {
                cout << "You stroll down the path to the right. You noticed that the tree lines were growing higher and higher and it was more difficult to see the end of your path.\n";
                cout << "As you listen to the nature, you hear birds, buzzes from the insects, and rustling among the leaves. \n";
                cout << "You see one pair of eyes looking at you between the tree lines.. and your heart beats faster as you scan around the proximity. \n";
                cout << "You catch the glimpse of more and more eyes staring at you and you held up your hands in defense. You look forward and see that a globin leader has emerged in front of you. \n";
                cout << "You may choose to fight or run away and go to the left. (You can choose: 'fight' or 'run')" << endl;
            while ((choice != "fight")&&(choice != "run"))
            {
                cout << "Your choice: ";
                cin >> choice;
                cout << endl;
                Enemy eo;
                eo.convert(choice);
                    if ((choice == "fight")||(choice == "run"))
                {
                    break;
                }
                cout << "You have entered an invalid input. Please try again. (fight or run)\n";
            }
        }
        if (choice == "fight")
        {
            cout << "You raise up your hands and prepare for battle! \n";
            Enemy eo;
            eo.Encounter(herohealth, Playerchoice);
            while ((Globinshealth > 0)&&(herohealth > 0))
        {
            cout << "Your choice: ";
            cin >> Playerchoice;
            cout << endl;
            Enemy eo;
            eo.convert(Playerchoice);
            if ((Playerchoice != "attack")&&(Playerchoice != "defend")&&(Playerchoice != "heal"))
            {
                getline(cin,Playerchoice);
                Playerchoice.clear();
                cout << "You have entered an invalid input. Please try again. (attack, defend, heal)\n";
                continue;
            }
            //randomly generates an enemy choice out of the 3 options.
            Enemychoice = 1+(rand()%3);
            if (Enemychoice == 1)
            {
                Globins go;
                go.Globinsattackfx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (Enemychoice == 2)
            {
                Globins go;
                go.Globinsdefensefx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (Enemychoice == 3)
            {
                Globins go;
                go.Globinshealfx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (herohealth <= 0)
            {
                cout << "Game Over. Please press any key to continue and press 'F9' to start again." << endl;
                break;
            }
            if (Globinshealth <= 0)
            {
                cout << "You have defeated the Globin Leader!" << endl;
                break;
            }
        }
        }
        if (choice == "run")
        {
            cout << "You chose to turn around and head back towards the left path, where you discovered an Orc town. \n";
            choice = "left";
        }

// if player chooses to go left or turns back.
    if (choice == "left")
    {
        cout << "As you stroll down the path of orc town, you noticed that they are a wonderful society with an organized community. You walk into a near-by inn and decide to take a break from the road... \n";
        cout << "\n BOOM! \n \n";
        cout << "You are woken up by the orcs' guards who said you are trespassing orc territory and you cannot stay. You tell the guard that you rightfully paid for the room and you had the right to stay \n";
        cout << "The Orc guard was not pleased by this answer, as he yielded up his sword and shield, he demanded that you must leave the vicinity at once. (You can either 'obey' or 'fight') \n \n";
        while ((choice != "fight")&&(choice != "obey"))
        {
            cout << "Your choice: ";
            cin >> choice;
            cout << endl;
            Enemy eo;
            eo.convert(choice);
            if ((choice == "fight")||(choice == "obey"))
            {
                break;
            }
            cout << "You have entered an invalid input. Please try again. (fight or obey)\n";

        }
        if (choice == "fight")
        {
            cout << "You raise up your hands and prepare for battle! \n";
            Enemy eo;
            eo.Encounter(herohealth, Playerchoice);

       while ((Orcshealth > 0)&&(herohealth > 0))
        {
            cout << "Your choice: ";
            cin >> Playerchoice;
            cout << endl;
            Enemy eo;
            eo.convert(Playerchoice);
            if ((Playerchoice != "attack")&&(Playerchoice != "defend")&&(Playerchoice != "heal"))
            {
                getline(cin,Playerchoice);
                Playerchoice.clear();
                cout << "You have entered an invalid input. Please try again. (attack, defend, heal)\n";
                continue;
            }
             Enemychoice = 1+(rand()%3);
            if (Enemychoice == 1)
            {
                Orcs oo;
                oo.Orcsattackfx(&herohealth, Playerchoice, &Orcshealth);
            }
            if (Enemychoice == 2)
            {
                Orcs oo;
                oo.Orcsdefensefx(&herohealth, Playerchoice, &Orcshealth);
            }
            if (Enemychoice == 3)
            {
                Orcs oo;
                oo.Orcshealfx(&herohealth, Playerchoice, &Orcshealth);
            }
            if (Orcshealth <= 0)
            {
                cout << "You have defeated the orc guard! You walk out from the inn and continue your journey " << endl;
                break;
            }
            if (herohealth <= 0)
            {
                cout << "Game Over. Please press any key to continue and press 'F9' to start again." << endl;
                break;
            }
        }
        }
        if (choice == "obey")
        {
            cout << "You decided to give in to the Orc's commands and left the inn. As you move through town, you noticed the Orc Guard was following you around. You started feeling uncomfortable and left town. ";
            cout << "As you stumbled into the woods, you noticed that the trees were not alone.. there were some creatures inside. You try to carry on and complete your journey but you found yourself surrounded by Globins. ";
            cout << "As you stand alone, you noticed that the only way out is to take on the fight. \n \nTheir leader steps up to you and pounds his chest. ";

            Enemy eo;
            eo.Encounter(herohealth, Playerchoice);
            while ((Globinshealth > 0)&&(herohealth > 0))
        {
            cout << "Your choice: ";
            cin >> Playerchoice;
            cout << endl;
            Enemy eo;
            eo.convert(Playerchoice);
            if ((Playerchoice != "attack")&&(Playerchoice != "defend")&&(Playerchoice != "heal"))
            {
                getline(cin,Playerchoice);
                Playerchoice.clear();
                cout << "You have entered an invalid input. Please try again. (attack, defend, heal)\n";
                continue;
            }
             Enemychoice = 1+(rand()%3);
            if (Enemychoice == 1)
            {
                Globins go;
                go.Globinsattackfx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (Enemychoice == 2)
            {
                Globins go;
                go.Globinsdefensefx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (Enemychoice == 3)
            {
                Globins go;
                go.Globinshealfx(&herohealth, Playerchoice, &Globinshealth);
            }
            if (herohealth <= 0)
            {
                cout << "Game Over. Please press any key to continue and press 'F9' to start again." << endl;
                break;
            }
            if (Globinshealth <= 0)
            {
                cout << "You have defeated the Globin Leader!" << endl;
                break;
            }

        }
        }
    }
    cout << "As you stroll on to the path, you realize that you have became the hero that you strived to be. You fought proudly and is delighted to take on any task. Perhaps that's why the old man wanted you to embark in the journey. \n";
    cout << "You reached the end of the road and discovered an Orc Guard and Globin leader was standing by the old man..\nYou realized that this was all a test, and you've passed. \nCongratulations. You have completed the game. \n\nYou may press F9 to experience the game from the beginning and explore the different options. \n Press any key to continue.";

}
