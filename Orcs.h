#ifndef ORCS_H
#define ORCS_H
#include <string>

class Orcs: public Enemy
{

    public:
        Orcs();
        int Orcshealth = 10;
        int Orcsattack = 1+(rand()%3);
        int Orcsdefense = 1+(rand()%3);
        int Orcsheal = 1+(rand ()%2);
        int Orcsattackfx(int *Pherohealth,std::string Playerchoice,int *POrcshealth);
        int Orcsdefensefx (int *Pherohealth, std::string Playerchoice,int *POrcshealth);
        int Orcshealfx (int *Pherohealth, std::string Playerchoice, int *POrcshealth);

};

#endif // ORCS_H
