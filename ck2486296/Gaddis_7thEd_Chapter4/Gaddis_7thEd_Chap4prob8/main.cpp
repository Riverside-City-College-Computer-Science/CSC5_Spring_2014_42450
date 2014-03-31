/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 26, 2014, 11:31 AM
 * change for dollar game
 */
//system libs
#include <iostream>
#include <iomanip>
using namespace std;

//global constants
float const PENNIE=.01;
float const NICKEL=.05;
float const DIME=.15;
float const QUARTER=.25;
float const DOLLAR=1;
//system prototypes

//execution begins here!!
int main(int argc, char** argv) {
//declare variables
    short numpen, numnik, numdime, numquar;
    cout<<"enter in the amount of pennies, nickels, dimes, and quarters and Ill see if you win the game"<<endl;
    cout<<"Pennies :"; cin>>numpen;
    cout<<"Nickels :"; cin>>numnik;
    cout<<"Dimes :"; cin>>numdime;
    cout<<"Quarters :"; cin>>numquar;
    //calculations
    float total=PENNIE*numpen+NICKEL*numnik+DIME*numdime+QUARTER*numquar;
    //if else logics
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    if(total==DOLLAR){
        cout<<"you win the dollar game"<<endl;
    }
    else if(total>DOLLAR){
        cout<<"You lose the dollar game"<<endl;
        cout<<"$"<<total<<" is greater than $1.00"<<endl;
                
    }
    else if(total<DOLLAR){
        cout<<"You lose the dollar game"<<endl;
        cout<<total<<"¢"<<" is less than $1.00"<<endl;
                
    }
    return 0;
}

