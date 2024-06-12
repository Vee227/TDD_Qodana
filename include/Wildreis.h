#ifndef WILDREIS_H
#define WILDREIS_H

#include <Reis.h>


class Wildreis : public Reis
{
    public:
        Wildreis();
        virtual ~Wildreis();
        void cook();
        virtual int getMins();

    protected:
        //int minutes = 10;

    private:
};

#endif // WILDREIS_H
