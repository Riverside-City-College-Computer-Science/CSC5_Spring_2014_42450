/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 21, 2014, 12:28 PM
 * Purpose: Create A Menu To Show The Solutions Of The Midterm Problems
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <cmath> //Mathematical Equations
#include <iomanip> //Formatting
#include <string> //Characters
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choice=0;
    
    //Ask User To Input A Number To See The Problem
    cout<<"Dr. Lehr, please choose a problem from the following list:"<<endl;
    cout<<""<<endl;
    cout<<"Problem 1."<<endl;
    cout<<"Problem 2."<<endl;
    cout<<"Problem 3."<<endl;
    cout<<"Problem 4."<<endl;
    cout<<"Problem 5."<<endl;
    cout<<"Problem 6."<<endl;
    cin>>choice;
    
    //If The Choice Is Invalid, Use The While Loop To Continuously Ask
    //Until User Gets It Right
    while (choice<1||choice>6){
        cout<<"Invalid choice Dr. Lehr, please try again."<<endl;
        cin>>choice;
    }
    
    //Switch And Answer Questions, Output Results
    switch(choice){
        case 1:{
            
            //This Program Will Output A Number of Rows And Columns According 
            //To The User's Input
            //Declare Variables
            int row=0,column=0,line=0;
            
            //Ask The User To Input The Number They Would Like To Output
            cout<<"Dr. Lehr, please input a positive number to output ";
            cout<<"that number of lines."<<endl;
            cin>>line;
            
            //If Line Is Negative, Loop For Positive Until Right
            while (line<1){
                cout<<"Dr. Lehr, that is an invalid number. ";
                cout<<"Please try again."<<endl;
                cin>>line;
            }
            
            //Output The Results
            for(int row=0;row<line;row++){
                cout<<row+1;
                cout<<endl;
                for(int column=0;column<=row;column++){
                    cout<<" ";
                }
            }
            break;    
        }//End Of Case 1
        
        case 2:{
            
            //This Program Will Output A Number Of Asterisks Which Corresponds
            //With The Number The User Inputs
            //Declare Variables
            int numPck,num[5],cnt=0;
            
            //Ask User For The Number Of Lines They Want
            cout<<"Dr. Lehr, how many numbers would you ";
            cout<<"like to input?"<<endl;
            cout<<"Number: ";
            cin>>numPck;
            cout<<" "<<endl;
            
            //If Number Is Outside Of Boundaries, Loop Until It Is Correct
            while (numPck<=0||numPck>=6){
                cout<<"I'm sorry Dr. Lehr, but you need to input ";
                cout<<"a number between 1 and 5. Please try again."<<endl;
                cout<<"Number: ";
                cin>>numPck;
                cout<<" "<<endl;
            }
            
            //Make A Loop To Add The Numbers Per Row, 3 To 27
            for(int p=0;p<numPck;p++){
                cout<<"Great! Now enter another number for each of ";
                cout<<"your first number(s), this time from 3 to 27."<<endl;
                cout<<"Number: ";
                cin>>num[p];
                cout<<" "<<endl;
                
                //If Number Is Outside Of Range, Loop Until It Is Correct
                while (num[p]<3||num[p]>27){
                    cout<<"Dr. Lehr, please choose a number ";
                    cout<<"between 3 and 27."<<endl;
                    cout<<"Number: ";
                    cin>>num[p];
                    cout<<" "<<endl;
                }
            }
            
            //Calculate And Output The Number Of Rows With Asterisks
            cout<<" "<<endl;
            cout<<"Here you go!"<<endl;
            while(cnt<numPck){
                for(int k=0;k<num[cnt];k++){
                    cout<<"*";
                }
                cout<<endl;
                cnt++;
            }
            break;
        }//End Of Case 2
        
        case 3:{
            
            //This Program Will Determine If A Bank Customer Has Exceeded Their
            //Checking Account
            //Declare Variables
            unsigned short acctNum[6],begBal=0,chkTot=0,depTot=0;
            float ovrDrft=12.50;
            
            //Initialize Conversion
            float newTot=static_cast<float>(begBal,chkTot,depTot);
            float odTot=static_cast<float>(begBal,chkTot,depTot);
            
            //Ask User For Their Account Number
            cout<<"Please enter your account number."<<endl;
            for(short u=0;u<6;u++){
                cout<<"Enter number "<<u+1<<": ";
                cin>>acctNum[u];
                while(acctNum[u]>9||acctNum[u]<0){
                    cout<<"Please enter a valid number!"<<endl;
                    cin>>acctNum[u];
                }
            }
            
            //Show Account Number
            cout<<" "<<endl;
            cout<<"Account Number: ";
            cout<<acctNum[0]<<acctNum[1]<<acctNum[2];
            cout<<acctNum[3]<<acctNum[4]<<acctNum[5]<<endl;
            
            //Ask For User's Balance
            cout<<" "<<endl;
            cout<<"Please enter your current account ";
            cout<<"balance (in dollars)."<<endl;
            cout<<"Current Balance: ";
            cin>>begBal;
            
            //Ask For The Monthly Total Of All Checks Written
            cout<<"Please enter the total amount (in dollars) ";
            cout<<"of all checks written by you this month."<<endl;
            cout<<"Total Check Amount: ";
            cin>>chkTot;
            
            //Ask For The Amount Of All Deposits This Month
            cout<<"Please enter the total amount (in dollars) ";
            cout<<"of all monetary deposits by you this month."<<endl;
            cout<<"Total Deposits: ";
            cin>>depTot;
            
            //Calculate The Total
            newTot=begBal+depTot-chkTot;
            
            //Output The New Total
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<" "<<endl;
            cout<<"Your total balance is $"<<newTot<<". ";
            cout<<"Thank you and have a pleasant day!"<<endl;
            
            //If User Has Overdrawn, Then Add Overdraft Fee And Output
            if(newTot<0){
                odTot=newTot-ovrDrft;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<" "<<endl;
                cout<<"Your total balance is $"<<odTot<<"."<<endl;
                cout<<"Your account has been charged $12.50 due to ";
                cout<<"an overdrawn account. Thank you and ";
                cout<<"have a pleasant day!"<<endl;
            }
            break;
        }//End Of Case 3
        
        case 4:{
            
            //This Program Will Determine The Gross Pay By Calculating Regular,
            //Overtime And Double Time
            //Declare Variables
            float hours=0,ratePay=0,grosPay=0;
            
            //Ask User To Input Hours Worked
            cout<<"Dr. Lehr, please input the number of hours worked."<<endl;
            cin>>hours;
            while (hours<1){
                cout<<"I'm sorry, but you couldn't have worked these hours! ";
                cout<<"Please input the number of hours worked."<<endl;
                cin>>hours;
            }
            
            //Ask User To Input The Rate Of Pay
            cout<<"Dr. Lehr, please input your rate of pay."<<endl;
            cin>>ratePay;
            while (ratePay<0.01){
                cout<<"You're working for free. Please input your ";
                cout<<"rate of pay."<<endl;
                cin>>ratePay;
            }
            
            //Calculate The Gross Pay
            if (hours<=20){
                grosPay=ratePay*hours;
            }else if (hours>=21&&hours<=39){
                grosPay=(ratePay*20)+(hours-20)*(ratePay*1.5);
            }else grosPay=(ratePay*20)+(19)*(ratePay*1.5)
                +(hours-39)*(ratePay*2);
            
            //Output The Gross Pay
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Dr. Lehr, your gross pay is: $"<<grosPay<<"."<<endl;
            break;
        }//End of Case 4
        
        case 5:{
            
            //This Program Will Figure Out The Charges For An Internet Bill
            //Declare Variables
            float package=0,hrs=0,bill=0;
            
            //Ask The User To Input Which Internet Package They Are Using
            cout<<"Dr. Lehr, please specify which subscription ";
            cout<<"package you use from the following list."<<endl;
            cout<<" "<<endl;
            cout<<"1. $29.95 per month, 11 hours access.  Additional hours ";
	    cout<<"are $2.25 up to 22 hours then $4.95 for all "; 
            cout<<"additional hours."<<endl;
            cout<<" "<<endl;
            cout<<"2. $34.95 per month, 22 hours access.  Additional hours ";
            cout<<"are $1.25 up to 33 hours then $2.25 for each ";
	    cout<<"hour above this limit."<<endl;
            cout<<" "<<endl;
            cout<<"3. $42.95 per month unlimited access."<<endl;
            cin>>package;
            
            //Ask The User To Input How Many Hours They Have Used This Month
            cout<<"Dr. Lehr, please input the total number of hours you ";
            cout<<"used on the internet this month."<<endl;
            cin>>hrs;
            
            //If Number Of Hours Is Invalid, Loop Until They Choose Right
            while (hrs<0.01){
                cout<<"Well, that means you didn't use the internet! "<<endl;
                cout<<"Please input the REAL number of hours you used ";
                cout<<"this month."<<endl;
                cin>>hrs;
            }
            
            //If Package Choice Is Invalid, Loop Until They Choose Right
            while (package<1||package>3){
                cout<<"I'm sorry Dr. Lehr, but you need to look closer. ";
                cout<<"Only choose one, two or three."<<endl;
                cin>>package;
            }
            
            //Calculate The Monthly Bill
            if (package==1){
                if (hrs>22)bill=29.95+(11*2.25)+((hrs-22)*4.95);
                else if (hrs>11)bill=29.95+((hrs-11)*2.25);
                else bill=29.95;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Your monthly bill is $"<<bill<<"."<<endl;
            }
            if (package==2){
                if (hrs>33)bill=34.95+(11*1.25)+((hrs-33)*2.25);
                else if (hrs>22)bill=34.95+((hrs-22)*1.25);
                else bill=34.95;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Your monthly bill is $"<<bill<<"."<<endl;
            }
            if (package==3){
                bill=42.95;
                cout<<"Your monthly bill is $"<<bill<<"."<<endl;
            }
            break;
        }//End Of Case 5
        
        case 6:{
            
            //This Program Will Output The 1475th "Ugly Number".
            //Declare Variables
            int a,b,c, i=1, D,E,F, ugly[1476]={0};
            ugly[0]=1, a=b=c=0;
            
            //Run Loop Until It Hits The 1475th Iteration
            while(ugly[1474] == 0) {
                D=ugly[a]*2;
                E=ugly[b]*3;
                F=ugly[c]*5;
 
            if(D<E&&D<F)
                 {ugly[i++]=D;a++;}
            else if(E<D&&E<F)
                 {ugly[i++]=E;b++;}
            else if(F<D&&F<E)
                 {ugly[i++]=F;c++;}
            else if(D==E)
                 {b++;}
            else if(D==F)
                 {c++;}
            else if(F==E)
                 {c++;}
    }
            
            //Output the 1475th Iteration
            cout<<" "<<endl;
            cout<<"The 1475'th ugly number is "<<ugly[1474]<<"."<<endl;

        }//End Of Case 6
    }//Complete End Of The Switch Choice

    return 0;
}

