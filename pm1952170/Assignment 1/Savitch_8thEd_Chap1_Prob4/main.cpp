/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on February 24, 2014, 8:09 PM
 * Savitch Chap1 Prob4
 * Modify Prob1 by changing * to + to create
 * a logic error.
 */

#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Prompt users how many pods
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    //Prompt user how many peas
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    //Equation
    total_peas = number_of_pods + peas_per_pod;
    //Program runs but output is incorrect due to error in logic
    //Output Result
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods. \n";
    //Exit Stage Right
    return 0;
}
