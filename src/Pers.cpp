#include "Pers.h"

Pers::~Pers()
{
    //dtor
}

Pers::Pers(int hp, Weapon weap)
{
    HP = hp;
    this->w = weap;
}

void Pers::attack (Pers &p)
{
    int w_damage = w.GetDamage();
    p.damage(w_damage);
}

int Pers::damage(int d)
{
    HP -= d;
}

