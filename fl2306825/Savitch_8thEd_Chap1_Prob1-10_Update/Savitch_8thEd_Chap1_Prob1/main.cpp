/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on February 25, 2014, 6:04 PM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant 

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare variable
    int numPods, peas_per_pod, total_peas;
    
    //Input and outputs
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> numPods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Multiply number of pods with the number of peas per pod
    total_peas = numPods * peas_per_pod;
   
    //The answer
    cout << "If you have ";
    cout << numPods;
    cout << " peas pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all pods.\n";
  
    return 0;
}

