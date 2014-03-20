/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 19, 2014, 8:32 AM
 */

#include <iostream>//I/O stream
#include <cstdlib>//need random num generator
#include <ctime>
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables and Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    char score=rand()%51+50; //gives num between 50-100
    char grade;
    //what score corresponds with the correct grade?
    switch(score>89){
      case true: grade='A';break;
      default:
        switch(score>79){
          case true: grade='B';break;
          default:
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
    //output score
    cout<<"Score of "<<static_cast<int>(score)
        <<" gives a grade = "<<grade<<"."<<endl;
    //Exit Stage Right!!
    return 0;
}