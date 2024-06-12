#ifndef COOKER_H
#define COOKER_H
#include <Reis.h>


class Cooker
{
    public:
        Cooker();
        virtual ~Cooker();
        void chooseRice();
        void cookRice();

    protected:
        Reis *rice;

    private:
};

#endif // COOKER_H
