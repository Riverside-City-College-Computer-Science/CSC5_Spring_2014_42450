/* 
 * File:   main.cpp
 * Author: Evans, Cole
 *
 * Created on March 19, 2014, 8:31 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global constants

//Functions prototypes

//Execution begins here
int main(int argc, char** argv) 
{
//Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50;//[50,100]
    char grade;
//What score corresponds with the correct grade
    if(score>89)grade='A';
    if(score<90&&score>79)grade='B';
    if(score<80&&score>69)grade='C';
    if(score<70&&score>59)grade='D';
    if(score<60)grade='F';
//Output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
//Exit stage right
    return 0;
}

