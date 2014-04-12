/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 19, 2014, 9:49 AM
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
    unsigned char score=rand()%51+50;//gives us a number between 50 and 100
    char grade;
    //what score corresponds with the correct grade
    (score>89)?grade='A':
    (score>79)?grade='B':
    (score>69)?grade='C':
    (score>59)?grade='D':
               grade='F';
               
    cout<<"A Score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //exit stage right
    return 0;
}
