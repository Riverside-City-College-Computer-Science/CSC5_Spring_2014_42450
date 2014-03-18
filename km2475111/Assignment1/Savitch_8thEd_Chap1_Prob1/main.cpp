/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 6:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    int numOfPods, peasPerPod, totalPeas;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pods: " << endl;
    cin >> numOfPods;
    cout << "Enter the number of peas in a pod: " << endl;
    cin >> peasPerPod;
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

