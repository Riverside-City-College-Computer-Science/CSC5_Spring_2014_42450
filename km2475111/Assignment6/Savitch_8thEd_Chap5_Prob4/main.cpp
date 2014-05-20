/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 9:09 AM
 * Purpose: make a function for average and standard deviation
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void getInpt(float &,float &,float &,float &);
void calcAvg(float,float,float,float,float &,float &);
void print(float,float,float,float,float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    bool cntLoop=true;
    int choice;
    float score1,score2,score3,score4,average,stdDev;
    //loop until user wants to quit
    do{
        //get input
        getInpt(score1,score2,score3,score4);
        //calculate
        calcAvg(score1,score2,score3,score4,average,stdDev);
        //print
        print(score1,score2,score3,score4,average,stdDev);
        //ask to loop
        cout<<endl<<"To try again, press 1."<<endl
            <<"To quit, press any other key."<<endl;
        cin>>choice;
        switch(choice){
            case 1:{//do nothing and let program loop
                break;
            }
            default:{
                cntLoop=false;
                cout<<"Good-bye."<<endl;
            }
        }
    }while(cntLoop);
    //Exit Stage Right!!
    return 0;
}
void getInpt(float &s1,float &s2,float &s3,float &s4){
    cout<<"Enter four scores: ";
    cin>>s1>>s2>>s3>>s4;
    while(s1<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s1;
    }
    while(s2<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s2;
    }
    while(s3<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s3;
    }
    while(s4<0){
        cout<<"Enter a number 0 or greater: ";
        cin>>s4;
    }
}
void calcAvg(float s1,float s2,float s3,
             float s4,float &average,float &stdDev){
    average=(s1+s2+s3+s4)/4;
    stdDev=sqrt(pow(s1-average,2)+
                pow(s2-average,2)+
                pow(s3-average,2)+
               (pow(s4-average,2)/4)
               );
}
void print(float s1,float s2,float s3,
           float s4,float average,float stdDev){\
    cout<<"The average of "<<s1<<", "
        <<s2<<", "<<s3<<","<<" and "<<s4<<" = "<<average<<endl
        <<"The Standard Deviation of "<<s1<<", "
        <<s2<<", "<<s3<<","<<" and "<<s4<<" = "<<stdDev<<endl;
}
