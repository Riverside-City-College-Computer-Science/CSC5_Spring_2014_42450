/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 19, 2014, 8:57 AM
 */
//system libraries
#include <cstdlib>//random number generator
#include<iostream>//i/o stream
#include<ctime>

using namespace std;
//global constants

//function prototypes

//execution beings here
int main(int argc, char** argv) {
    //declare varibales and set random number seed
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50;//gives us a number between 50 and 100
    char grade;
    //what score corresponds with the correct grade
    if(score>90)grade='A';
    else if(score>79)grade='B';
    else if(score>69)grade='C';
    else if(score>59)grade='D';
    else grade='F';
    cout<<"A Score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //exit stage right
    return 0;
}

