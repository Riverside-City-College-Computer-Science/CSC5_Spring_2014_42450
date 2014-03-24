/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 23, 2014, 4:45 PM
 * Purpose: Program finds the temperature that 
 * is the same in Celsius and Fahrenheit.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int far,cel;   
    //Calculation to convert Celsius into Fahrenheit
    cel=100;
    far=((9*cel)/5)+32;   
    //Loop to turn find when Celsius and Fahrenheit match 
    while (cel!=far)
    {
        cel=cel-1;
        far=((9*cel)/5)+32;        
    }
    //Output
    cout<<"The temperature that is the same in both Celsius and Fahrenheit is ";
    cout<<far<<" degrees."<<endl;       
    //Exit Stage Right
    return 0;
}
