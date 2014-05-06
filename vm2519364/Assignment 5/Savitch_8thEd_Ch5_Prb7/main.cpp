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
void calc(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i);
void outpt(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float lngth1, lngth2, lngth1i, lngth2i;
    int pick;
    //Function Call
    inpt(lngth1, lngth2, pick);
    calc(lngth1, lngth2, lngth2i, lngth1i);
    outpt(lngth1, lngth2, lngth2i, lngth1i);
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
void calc(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i){
    float cnvrtft=0.3048;
    float cnvrtmt=100;
    lngth1=lngth1/cnvrtft;
    lngth2=(lngth2/100)/cnvrtft;
    lngth1i=lngth1*12;
    lngth2i=lngth2*12;
}
void outpt(float& lngth1, float& lngth2, float& lngth2i, float& lngth1i){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(lngth2==0&&lngth2i==0){
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth1<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth1i<<" inches.";
        cout<<"\n";
    }else if (lngth1==0&&lngth1i==0){
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth2<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth2i<<" inches.";
        cout<<"\n";
    }
}