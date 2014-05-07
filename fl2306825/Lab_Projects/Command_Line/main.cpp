/* 
 * File:   main.cpp
 * Author: Frank Luna
 * Taxes
 * Created on April 7, 2014, 9:36 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float income, tax;
  
    //Input the term to stop the sequence
    cout << "Calculate you state taxes from the income which you input" << endl;
    cin >> income;
    
    //Loop through the income sequence
    
    while(cin >> income)
    {
        if(income < 15000)
        {
            tax = 0;
        }
        else if(income <= 25000)
        {
            tax = (income - 15000) * 0.05f;
        }
        else
        {
            tax = 10000 * 0.05f + (income - 25000) * 0.1f;
        }
             //Output the next term
    cout << "Income = $" << income;
    cout << "Tax = $" << tax << endl;
    }
      
   
       
    
 
    
    //Execution ends here
    return 0;
}

