#include "Cooker.h"
#include <iostream>
#include <Wildreis.h>
#include <Sushireis.h>
#include <Reis.h>

using namespace std;

Cooker::Cooker():rice(nullptr)
{
    //ctor
}

Cooker::~Cooker()
{
    //dtor
}

void Cooker::chooseRice(){
    int choice = 0;
    if(rice != nullptr){
        cout<<"Es wurde bereits eine Reissorte gewaehlt!\n";
        return;
    }

    cout<<"Welche Reissorte moechten Sie kochen?\n 1)Wildreis\n 2)Sushireis\n";
    cin>>choice;
    if(choice < 1 || choice > 2){
        throw range_error("Nur 1 oder 2!\n");
    }

    if(choice == 1){
        rice = new Wildreis();
    }
    else{
        rice = new Sushireis();
    }

}

void Cooker::cookRice(){
    if(rice == nullptr){
        cout<<"Es wurde kein Reis ausgewaehlt!\n";
        return;
    }
    rice->cook();
}
