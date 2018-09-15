#ifndef PERS_H
#define PERS_H

#include "Weapon.h"

class Pers
{
public:



    virtual void attack (Pers *p) {};
    int GetHP()
    {
        return HP;
    }
    virtual void damage(int d) = 0;


protected:

    Pers(int hp, Weapon *weap)
    {
        HP = hp;
        this->w = weap;
    }

    int HP;
    Weapon *w;

private:

};

#endif // PERS_H
