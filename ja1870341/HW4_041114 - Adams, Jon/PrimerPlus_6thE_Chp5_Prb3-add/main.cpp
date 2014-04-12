/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 10:54 PM
 */
//Libraries
#include <iostream>

using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Variables
    int int1, sum=0;
    //inputs
    do {
    cout<<"Please input a number to add!"<<endl;
    cout<<"Press zero to stop"<<endl;
    cin>>int1;
    sum=sum+int1;
    cout<<"Current amount: "<<sum<<endl;
    } while (int1!=0);
    cout<<"Total is: "<<endl;
    cout<<sum<<endl;
   //Exit stage right
    return 0;
}

