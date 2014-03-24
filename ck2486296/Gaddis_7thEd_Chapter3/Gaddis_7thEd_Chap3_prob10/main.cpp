/* 
 * File:   main.cpp
 * Author: Chris
 *
 * Created on March 17, 2014, 5:12 PM
 */
//system libs
#include <iostream>
#include <iomanip>
//global constants 

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
    float cel,fahr;
   //ask for input
    cout<<"what is the temperature in Degrees Celsius?"<<endl;
    cin>>cel;
    
    //calculations
    fahr=(9/5)*cel+32;
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"It is "<<fahr<<" degrees Fahrenheit"<<endl;
    return 0;
}

