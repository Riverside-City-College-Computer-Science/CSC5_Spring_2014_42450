/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on February 25, 2014, 8:17 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!
int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods ";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    cout<<"Good-bye"<<endl;
    
    //Exit Stage Right!
    return 0;
}

