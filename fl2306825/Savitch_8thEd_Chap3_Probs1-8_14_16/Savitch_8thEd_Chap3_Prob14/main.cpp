/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 25, 2014, 9:53 PM
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int j;
    //outputting
    cout << "The prime numbers between 1 to 100 are:\n";
    
    //For statement for prime numbers
    for(int j = 2; j <= 100; ++j)
    {
        int i = 2;
        for(;i <= j - 1; i++)
        {
            if(j%i == 0)
                break;
        }
        if(i == j && i != 2)
            cout << j << " ";
    }
    
    //Execution ends here
    return 0;
}

