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
    switch(score>89){
        case true: grade='A';break;
        default:
          switch(score>79){
              case true: grade='B';break;
              case false:
                switch (score>69){
                    case true: grade='C';break;
                    default:
                      switch(score>59){
                          case true: grade='D';break;
                          default: grade='F';
                                }
                        }
                }
    }
    //output the results
    cout<<"A score of "<<static_cast<int>(score);
    cout<<" gives a grade = "<<grade<<endl;
    //exit stage right
    

    return 0;
}