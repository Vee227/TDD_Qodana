#include "Unittests.h"
#include <iostream>
#include <assert.h>
#include <Reis.h>
#include <Wildreis.h>
#include <Sushireis.h>
using namespace std;

Unittests::Unittests()
{
    //ctor
}

Unittests::~Unittests()
{
    //dtor
}

void Unittests::CookerTests(){
    cout << "Starting ricecooker tests...\n";
    RiceTest();
    WildriceTest();
    SushiriceTest();
    cout << "Ricecooker tests passed\n";
}

void Unittests::RiceTest(){
    cout<<"Test for rice-constructor\n";
    Reis rice(5);
    assert(rice.getMins() == 5);
}

void Unittests::WildriceTest(){
    cout<<"Test for wildrice\n";
    Wildreis wrice;
    assert(wrice.getMins() == 10);
}

void Unittests::SushiriceTest(){
    cout<<"Test for sushirice\n";
    Sushireis srice;
    assert(srice.getMins()==5);
}

