/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 22, 2014, 10:11 PM
 * Purpose: Find Prime Number between 3 and 100
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Sorry about all the notes on the program, 
    //I just needed to fully understand it
    //A prime number is a number such that 1 and itself are the 
    //numbers that evenly divide it
    //Heavily relied on the web for this information
    //Need to use Boolean because the answer will only be true or false based
    //Declare Variable
    bool prime=true;    
    //Iterate Numerator
    //Starts at 3 and stops at 100
    for (int x=3; x<=100; x++)
    {
        //Iterate Denominator
        prime=true;
        //starts at2 and ends at 99
        for (int y=2; y<=(x-1);y++)
            {   
            //Evaluate Fraction
            //If x/y does not have a remainder then the number dived evenly
            //if the x/y has a remainder then the number will be a prime
            //based on the definition of a prim number
               if((x%y)==0)
               {    
                prime=false;
                break;
               }
             }  
        //Output of Prime number 
        //which is only if the remainder of the fraction does not equal to 0
        if (prime==true)
            cout<<x<<" ";
    }
    //Three loops: 
    //Loop(Outermost) Iterates the Numerator [x]
    //Second Loop (Middle) Iterates the Denominator [y]
    //Third Loop (Most Inner) Evaluates the Fraction, outputting remainder [x%y]
    //Exit Stage Right
    return 0;
}

