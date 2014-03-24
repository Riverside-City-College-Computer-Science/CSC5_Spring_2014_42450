/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 17, 2014, 4:41 PM
 * How many calories
 */
//system libs
#include <iostream>
//global constants 
const float CAL=300;
const float SERV=4;

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
    short cookie;
    //ask for input
    cout<<"How Many cookies did you eat?"<<endl;
    cin>>cookie;
    //calculations
    float cals=(cookie/SERV)*CAL;
    //output
    cout<<"you have had "<<cals<<" calories"<<endl;
    return 0;
}

