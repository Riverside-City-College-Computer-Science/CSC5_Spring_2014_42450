/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 19, 2014, 8:54 AM
 */

//system libraries
#include <iostream>//i/o stream
#include <cstdlib>//random nu,ber generator seed
#include <ctime>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //set random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    unsigned char score=rand()%51+50;//[50,100]
    char grade;
    //what score corresponds with the correct grade
    (score>89)?grade='A':
    (score>79)?grade='B':
    (score>69)?grade='C':
    (score>59)?grade='D':
               grade='F';
    //output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //exit stage right
    

    return 0;
}