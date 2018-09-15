#ifndef WEAPON_H
#define WEAPON_H


class Weapon
{
    public:
        Weapon(int d);
        Weapon();

        virtual ~Weapon();
        int GetDamage();

    protected:
        int damage;


    private:


};

#endif // WEAPON_H

