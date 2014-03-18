/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 6:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    int numOfPods, peasPerPod, totalPeas;
    
    cout << "Hello." << endl;
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pods: " << endl;
    cin >> numOfPods;
    cout << "Enter the number of peas in a pod: " << endl;
    cin >> peasPerPod;
    //Checking to see if denominator is zero
    //To prevent errors like this
    //[main] savitch_8thed_chap1_prob3 2796 cygwin_exception::open_stackdumpfile: Dumping stack trace to savitch_8thed_chap1_prob3.exe.stackdump
    while (peasPerPod == 0){
        cout << "Error! Can't use zero for Peas in a pod. Try again: " << endl;
        cin >> peasPerPod;
    }
    totalPeas = numOfPods / peasPerPod;
    cout << "If you have ";
    cout << numOfPods;
    cout << " pea pods ";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then " << endl;
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods." << endl;
    cout << "Good-bye." << endl;
            
    return 0;
}