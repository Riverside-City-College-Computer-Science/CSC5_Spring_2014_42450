/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on February 25, 2014, 7:04 PM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
using namespace std;


//Global Constants

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variable
    int number_of_pods, peas_per_pod, total_peas;
   
    //Add "Hello"
    cout << "Hello\n";
    
    //Inputs and outputs
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Instead of multiplication, add addition
    total_peas = number_of_pods + peas_per_pod;
    
    //answer
    cout << "If you have ";
    cout << number_of_pods;
    cout << " peas pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all pods.\n";
    //Add "Goodbye"
    cout << "Goodbye!\n";
    
    //Notice that it runs perfectly, but outputs comes off as incorrect, this is a logic error
    
    return 0;
}
