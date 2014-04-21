/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 6:01 PM
 * 
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
    float penny=.01; 
    int days;
    //ask for input
    cout<<"Enter in the amount of days"<<endl; cin>>days;
    //input validation
    while(days<1){
        cout<<"please enter in a number equal to or greater than one "<<endl; cin>>days;
    }
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"in 1 day you will make $"<<penny<<endl;
    for(int count=2;count<=days;count++){
        penny*=2;
        cout<<"in "<<count<<" days you will make $"<<penny<<endl;
    }
    return 0;
}

