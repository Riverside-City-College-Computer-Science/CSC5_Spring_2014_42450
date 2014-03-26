/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on February 25, 2014, 10:16 PM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constant

//Function Prototype

//Execution Starts Here!!

int main(int argc, char** argv) {
    
    //Declare variable
    int distance1, distance2, distance3;
    int acceleration = 32;
    int time;   
    
    //Input and output
    cout << "Imagine you dropped an object inside a deep hole. How many seconds did the object stay in the air until you heard an echo from the object hitting the surface?\n";
    cin >> time;
    
    //Calculations
    distance1 = pow(time, 2);
    distance2 = acceleration * distance1;
    distance3 = distance2 / 2;
    
    //Answer
    cout << "The object dropped for at least ";
    cout << distance3;
    cout << " distance";
   
    return 0;
}

