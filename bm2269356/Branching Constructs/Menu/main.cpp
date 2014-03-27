/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 19, 2014, 8:31 AM
 * Purpose: How to create a menu.
 */

//System libraries
#include <iostream> //I/O stream
using namespace std;

//Constant definitions

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short choose;
    
    //Prompt user for number of problem
    cout << "Choose from the following list:" << endl;
    cout << "1. Savitch 8th Ed, Chapter 3, Problem 1" << endl;
    cout << "2. Gaddis 6th Ed, Chapter 4, Problem 10" << endl;
    cout << "3. Dietel 7th Ed, Chapter 2, Problem 23" << endl;
    cout << "4. Eckel 3th Ed, Chapter 1, Problem 9" << endl;
    cin >> choose;
    
    //Utilize switch() to implement the menu
    switch(choose){
        case 1: cout << "Place solution to 1 here!" << endl; break;
        case 2: cout << "Place solution to 10 here!" << endl; break;
        case 3: cout << "Place solution to 23 here!" << endl; break;
        case 4: cout << "Place solution to 9 here!" << endl; break;
                default: cout << "Thank you for picking an incorrect option.";
    }
    //Exit stage right
    return 0;
}

