#include "Weapon.h"



Weapon::~Weapon()
{
    //dtor
}

Weapon::Weapon(){}

Weapon::Weapon(int d)
{
    damage = d;
}

int Weapon::GetDamage()
{
    return damage;
}
