/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on February 24, 2014, 8:09 PM
 * Savitch Chap1 Prob5
 * Enter two integers and have their outputs
 * added and multiplied.
 */

#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Beings Here
int main(int argc, char** argv) {
    //Declare Variables
    int nmb1, nmb2, sum, product;
    //Prompt user to enter first integer
    cout << "Press return after entering an integer." <<endl;
    cout << "Enter first integer: ";
    cin >> nmb1;
    //Prompt user to enter second integer
    cout << "Enter second integer: ";
    cin >> nmb2;
    //Equations
    sum = nmb1 + nmb2;
    product = nmb1 * nmb2;
    //Output Results
    cout << "If you add ";
    cout << nmb1;
    cout << " and ";
    cout << nmb2;
    cout << " then their sum is ";
    cout << sum <<endl;
    cout << "If you multiply ";
    cout << nmb1;
    cout << " and ";
    cout << nmb2;
    cout << " then their product is ";
    cout << product <<endl;
    cout << endl;
    //Output this is the end of the program
    cout << "This is the end of the program.\n";
    //Exit Stage Right
    return 0;
}
