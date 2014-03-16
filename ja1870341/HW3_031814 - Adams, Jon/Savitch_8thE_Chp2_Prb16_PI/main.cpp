/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 13, 2014, 10:00 PM
 */

#include <iostream>
using namespace std;

//Global constants
const float PI=3.14159;
//Function Prototypes
//Executing begins right here
int main(int argc, char** argv) {
    //Variables
    float radius, vm;
    cout<<"Enter the radius of a sphere."<<endl; 
    cin>>radius;
    vm = (4.0/3.0)*PI*radius*radius*radius;
    cout<<"The volume is "<<vm;
    //Exit stage right
    return 0;
}

