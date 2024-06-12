#include "Reis.h"
#include <iostream>

using namespace std;
Reis::Reis(int minutes):minutes(minutes)
{
    //ctor
}

Reis::~Reis()
{
    //dtor
}

void Reis::cook(){

    for(int i = 0; i < minutes; i++){
        cout<<"Noch fuer "<<minutes-i<<" Minuten kochen lassen.\n";
    }
}

int Reis::getMins(){
    return minutes;
}

int Reis::operator+(const Reis &other)const{
    return this->minutes + other.minutes;
}

bool Reis::operator==(const Reis &other)const{
    return this->minutes == other.minutes;
}
