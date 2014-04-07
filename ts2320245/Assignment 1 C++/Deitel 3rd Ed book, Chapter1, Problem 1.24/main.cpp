/*
 File: main.cpp
 * Author: Saldana, Thomas
 * Problem 1.24: Write a program that prints the numbers 1 to 4 on the same line with
 *               each pair of adjacent numbers seperated by one space. Write the program using the 
 *               following methods: a) Using one output statement with one stream insertion operator. 
 *                                  b) Using one output statement with four stream insertion operator.
 *                                  c) Using four output statements.  
 *
 */
#include <iostream>

using namespace std;

int main (){
    // Method A
    cout << "1 2 3 4\n";
    
    // Method B
    cout << "1 " << "2 " << "3 " << "4\n";
    
    // Method C
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4" << endl;
    
    return 0;
}