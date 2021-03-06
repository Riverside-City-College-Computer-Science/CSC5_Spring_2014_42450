/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19, 2014, 8:31 AM
 */

//System Libraries
#include <cstdlib>//Random number generator seed
#include <iostream>//I/O stream
#include <ctime>//Gives the time function
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    unsigned char score=rand()%51+50;//[50,100]
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
                switch(score>59){
                  case true: grade='D';break;
                  default: grade='F';
                }
            }
        }
    }
    //Output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //Exit Stage Left!!!
    return 0;
}