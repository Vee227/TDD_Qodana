#ifndef SUSHIREIS_H
#define SUSHIREIS_H

#include <Reis.h>


class Sushireis : public Reis
{
    public:
        Sushireis();
        virtual ~Sushireis();
        void cook();
        int getMins();

    protected:
        //int minutes = 5;

    private:
};

#endif // SUSHIREIS_H
