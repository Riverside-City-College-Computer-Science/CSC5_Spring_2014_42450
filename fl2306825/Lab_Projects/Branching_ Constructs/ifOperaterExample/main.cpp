

/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 19, 2014, 8:31 AM
 */

//System Libraries
#include<iostream>//I/O stream
#include<cstdlib>//Random number generator seed
#include<ctime>//to include time [(time(0)));]
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here
int main(int argc, char** argv) {

    //Declare variables, set random number seed
    srand(static_cast < unsigned int > (time(0)));
    char score = rand() %51 + 50;//[50 to 100]
    char grade;
   
    //What score corresponds with the correct grade
    (score>89)?grade='A':
    (score>79)?grade='B':
    (score>69)?grade='C':
    (score>59)?grade='D':
               grade='F';
   
    //output the result
    cout <<"A score of " <<static_cast<int>(score);
    cout << " gives a grade = " << grade << endl;
    
    //Execution ends here
    return 0;
}

