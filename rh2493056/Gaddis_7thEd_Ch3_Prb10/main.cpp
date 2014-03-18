/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 17, 2014, 10:07 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float tempC, tempF;
    
    //Ask user to input C temperature
    cout<<"Please input the temperature in degrees Celsius that you would like to convert to Fahrenheit"<<endl;
    
    //Input C temp
    cin>>tempC;
    
    //Convert C to F
    tempF=(tempC*9)/5+32;
    
    //Output conversion
    cout<<"Temperature in degrees Fahrenheit = "<<tempF<<endl;
    
    //Exit Stage Right
    return 0;
}

