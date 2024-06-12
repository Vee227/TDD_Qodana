#ifndef REIS_H
#define REIS_H


class Reis
{
    public:
        Reis(int minutes);
        virtual ~Reis();
        virtual void cook();
        virtual int getMins();
        int operator+(const Reis &other)const;
        bool operator==(const Reis &other)const;

    protected:
        int minutes = 5;
    private:

};

#endif // REIS_H
