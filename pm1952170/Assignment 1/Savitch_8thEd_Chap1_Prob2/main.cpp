/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on February 24, 2014, 8:39 PM
 * Savitch Chap1 Prob 2
 * Modify Prob1 so that Hello and Goodbye are 
 * displayed at the start and end of program.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Beings Here
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Output Hello
    cout <<"Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    //Equation
    total_peas = number_of_pods * peas_per_pod;
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
    //Output Good-bye
    cout << "Good-bye\n";
    //Exit Stage Right
    return 0;
}

