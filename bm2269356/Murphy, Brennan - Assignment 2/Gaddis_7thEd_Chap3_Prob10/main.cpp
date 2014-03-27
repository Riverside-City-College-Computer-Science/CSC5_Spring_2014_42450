/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 10:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Constants Definitions

//Execution Starts here

int main(int argc, char** argv) {
    //Convert calcius to fahrenheit
    float cel, fah;
    
    cout << "Please input a temperature in Fahrenheit: ";
    cin >> fah;

    cel = (1.8*fah) + 32;
    
    cout << "That temperature in Fahrenheit is: " << cel << "." << endl;
    //Exit Stage Right
    return 0;
}


