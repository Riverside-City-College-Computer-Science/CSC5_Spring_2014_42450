/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 7, 2014, 10:08 AM
 */
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare variables
    float income, tax;
    cout<<"Calculate your State Taxes";
    cout<<"from the $s income which you input"<<endl;
    //Loop the the income sequence
    while(cin>>income){
        if (income<1500){
            tax=0;
        }
        else if(income<=25000) {
            tax=(income-15000)*0.05f;
        }
        else {
            tax=10000*0.5f+(income-25000)*0.1f; //The "f" converts the default 
            //"double" (for 0.1) into a float
        }
        cout<<"Income = $"<<income;
        cout<<" Tax = $"<<tax<<endl;
    }

    cout<<")"<<endl;
    
    return 0;
}

