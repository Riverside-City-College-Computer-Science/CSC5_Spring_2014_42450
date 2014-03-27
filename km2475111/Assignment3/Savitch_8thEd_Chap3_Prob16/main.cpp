/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 26, 2014, 7:30 PM
 */

//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short celcius=100,fahrenheit;
    //formula to convert celcius to fahrenheit
    //fahrenheit=(9*celcius)/5+32;
    //Display results
    while(celcius!=fahrenheit){
        cout<<"Temperature in Celcius: "<<celcius<<endl
            <<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
        celcius--;
        fahrenheit=((9*celcius)/5)+32;
        }
    //Exit Stage Right!!
    return 0;
}

