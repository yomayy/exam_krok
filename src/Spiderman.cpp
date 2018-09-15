#include "Spiderman.h"


Spiderman* Spiderman::_self = 0;

Spiderman::Spiderman(int hp, Weapon *w)
    :Pers(hp,w)
{
    spiderflair = false;
}

Spiderman::~Spiderman()
{
    //cout << "Spiderman was died" <<endl;
}

bool Spiderman::DeleteInstance()
{
    if(_self)
    {
        delete _self;
        _self = 0;
        return true;
    }
    return false;
}


 Spiderman* Spiderman::Instance(int hp, Weapon *w)
{
    if(!_self)
    {
        _self = new Spiderman(hp, w);
    }
    return _self;
}

void Spiderman::SpiderFlair()
{
    spiderflair = true;
}

void Spiderman::damage(int val)
{
    if(spiderflair==true)
    {
        HP -= val/2;
        spiderflair = false;
    }
    else
        HP -= val;
}

void Spiderman::attack(Pers *p)
{
    p->damage(w->GetDamage());
}

