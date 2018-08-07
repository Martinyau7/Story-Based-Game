#ifndef GLOBINS_H
#define GLOBINS_H


class Globins: public Enemy
{
    public:
        Globins();
        int Globinshealth = 10;
        int Globinsattack = 1+(rand()%3);
        int Globinsdefense = 1+(rand()%3);
        int Globinsheal = 1+(rand()%2);
        int Globinsattackfx(int *Pherohealth,std::string Playerchoice,int *PGlobinshealth);
        int Globinsdefensefx (int *Pherohealth, std::string Playerchoice,int *PGlobinshealth);
        int Globinshealfx (int *Pherohealth, std::string Playerchoice, int *PGlobinshealth);


};

#endif
