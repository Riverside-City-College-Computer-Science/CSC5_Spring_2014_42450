/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 8:09 PM
 */

//System Libraries
//extra spaces within << or omitting either <> causes this error
    //main.cpp:10:10: error: #include expects "FILENAME" or <FILENAME>
    //omitting "#" produces this error
    //main.cpp:10:1: error: ‘include’ does not name a type
#include <iostream>
//misspelling namespace or std causes this error
    //main.cpp:14:17: error: ‘sd’ is not a namespace-name
    //using namespace sd;
    //main.cpp:14:19: error: expected namespace-name before ‘;’ token
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
//even if the arguments are removed, main still functions
//removing either () causes a run-time error
    //main.cpp:26:32: error: expected ‘)’ before ‘{’ token
int main(int argc, char** argv) {
//using function from problem 5
    int a, b = 0;
    //removing or misspelling << causes this error
        //main.cpp:31:43: error: invalid operands of types ‘const char [26]’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’
    //misspelling cout or cin causes this error
        //main.cpp:32:5: error: ‘cut’ was not declared in this scope
    cout << "Enter the first integer: " << endl;
    cin >> a;
    cout << "Enter the second integer: " << endl;
    cin >> b;
    //misspelling variables like int causes this error
        //main.cpp:39:5: error: ‘it’ was not declared in this scope
    int product = a * b;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is "
         << sum << "." << endl;
    cout << "The product of " << a << " and " << b << " is "
         << product << "." << endl;
    cout << "This is the end of the program." << endl;
    
    //removing the {} brackets causes main to crash
        //main.cpp:48:13: error: expected ‘}’ at end of input
    return 0;
}

