#include "Bluffer.h"

Bluffer* Bluffer::_self = 0;


Bluffer::Bluffer(int hp, CentralBluf *cb)
:Pers(hp, nullptr)
{
    //ctor
    this->cb = cb;
}

Bluffer::~Bluffer()
{
    //dtor
}

void Bluffer::damage(int bomb)
{
    HP-= bomb;
}

bool Bluffer::DeleteInstance()
{
    if(_self)
    {
        delete _self;
        _self = 0;
        return true;
    }
    return false;
}


 Bluffer* Bluffer::Instance(int hp, CentralBluf *cb)
{
    if(!_self)
    {
        _self = new Bluffer(hp, cb);
    }
    return _self;
}

void Bluffer::explode()
{
    cb->burst();
}
