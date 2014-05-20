/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 11, 2014, 7:35 PM
 * Purpose: To Output The ASCII Codes, 16 To A Row
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <iomanip> //Formatting
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ocenlvl=1.5,total=1.5;
    unsigned int year=2;
    //Output The First Year
    cout<<"In 1 year the ocean level will rise by "<<ocenlvl<<"mm."<<endl;
    while (year<=25){
        total+=ocenlvl;
        cout<<"In "<<year<<" years the ocean level will rise by ";
        cout<<total<<"mm."<<endl;
        year++;
    }

    return 0;
}

