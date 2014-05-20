/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 6:55 PM
 * Purpose: windchill index function
 */

//System Libraries
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void getInput(float &,float &);
void wndChll(float,float,float &);
void print(float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float velocty,temp,windChil;
    //get input
    getInput(velocty,temp);
    //calculate
    wndChll(velocty,temp,windChil);
    //output
    print(velocty,temp,windChil);
    //Exit Stage Right!!
    return 0;
}
void getInput(float &v,float &t){
    cout<<"Enter the wind speed (in meters per second): ";
    cin>>v;
    while(v<0.0f){
        cout<<"Enter a speed 0 m/sec or above: ";
        cin>>v;
    }
    cout<<"Enter the temperature below 10 degrees Celsius: ";
    cin>>t;
    while(t>10){
        cout<<"Enter a temperature below 10 degrees Celsius: ";
        cin>>t;
    }
}
void wndChll(float v,float t,float &w){
    float n1=pow(v,0.16f);
    float n2=pow(v,0.016f);
    w=13.12f+0.6215f*t-11.37f*n1+0.3965f*t*n2;
}
void print(float v,float t,float w){
    cout<<endl<<"The velocity of the wind: "<<v<<" m/sec"<<endl
        <<"The temperature (in Celsius): "<<t<<" degrees"<<endl
        <<"Wind Chill Index (in Celsius): "<<w<<" degrees"<<endl;
}