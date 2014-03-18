/* 
 * File:   main.cpp
 * Author: Jose Luna
 * Created on March 17, 2014, 3:53 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float radius, vm;
    cout<< "Enter radius of a sphere."<<endl;
    cin>>radius;
    vm=(4.0/3.0)*3.1415*radius*radius*radius;
    cout <<"The volume is "<<vm<<endl;
    

    return 0;
}

