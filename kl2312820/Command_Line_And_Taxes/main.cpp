/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 7, 2014, 1:25 PM
 * Purpose: To Find Out Your Taxes
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //I/O
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float income,tax;
    
    //Input The Term To Stop The 
    //Sequence
    cout<<"Calculate your State Taxes ";
    cout<<"from the $'s income which you input."<<endl;
    
    //Loop Through The Income Sequence
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
    //Exit Stage Right!
    return 0;
}

