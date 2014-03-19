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
    switch(score>89){
        case true: grade='A';break;
        default:
           switch(score>79){
               case true: grade='B';break;
               case false:
                   switch(score>69){
               case true: grade='C';break;
               default:
                          switch (score>59){
                             case true: grade='D';break;
                             default: grade='F';
                       
                          }
                   }
           }
    }

    //Output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;   
    
    //Exit Stage Right
    return 0;
}

