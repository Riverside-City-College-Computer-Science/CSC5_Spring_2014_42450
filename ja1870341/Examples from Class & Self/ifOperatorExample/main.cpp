/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 19, 2014, 8:31 AM
 * Purpose: Randomly select score and grade
 */

//System Libraries
#include <iostream>//I/O stream
#include <cstdlib>//Random number generator seed
#include <ctime>//Gives the time function
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50;//[50,100]
    char grade;
    //What score corresponds with the correct grade
    (score>89)?grade='A':
    (score>79)?grade='B':
    (score>69)?grade='C':
    (score>59)?grade='D':
               grade='F';
    //Output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;   
    
    //Exit Stage Right
    return 0;
}

