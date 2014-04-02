/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 26, 2014, 10:04 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int temp;
    //Input the temperature
    cout<<"Input the temperature:"<<endl;
    cin>>temp;
    if (temp>=-50&&temp<=150)
    {
        cout<<"The number is valid."<<endl;
    }
    else cout<<"The number is not valid."<<endl;
    //Exit Stage Right!
    return 0;
}

