/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 19, 2014, 8:31 AM
 * Purpose:
 */

//System Libraries
#include <cstdlib> //Random Number Generator
#include <iostream> //I/O stream
#include <ctime> //Gives the time function
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Get the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50; //[50,100]
    char grade;
    //What score corresponds with the correct grade
    if(score>89)grade='A';
    else if(score>79)grade='B';
    else if(score>69)grade='C';
    else if(score>59)grade='D';
    else grade='F';
    //Output the Results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //Exit Stage Right!
    return 0;
}

