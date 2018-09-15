#ifndef SPIDERMAN_H
#define SPIDERMAN_H

#include <Pers.h>


class Spiderman : public Pers
{
    public:

        void SpiderFlair();
        void damage(int val);
        void attack(Pers *p);


        static Spiderman* Instance(int hp, Weapon *w);
        static bool DeleteInstance();

    protected:

    private:
        Spiderman(int hp,Weapon *w);
        virtual ~Spiderman();

        static Spiderman* _self;


        bool spiderflair;
};

#endif // SPIDERMAN_H
