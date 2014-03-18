/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 8:01 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
using namespace std;

int main(int argc, char** argv) {

    int a, b = 0;
    cout << "Enter the first integer: " << endl;
    cin >> a;
    cout << "Enter the second integer: " << endl;
    cin >> b;
    int product = a * b;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is "
         << sum << "." << endl;
    cout << "The product of " << a << " and " << b << " is "
         << product << "." << endl;
    cout << "This is the end of the program." << endl;
    
    return 0;
}

