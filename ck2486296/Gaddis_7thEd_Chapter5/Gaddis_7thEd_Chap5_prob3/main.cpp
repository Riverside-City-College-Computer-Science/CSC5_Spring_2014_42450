/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 5:00 PM
 * 
 */
//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float ocnlvl=1.5, total=1.5;
    unsigned int year=2;
    //output the first year
    cout<<"In 1 Year the ocean laval will rise by "<<ocnlvl<<endl;
    while(year<=25){
        total+=ocnlvl;
        cout<<"in "<<year<<" Year the ocean level will increase by "<<total<<endl;
        year++;  
    }
//exit stage right!
    return 0;
}

