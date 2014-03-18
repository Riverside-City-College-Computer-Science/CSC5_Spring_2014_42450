/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 3, 2014, 8:42 PM
 */
//System libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Declare Variables
    int numPod, peaPod, peaTot;
//Input request for # of pods and peas per pod
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods"<<endl;
    cin>>numPod;
    cout<<"Enter the number of peas per pod"<<endl;
    cin>>peaPod;
    peaTot=peaPod*numPod;
//Output of peas per pod
    cout<<"If you have "<<numPod<<" pea pods"<<endl;
    cout<<"and "<<peaPod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<peaTot<<" peas in all pods!"<<endl;
    cout<<"And don't forget to open those pods, Dave!!"<<endl;
    //Exit Stage Right
    return 0;
}

