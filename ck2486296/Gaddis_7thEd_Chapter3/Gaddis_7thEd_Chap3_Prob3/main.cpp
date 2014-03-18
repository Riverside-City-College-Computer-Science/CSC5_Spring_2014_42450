/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 *test average
 * Created on March 15, 2014, 9:57 AM
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
    float tst1,tst2,tst3,tst4,tst5;
    //ask for input
    cout<<"please enter in your 5 test scores and they will get averaged "<<endl;
    cin>>tst1>>tst2>>tst3>>tst4>>tst5;
    //calculations
    float total=(tst1+tst2+tst3+tst4+tst5)/5;
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"your Avg score is a "<<total<<endl; 
    //exit stage right 
    return 0;
}

