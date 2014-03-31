/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 26, 2014, 11:31 AM
 * weight in newtons
 */
//system libs
#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//system prototypes

//execution begins here!!
int main(int argc, char** argv) {
//declare variables
    float mass;
    //user input
    cout<<"what is the mass of an object in kilograms?"<<endl;
    cin>>mass;
    float weight=mass*9.8;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"the weight is "<<weight<<" Newtons"<<endl;
    if(weight >1000){
        cout<<"That object is too heavy"<<endl;
    }
    else if(weight <10){
        cout<<"That object is too light"<<endl;
    }
   //exit stage right
    return 0;
}

