/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 7:03 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    int numOfPods, peasPerPod, totalPeas;
    //retrieve input from user
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pods: " << endl;
    cin >> numOfPods;
    cout << "Enter the number of peas in a pod: " << endl;
    cin >> peasPerPod;
    //Logic error if "totalPeas = numOfPods + peasPerPod"
    //And would produce logic errors like this
        //Press return after entering a number.
        //Enter the number of pods: 
        //4
        //Enter the number of peas in a pod: 
        //3
        //If you have 4 pea pods and 3 peas in each pod, then 
        //you have 7 peas in all the pods.
    totalPeas = numOfPods * peasPerPod;
    cout << "If you have ";
    cout << numOfPods;
    cout << " pea pods ";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then " << endl;
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods." << endl;
            
    return 0;
}