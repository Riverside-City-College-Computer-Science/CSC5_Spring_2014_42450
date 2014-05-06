/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2014, 8:23 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Pick a random number
    int mybeCsp=rand()%14+14;
    int cspDate=rand()%5+18;
    int diff=mybeCsp-cspDate;
    //output if on the cusp
    if (diff<=2&&diff>=-2){
        cout<<"this date is on the CUSP";
        cout<<"\"CUSP\""<<endl;
    }
    //output the date
    cout<<"the end date of the horoscope = ";
    cout<<cspDate<<endl;
    cout<<"The birthdate = "<<mybeCsp<<endl;
    //Exit Stage Right
            
    return 0;
}

