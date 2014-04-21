/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 15, 2014, 9:21 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//execution beigns here
int main(int argc, char** argv) {
    //declare variables
    float rCost, minInsr;
    
    //prompt user for replacement cost
    cout<<"Enter the replacement cost of the building."<<endl;
    cin>>rCost;
    
    //Calculate minimum insurance needed
    minInsr=rCost*.8;
    
    //display results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You need at least $"<<minInsr<<" in insurance."<<endl;
    
    //Exit Stage Right

    return 0;
}

