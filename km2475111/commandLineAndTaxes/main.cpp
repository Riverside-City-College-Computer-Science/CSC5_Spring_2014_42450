/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 7, 2014, 10:08 AM
 * Purpose: taxes
 */

//System libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float income,tax;
    //input term to stop sequence
    cout<<"Calculate your state taxes "
        <<"from the income which you input."
        <<endl;
    //loop through the income sequence
    while(cin>>income){
        if(income<15000){
            tax=0;
        }
        else if(income<=25000){
            tax=(income-15000)*.05f;
        }
        else{
            tax=10000*0.05f+(income-25000)*0.1f;
        }
        cout<<"Income = $"<<income;
        cout<<" Tax = $"<<tax<<endl;
    }
    //Exit Stage Right!
    return 0;
}

