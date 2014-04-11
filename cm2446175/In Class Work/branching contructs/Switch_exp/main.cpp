/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 19, 2014, 9:55 AM
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
                              default: grade ='F';
                                }
                        }
                }
    }
               
    cout<<"A Score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //exit stage right
    return 0;
}
