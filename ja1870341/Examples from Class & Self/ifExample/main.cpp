/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C
 *
 * Created on March 19, 2014, 8:28 AM
 */
//System libraries
#include <iostream>
#include <cstdlib>//rnd # gen
#include <ctime>//Gives the time function for time seed; oine 18
using namespace std;

//Global Constants
//Function Prototypes
//Execution starts here
int main(int argc, char** argv) {
//Set rnd # seed & declare variables
    srand(static_cast<unsigned int>(time(0)));
    unsigned char score=rand()%51+50; // # in-between 50 and 100
    //This is because %51 includes numbers 1-50 (its 51 because 50 would mean
    //0-49. Then it adds 50 to ensure the score is between 50 and 100. 
    char grade;
    //What score corresponds with the correct grade?
    if(score>89)grade='A';
    if(score<90&&score>79)grade='B';
    if(score<80&&score>69)grade='C';
    if(score<70&&score>59)grade='D';
    if(score<60)grade='F';
    //Output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //Exit Stage Right
    return 0;
}

