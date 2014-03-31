/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on February 24, 2014, 8:41 PM
 * Savitch Chap1 Prob3
 * Modify Program 1 by changing * to / to create
 * a runtime error.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Output Hello
    cout <<"Hello\n";
    //Prompt user how many pods
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    //Prompt user how many peas
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    //Equation
    total_peas = number_of_pods / peas_per_pod;
    //Run Time error caused by dividing 0
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
