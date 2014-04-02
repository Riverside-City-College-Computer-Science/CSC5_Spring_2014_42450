/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 Problem 1.23(Deitel book): Write a program that asks the user to enter two numbers, obtains the 
 * two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
 * Created on February 28, 2014, 4:33 PM
 */

#include <iostream>

using namespace std;


int main() {
    int sum, product, difference, quotient, integer1, integer2; //Declaration
    
    cout << "Type an integer.\n";
    cin >> integer1;
    
    cout << "Type a second integer.\n";
    cin >> integer2;
    
    sum = integer1 + integer2;// Assignment
    product = integer1 * integer2;//Assignment #2
    difference = integer1 - integer2;
    quotient = integer1 / integer2;
    
    cout << "The sum of the two integers is\n" << sum << endl;
    cout << "The product of the two integers is\n" << product << endl;
    cout << "The difference of the two numbers is\n" << difference << endl;
    cout << "The quotient of the two numbers is\n" << quotient << endl;
    
    return 0;
}

