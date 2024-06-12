#include "Sushireis.h"
#include <iostream>
using namespace std;

Sushireis::Sushireis():Reis(5)
{
    //cttor
}

Sushireis::~Sushireis()
{
    //dtor
}

void Sushireis::cook(){
    int coolMins = 0;
    Reis::cook();
    cout<<"Wie viele Minuten wollen Sie den Reis auskuehlen lassen (1-9)?\n";
    cin>>coolMins;
    if(coolMins < 1 || coolMins > 9){
        throw invalid_argument("Kannst du nicht lesen?\n");
    }
    for(int j = 0; j < coolMins; j++){
        cout<<"Abkuehlen fuer "<<coolMins-j<<" Minuten.\n";
    }
    cout<<"Der Sushireis kann jetzt gegessen werden. Mahlzeit Bro.\n";
}

int Sushireis::getMins(){
    return minutes;
}
