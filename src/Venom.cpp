#include "Venom.h"

Venom* Venom::_self = 0;

Venom::Venom(int hp, Weapon *w)
:Pers(hp,w)
{
    shield = false;
}

Venom::~Venom()
{
    //dtor
}

bool Venom::DeleteInstance()
{
    if(_self)
    {
        delete _self;
        _self = 0;
        return true;
    }
    return false;
}


 Venom* Venom::Instance(int hp, Weapon *w)
{
    if(!_self)
    {
        _self = new Venom(hp, w);
    }
    return _self;
}

void Venom::Shield()
{
    shield = true;
}

void Venom::damage(int dam)
{
    if(shield == true)
    {
        HP -= dam/3;
        shield = false;
    }
    else
        HP -= dam;
}

void Venom::attack(Pers *p)
{
    p->damage(w->GetDamage());
}
