/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 25, 2014, 3:42 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Input the grade
    cout<<"Input the grade:"<<endl;
    cin>>num;
    if (num>=0&&num<=100)
    {
        cout<<"The number is valid."<<endl;
    }
    else cout<<"The number is not valid."<<endl;
    //Exit Stage Right!
    return 0;
}

