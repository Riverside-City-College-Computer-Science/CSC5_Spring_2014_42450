/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * car MPG
 * Created on March 12, 2014, 9:30 AM
 */
//system libs
#include <iostream>
//global constants 

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
    float tnkgal, distnk;
//ask for input
   cout<<"How many gallons of gas dose your car hold?"<<endl;
   cin>>tnkgal;
   cout<<"How many miles can you drive on a full tank?"<<endl;
   cin>>distnk;
   //calculations
   float mpg=distnk/tnkgal;
   cout<<"you get "<<mpg<<" mpg"<<endl;
   
    return 0;
}

