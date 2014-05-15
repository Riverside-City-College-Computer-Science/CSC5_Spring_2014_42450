/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 12, 2014, 9:38 AM
 * Purpose: Output time after waiting
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void cnvTime(int&,char,string &);
void getInput(int &,int &,int &,int &,char&);
void waitTim(int ,int ,int ,int ,int &,int &,string,string &);
void print(int,int,int,int,string,string);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    char ampm;
    bool cntLoop=true;
    string curAP,latrAP;
    int choice,curHrs,curMin,waitHrs,waitMin,latrHr,latrMin;
    //loop until user quits
    do{
        //Get input and convert 24-hr format to 12-hr
        getInput(curHrs,curMin,waitHrs,waitMin,ampm);
        cnvTime(curHrs,ampm,curAP);
        //calculate wait time
        waitTim(curHrs,curMin,waitHrs,waitMin,latrHr,latrMin,curAP,latrAP);
        //display times
        print(curHrs,curMin,latrHr,latrMin,curAP,latrAP);
        //ask to repeat
        cout<<"To try again, press 1."<<endl
            <<"Press any other key to quit."<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                break;
            }
            default:{
                cout<<"Good-bye."<<endl;
                cntLoop=false;
            }
        }
    }while(cntLoop);
    //Exit Stage Right!
    return 0;
}
void getInput(int &curHr,int &curMin,int &waitHr,
              int &waitMin,char &AP){
    cout<<"Please enter the current time in 24-hr format "
        <<"and specify AM with A and PM with P."<<endl
        <<"(i.e. 1:45 PM = 13 45 P): ";
    cin>>curHr>>curMin>>AP;
    while(curHr<0){
        cout<<"Enter a proper 24-hr value: ";
        cin>>curHr;
    }
    while(curMin<0||curMin>59){
        cout<<"Enter a proper minute value: ";
        cin>>curMin;
    }
    while(AP!='A'&&AP!='P'){
        cout<<"Enter A for AM or P for PM: ";
        cin>>AP;
    }
    cout<<"Enter the waiting time in hours and minutes."<<endl
        <<"(i.e. 2 hours 30 min = 2 30): ";
    cin>>waitHr>>waitMin;
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
void waitTim(int cHr,int cMin,int wHr,int wMin,
             int &latrHr,int &latrMin,string curAP,string &latrAP){
    //calculate wait time by adding the wait values to current time
    int tmpHr=cHr+wHr;
    int tmpMin=cMin+wMin;
    if(tmpMin>59){
        tmpMin-=60;
        tmpHr++;
    }
    if(tmpHr>12){
        if(curAP=="PM"){
            latrAP="AM";
            tmpHr-=12;
        }
        else if(curAP=="AM"){
            latrAP="PM";
            tmpHr-=12;
        }
    }
    else{
        latrAP=curAP;
    }
    latrHr=tmpHr;
    latrMin=tmpMin;
}
void print(int curHrs,int curMin,int latrHr,
           int latrMin,string curAP,string latrAP){
    cout<<endl<<"The current time is: "
        <<curHrs<<":"<<curMin<<" "<<curAP<<endl
        <<setprecision(4)<<fixed<<showpoint
        <<"The time after the waiting: ";
    if(latrMin<10){
        cout<<latrHr<<":"<<0<<latrMin<<" "<<latrAP<<endl;
    }
    else if(latrMin==0){
        cout<<latrHr<<":"<<latrMin<<latrMin<<" "<<latrAP<<endl;
    }
    else{
        cout<<latrHr<<":"<<latrMin<<" "<<latrAP<<endl;
    }
    cout<<endl;
}