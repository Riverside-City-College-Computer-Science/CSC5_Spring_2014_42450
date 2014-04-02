/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 1.25: Wite a program that asks the user to enter two integers, 
 *               obtains the numbers from the user, then prints the larger number
 *               followed by the words "IS LARGER." if the numbers are equal, print 
 *               the message "These numbers are equal."
 *               
 *
 * Created on March 1, 2014, 8:15 PM
 */

#include <iostream>

using namespace std;
int main() {
    int integer1, integer2;  // This is a declaration.
    
    cout << "Enter two integers.\n";
    cin >>  integer1;
    cin >> integer2;
    
    if (integer1 > integer2)
        cout << integer1 << "is larger" << endl;
    if (integer2 > integer1)
        cout << integer2 << "is larger" << endl; 
    if ( integer1 == integer2)
        cout << "These numbers are equal."<< endl;
    
    return 0;
}

