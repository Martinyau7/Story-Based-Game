#ifndef ENEMY_H
#define ENEMY_H
#include <string>


class Enemy
{
    public:
        Enemy();
        void Encounter(int herohealth, std::string Playerchoice);
        void convert(std::string &c);
    protected:
       std::string Playerchoice;
        int heroattack = 1+(rand()%3);
        int herodefense = 1+(rand()%3);
        int heroheal = 1+(rand()%3);
        int test = 0;
};

#endif // ENEMY_H
