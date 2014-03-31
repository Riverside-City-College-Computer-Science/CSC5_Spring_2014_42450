/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 1.36: Write a program that inputs a five-digit number, seperates the
 *               number into its individual digits and prints the digits separated 
 *               from one another by three spaces each.
 *               (Hint: Use the integer division and modulus operators.) 
 *
 * Created on March 4, 2014, 2:45 PM
 */

#include <iostream>
// Global Constants
// Function Prototype
// Execution Begins Here
using namespace std;


int main() {
    int integer;
    
    cout << "Input a five-digit number.\n";
    cin >> integer;
    
    cout << integer/10000 << "  ";
    integer=integer %10000 ;
    cout << integer / 1000 << "  ";
    integer=integer %1000 ;
    cout << integer /100 << "  ";
    integer=integer %100;
    cout << integer/10 << "  ";
    integer=integer/10;
    cout << integer << endl;
    return 0;
}

