/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 8:12 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short score1, score2, score3, score4, score5, scoreTotal;
    float scoreAve;
    
    //Ask user to input test scores
    cout<<"Please input the five test scores"<<endl;
    
    //Input test scores
    cin>>score1>>score2>>score3>>score4>>score5;
    
    //Calculate Average
    scoreTotal=score1+score2+score3+score4+score5;
    scoreAve=scoreTotal/5;
    
    //Output score average
    cout<<"Test Score Average = "<<setprecision(1)<<fixed<<scoreAve<<endl;
    
    //Exit Stage Right
    return 0;
}

