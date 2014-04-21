/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 5:35 PM
 * Distance traveled
 */
//system Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {
//declare variables
    float miles,hours,distance;
    //ask for input
    cout<<"What is the speed of the vehicle in mph? "<<endl; cin>>miles;
   //input validation for speed
    while(miles<=0){
        cout<<"Sorry please enter in a non negative number that doesnt equal 0 "<<endl;
        cin>>miles;
    }
    cout<<"How many hours has it traveled? "<<endl; cin>>hours;
    //input validation for speed
    while(hours<1){
        cout<<"Sorry please enter one or more hours "<<endl;
        cin>>hours;
    }
    cout<<"Hour      Distance Traveled"<<endl;
    cout<<"---------------------------------"<<endl;
    for(int count=1;count<=hours;count++){
        distance=miles*count;
        cout<<count<<setw(18)<<distance<<endl;
    }
    return 0;
}

