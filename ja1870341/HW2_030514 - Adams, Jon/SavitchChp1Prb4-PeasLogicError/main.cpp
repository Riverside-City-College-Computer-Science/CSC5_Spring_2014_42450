/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 3, 2014, 8:42 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Peas in a pod
    int numPod, peaPod, peaTot;
//Input request for pods
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods"<<endl;
    cin>>numPod;
//Input request for peas
    cout<<"Enter the number of peas per pod"<<endl;
    cin>>peaPod;
//Incorrect equation
    peaTot=peaPod+numPod;
//Output
    cout<<"If you have "<<numPod<<" pea pods"<<endl;
    cout<<"and "<<peaPod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<peaTot<<" peas in all pods!"<<endl;
    cout<<"And don't forget to open those pods, Dave!!"<<endl;
    //Exit Stage Right
    return 0;
}

