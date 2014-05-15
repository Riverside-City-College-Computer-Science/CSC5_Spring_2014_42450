/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 12, 2014, 7:47 AM
 * Purpose: Convert 24-hr time to 12-hr time
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void getInput(int &,int &,char &);
void cnvTime(int &,char,string &);
void print(int,int,string);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    char ampm;
    string aMpM;
    bool cntMenu=true;
    int hours,minutes,answer;
    //loop until user quits
    do{
        //get time from user
        getInput(hours,minutes,ampm);
        //convert time
        cnvTime(hours,ampm,aMpM);
        //print time
        print(hours,minutes,aMpM);
        //ask user to repeat
        cout<<"To start over, press 1."<<endl
            <<"Or press any other key to quit."<<endl;
        cin>>answer;
        switch(answer){
            case 1:{
                break;
            }
            default:{
                cout<<"Good-bye."<<endl;
                cntMenu=false;
            }
        }
    }while(cntMenu);
    //Exit Stage Right!!
    return 0;
}
void getInput(int &hrs,int &min, char &AP){
    cout<<"Please enter the time in 24-hr format "
        <<"and specify AM with A and PM with P."<<endl
        <<"(i.e. 13:45 AM = 13 45 A): ";
    cin>>hrs>>min>>AP;
    while(hrs<0||hrs>24){
        cout<<"Enter a proper 24-hr value: ";
        cin>>hrs;
    }
    while(min<0||min>59){
        cout<<"Enter a proper minute value: ";
        cin>>min;
    }
    while(AP!='A'&&AP!='P'){
        cout<<"Enter A for AM or P for PM: ";
        cin>>AP;
    }
}
void cnvTime(int &hrs,char ampm,string &AP){
    if(hrs>12){hrs-=12;}
    if(ampm=='A'){
        AP="AM";
    }
    else{
        AP="PM";
    }
}
void print(int hrs,int min,string AP){
    cout<<hrs<<":"<<min<<" "<<AP<<endl;
}