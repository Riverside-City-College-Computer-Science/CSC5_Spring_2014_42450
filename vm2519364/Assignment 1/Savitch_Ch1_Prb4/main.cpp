/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 4:22 AM
 * Purpose: Create logical error in mathematical equation 
 * that would not cause any errors, by addition.
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
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
//Calculate peas in pods
    total_peas = number_of_pods + peas_per_pod;
//Output the number Peas in Pods
    cout << "If you have ";
    cout << number_of_pods; 
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod; 
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas; 
    cout << " peas in all the pods.\n";
//Exit Stage Right
    return 0;
}