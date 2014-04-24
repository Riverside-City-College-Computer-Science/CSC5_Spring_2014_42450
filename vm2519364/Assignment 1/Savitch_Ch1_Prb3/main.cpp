/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 4:23 AM
 * Purpose: Create logical error on mathematical process, by division.
 * Causing runtime error when divided by 0.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main( ) 
{
//Variable Declaration
    int number_of_pods, peas_per_pod, total_peas;
//Input data for peas and pods.
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
//Calculate peas in each pod
    total_peas = number_of_pods / peas_per_pod;
//Output of Peas in a Pod
    cout << "If you have ";
    cout << number_of_pods; 
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod; 
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas; 
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
//Exit Stage Right
    return 0;
    
//Runtime Error when dividing by 0
//RUN FAILED (exit value 1, total time: 20s) 
    
}