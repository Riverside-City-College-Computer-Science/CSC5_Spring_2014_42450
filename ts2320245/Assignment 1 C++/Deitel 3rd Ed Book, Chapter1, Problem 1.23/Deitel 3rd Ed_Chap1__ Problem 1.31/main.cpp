/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *Problem 1.31: Write a program that reads an integer and determines and prints
 *              whether it is odd or even. ( Hint: Use the modulus operator. An even
 *              number is a multiple of two. Any multiple of two leaves a remainder of zero 
 *              when divided by 2.)
 * Created on March 4, 2014, 1:57 PM
 */

#include <iostream>

using namespace std; //Preprocessor Directive 
//Global Constants
// Function Prototypes
//Execution Begins here

int main() {
    int integer; // Declaration of Variables
    
    cout << "Input a number, and I will tell you wether it is odd or even.\n";
    cin >> integer;
    
    if ( integer % 2 == 0 )
        cout << integer << "is an even number." << endl;
    if ( integer % 2 != 0 )
        cout << integer << " is an odd number." << endl;
    return 0;
}

