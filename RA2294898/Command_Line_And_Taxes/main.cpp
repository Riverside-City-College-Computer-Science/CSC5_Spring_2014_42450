/* 
 * File:   main.cpp
 * Author: Roy Alba
 * Purpose: Taxes
 * Created on April 7, 2014, 9:37 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float income,tax;
    //Input the term to stop the
    //sequence
    cout<<"Calculate your State Taxes ";
    cout<<"from the $'s income which you input "<<endl;
    //Loop through the income sequence
    while(cin>>income){
        if (income<15000){
            tax=0;
        }else if (income<=25000){
            tax=(income-15000)*.05f;
        }else{
            tax=10000+.05f+(income-25000)*.01f;
        }
        cout<<"Income = $"<<income;
        cout<<" Tax = $"<<tax<<endl;
    
    }
        
      
    
    //Exit Stage Right!
    return 0;
};

