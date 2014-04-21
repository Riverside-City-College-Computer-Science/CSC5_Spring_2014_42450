/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 15, 2014, 11:13 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float score1, score2, score3, score4, score5, avg;
    
    //prompt user for test scores
    cout<<"Score 1:"<<endl;
    cin>>score1;
    cout<<"Score 2:"<<endl;
    cin>>score2;
    cout<<"Score 3:"<<endl;
    cin>>score3;
    cout<<"Score 4:"<<endl;
    cin>>score4;
    cout<<"Score 5:"<<endl;
    cin>>score5;
    
    //Calculate average score
    avg=(score1+score2+score3+score4+score5)/5;
    
    //output average test score
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Average score: "<<avg<<endl;
    
    

    return 0;
}

