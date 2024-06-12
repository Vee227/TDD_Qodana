#include <iostream>
#include <Cooker.h>
#include <Reis.h>
#include "Unittests.h"

using namespace std;

int main()
{

    Cooker cooker;
    Reis rice1(5);
    Reis rice2(7g);
    int rice3 = rice1 + rice2;

    cout<<"Die Kochzeit fuer beide Sorten Reis betraegt "<<rice3<<" Minuten!";


    if(rice1 == rice2){
        cout<<"Beide Reissorten haben die gleiche Kochzeit!\n";
    }
    else{
        cout<<"Die Reissorten haben unterschiedliche Kochzeiten!\n";
    }


    try{
        cooker.cookRice();
        cooker.chooseRice();
        cooker.chooseRice();
        cooker.cookRice();
    }
    catch(const invalid_argument& except){
        cout<<except.what();
    }
    catch(const range_error& except){
        cout<<except.what();
    }
    catch(...){
        cout<<"Unknown error!";
    }


    Unittests uniTest;
    uniTest.CookerTests();


    return 0;

}
