/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 19, 2014, 8:31 AM
 */

//System libraries
#include <cstdlib> //random number generator seed
#include <iostream> //I/O stream
#include <ctime> // Time
using namespace std;

//Constant definitions

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set random number seed using the time and declare variables
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50;
    char grade;
    
    //What score corresponds with the correct grade
    if(score > 89) grade = 'A';
    else if(score > 79) grade = 'B';
    else if(score > 69) grade = 'C';
    else if(score > 59) grade = 'D';
    else grade = 'F';
    
    //Output the result
    cout << "A score of " << static_cast<int>(score) << " gives a grade equal to " << grade << "." << endl;
    
    //Exit stage right
    return 0;
}

