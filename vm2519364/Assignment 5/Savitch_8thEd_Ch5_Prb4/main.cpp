/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 7, 2014, 10:14 AM
 * Calculate Average and  Standard Deviation of Four Scores
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void inpt4(float& score1, float& score2, float& score3, float& score4);
void calc4(float&score1, float& score2, float& score3, float& score4, float& avg, float& stdDv);
void outpt4(float& avg, float& stdDv);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float score1, score2, score3, score4, avg, stdDv;
    char ans;
    do{
    //Function Call
    inpt4(score1, score2, score3, score4);
    calc4(score1, score2, score3, score4, avg, stdDv);
    outpt4(avg, stdDv);
    cout<<"\n";
    cout<<"Would you like to calculate the average and standard deviation of another four scores?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    }while (ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

void inpt4(float& score1, float& score2, float& score3, float& score4){
    cout<<"\n";
    cout<<"Calculate the average and standard deviation of four of your scores.\n";
    cout<<"Enter each score individually.\n";
    cout<<"First Score:  ";
    cin>>score1;
    cout<<"Second Score: ";
    cin>>score2;
    cout<<"Third Score:  ";
    cin>>score3;
    cout<<"Fourth Score: ";
    cin>>score4;
    cout<<"\n";    
}
void calc4(float& score1, float& score2, float& score3, float& score4, float& avg, float& stdDv){
    float temp1, temp2, temp3, temp4, totTemp;
    cout.setf(ios::fixed);
    cout.precision(0);
    avg=(score1+score2+score3+score4)/4;
    temp1=((score1-avg)*(score1-avg));
    temp2=((score2-avg)*(score2-avg));
    temp3=((score3-avg)*(score3-avg));
    temp4=((score4-avg)*(score4-avg));
    totTemp=temp1*temp2*temp3*temp4;
    stdDv=sqrt(totTemp);
}
void outpt4(float& avg, float& stdDv){
    cout<<"\n";
    cout<<"Your average score is ";
    cout<<avg;
    cout<<"\n";
    cout<<"The standard deviation of the four scores is ";
    cout<<stdDv;
    cout<<"\n";
}