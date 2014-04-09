/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 15, 2014, 10:29 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float numBat,numHit, avg;
    
    //prompt user for the number of times at bat
    //and number of hits.
    cout<<"How many times at bat?"<<endl;
    cin>>numBat;
    cout<<"How many hits?"<<endl;
    cin>>numHit;
    
    //calculate the batting average
    avg=numHit/numBat;
    
    //display batting average
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"The player's batting average is ";
    cout<<avg<<endl;

    return 0;
}

