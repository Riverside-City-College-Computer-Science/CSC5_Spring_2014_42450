/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 4, 2014, 10:00 PM
 * Convert from meters and centimeters to feet and inches
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void inpt(float& lngth1, float& lngth2, int& pick);


//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float lngth1, lngth2;
    int pick;
    //Function Call
    inpt(lngth1, lngth2, pick);
    
    
    //Exit Stage Right
    return 0;
}
void inpt(float& lngth1, float& lngth2, int& pick){
    cout<<"\n";
    cout<<"Convert your length from meters or centimeters to feet and inches.\n";
    cout<<"Enter 1 for meters, 2 for centimeters: ";
    cin>>pick;
    if(pick==1){
        cout<<"\n";
        cout<<"Enter your length, in meters: ";
        cin>>lngth1;
    }else if (pick==2){
        cout<<"\n";
        cout<<"Enter your length, in centimeters: ";
        cin>>lngth2;
    }
}