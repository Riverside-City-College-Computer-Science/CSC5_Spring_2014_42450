/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 9, 2014, 10:33 AM
 * Purpose: Calculate the velocity of sound in different temperature
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

//Variable Declaration
    float strTmp, endTmp, vlcty, temp;
    
     
//Input Temperature
    cout<<"Please enter the starting temperature in Celsius degrees, ";
    cout<<"to the nearest whole degree: ";
    cin>>strTmp;
    cout<<"\n";
    cout<<"Now enter the ending temperature in Celsius degree, ";
    cout<<"to the nearest whole degree: ";
    cin>>endTmp;
    cout<<"\n";

    while (endTmp >= strTmp)
    {
        
//Calculate Velocity    
vlcty = 331.3 + (0.61 * strTmp);
    
//Output Temperature and Velocity    
    cout<<"At ";
    cout<<strTmp;
    cout<<" degrees Celsius the velocity of sound is ";
    cout<<vlcty;
    cout<<" m/s.";
   cout<<"\n";

strTmp = strTmp + 1;
     
    }
    
    cout<<"\n";
//Exit Stage Right
    return 0;
}

