#include "CentralBluf.h"


CentralBluf::CentralBluf()
{
    //ctor
}

CentralBluf::~CentralBluf()
{
    //dtor
}

void CentralBluf::add(Pers *p)
{
    heroes.push_back(p);
}

void CentralBluf::burst()
{
    for(auto it : heroes)
    {
        it->damage(30);
    }
}
