/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 17, 2014, 9:10 PM
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    int celsius, fahren;
    
    //promt user for a temperature in Celsius 
    cout<<"Enter a temperarute in Celsius."<<endl;
    cin>>celsius;
    
    //convert the Celsius temperature to Fahrenheit.
    fahren=1.8*celsius+32;
    
    //output the temperature in Fahrenheit
    cout<<celsius<<" degrees Celsius is "<<fahren<<" degrees Fahrenheit.";

    return 0;
}

