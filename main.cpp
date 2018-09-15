#include <iostream>
#include "Pers.h"
#include "Spiderman.h"
#include "Venom.h"
#include "Web.h"//#include "Blaster.h"
#include "Claws.h"
#include "Bluffer.h"

using namespace std;

int main()
{

    CentralBluf *cb = new CentralBluf();

    Claws *c = new Claws();

    Web *wb = new Web();

    Spiderman* sm = Spiderman::Instance(100, wb);

    Venom* v = Venom::Instance(120, c);

    Bluffer* bluf = Bluffer::Instance(300, cb);

    cb->add(sm);
    cb->add(v);

    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl;
    cout << "bluffer has " << bluf->GetHP() << " HP" << endl << endl;

    cb->burst();

    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl;
    cout << "bluffer has " << bluf->GetHP() << " HP" << endl << endl;




    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;

    sm->attack(v);



    cout << "spiderman has attacked venom" << endl;


    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;

    v->Shield();

    sm->attack(v);

    cout << "spiderman has attacked venom" << endl;


    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;

    sm->attack(v);

    cout << "spiderman has attacked venom" << endl;


    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;


    v->attack(sm);

    cout << "venom has attacked spiderman" <<endl;
    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;

    sm->SpiderFlair();

    v->attack(sm);

    cout << "venom has attacked spiderman" <<endl;
    cout << "spiderman has " << sm->GetHP() << " HP" << endl;
    cout << "venom has " << v->GetHP() << " HP" << endl << endl;


    return 0;
}
