/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 24, 2014, 8:23 AM
 * Purpose:outputting string
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Pick a random number
    int mybeCsp=rand()%14+14;
    int cspDate=rand()%5+18;
    int diff=mybeCsp-cspDate;
    //output if on the cusp
    if (diff<=2&&diff>=-2){
        cout<<"This date is on the ";
        cout<<"\"cusp\""<<endl;
    }
    //Output the date
    cout<<"The end date of the horoscope = "<<cspDate<<endl;
    cout<<"The birthdate = "<<mybeCsp<<endl;
    //Exit stage right
        
    return 0;
}

