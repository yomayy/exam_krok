#ifndef CENTRALBLUF_H
#define CENTRALBLUF_H

#include "Pers.h"
#include "vector"

using namespace std;

class CentralBluf
{
    public:
        CentralBluf();
        virtual ~CentralBluf();

        void add(Pers* p);
        void burst();


    protected:

    private:
        vector<Pers*> heroes;
};

#endif // CENTRALBLUF_H
