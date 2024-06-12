#include "Wildreis.h"
#include <iostream>
using namespace std;

Wildreis::Wildreis():Reis(10)
{
    //ctor
}

Wildreis::~Wildreis()
{
    //dtor
}

void Wildreis::cook(){
    Reis::cook();
    cout<<"Wildreis kann jetzt gegessen werden! Lass es dir schmegge dude!\n";
}

int Wildreis::getMins(){
    return minutes;
}
