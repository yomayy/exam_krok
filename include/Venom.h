#ifndef VENOM_H
#define VENOM_H

#include <Pers.h>


class Venom : public Pers
{
    public:

        void Shield();
        void damage(int dam);
        void attack(Pers *p);

        static Venom* Instance(int hp, Weapon *w);
        static bool DeleteInstance();

    protected:

    private:
        Venom(int hp, Weapon *w);
        virtual ~Venom();

        static Venom* _self;


        bool shield;
};

#endif // VENOM_H
