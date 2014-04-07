/* 
 * File:   main.cpp
 * Author: christopher Alvarado
 * Created on April 7, 2014, 10:08 AM
 * Taxes
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float income,tax;
    //Input the term to stop the 
    //sequence
    cout<<"Calculate your State Taxes ";
    cout<<"from the $'s income which you input"<<endl;
    //Loop thru the income sequence
    while(cin>>income){
        if(income<15000){
            tax=0;
        }else if(income<=25000){
            tax=(income-15000)*0.05f;
        }else{
            tax=10000*0.05f+(income-25000)*0.1f;
        }
        cout<<"Income = $"<<income;
        cout<<" Tax = $"<<tax<<endl;
    }
    //Exit the program
    return 0;
}