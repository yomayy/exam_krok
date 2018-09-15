#ifndef BLUFFER_H
#define BLUFFER_H
#include <Pers.h>
#include <CentralBluf.h>

class Bluffer : public Pers
{
    public:

        void explode();
        void damage(int bomb);

        static Bluffer* Instance(int hp, CentralBluf *cb);
        static bool DeleteInstance();

    protected:

    private:

        Bluffer(int hp, CentralBluf *cb);
        virtual ~Bluffer();

        static Bluffer* _self;
        CentralBluf *cb;
};

#endif // BLUFFER_H
