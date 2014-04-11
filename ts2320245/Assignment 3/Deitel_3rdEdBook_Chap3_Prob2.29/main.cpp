/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 2.29: A palindrome is a number or a text phrase that reads the same backwards as forwards. For example, each
 *               of the fllowing five-digit integers is a palindrome: 12321,55555,45554 and 11611. Write a program that 
 *               reads in a five-digit integer and determines whether it is a palindrome.
 *
 * Created on March 25, 2014, 12:07 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    int num, int1,int2,int3,int4,int5;
    
    cout << "IF you enter a five-digit number, the computer will tell you if it is a palindrome.\n"
         << "Enter five digit number here:";
    cin >> num;
    
    int1= num/10000;
    int2=num%10000/1000;
    int3=int3;
    int4=num%10000 %1000%100/10;
    int5=num%10000%1000%10;
    
    if ( int1 == int5 && int2==int4)
        cout << num << " is a palidrome."<< "\n";
    else 
        cout<< num<< " is not a palidrome" << endl;
    
    
    return 0;
}

