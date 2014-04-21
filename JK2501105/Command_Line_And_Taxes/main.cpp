/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 7, 2014, 9:37 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Declare Variables
    float income,tax;
    //Initialize Variables
    //Input the term to Stop
    //Sequence
    cout<<"Calculate your State Taxes ";
    cout<<"from the $'s income which you input"<<endl;
    //Loop thru the income sequence
    while(cin>>income){
        if(income<15000){
            tax=0;
        }else if(income<=25000){
            tax=(income-15000)*0.05f;    
        }else{
            tax=10000*0.05f+(income-25000)*0.01f;
        }
        cout<<"Income = $"<<income;
        cout<<" Tax = $"<<tax<<endl;
    }
    //Exit the Program
   

    return 0;
}

