/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 22, 2014, 4:20 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int fahr, cel;   
   //Covert Celsius to Fahrenheit
    cel=100;
    fahr = (9.0/5.0) * cel + 32;   
    //Loop if Celsius does not equal Fahrenheit   
    while (cel!=fahr)
    {  
        fahr = (9.0/5.0) * cel + 32;
        cel=cel-1;//decrease by 1 on next loop
    }
    //Output numerical value where both Celsius and Fahrenheit are equal
    cout<<"\n";
    cout<<"Celsius and Fahrenheit have the same numerical value at ";
    cout<<fahr<<".";
    cout<<"\n";   
    //Exit Stage Right
    return 0;
}

