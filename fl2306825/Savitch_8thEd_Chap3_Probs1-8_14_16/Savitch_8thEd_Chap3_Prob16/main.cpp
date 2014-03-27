/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 25, 2014, 8:11 PM
 */

//System Libraries
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//Function Prototype

//Global Constant

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variable
    int fah, cel;
    
    //calculations
    cel = 100;
    fah = ((9 * cel)/5) + 32;
    while(cel != fah)
    {
        cel = cel - 1;
        fah = ((9 * cel)/5) +32;
    }
    
    //output 
    cout << "Both Celsius and fahrenheit is " << fah << " degrees." << endl;
    return 0;
}

