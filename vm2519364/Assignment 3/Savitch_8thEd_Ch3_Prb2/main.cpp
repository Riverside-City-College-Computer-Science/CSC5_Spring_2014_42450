/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 25, 2014, 5:29 PM
 * Purpose: Calculate Revolving Credit Payment Amount
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float amnt, intrst1=.015, intrst2=.01, totlDu, minPymnt;
    char ans;
    do{
    //Input Loan Amount
    cout<<"\n";
    cout<<"Calculate payment due on your account\n";
    cout<<"Enter Account Balance: $";
    cin>>amnt;
    cout<<"\n";
    //Two decimal points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    //Calculate and Output Total Due and Minimum Payment
    if (amnt<=1000){
        float tmpInt = amnt*intrst1;//Calculate Interest
        totlDu = tmpInt + amnt;//Calculate Total
        cout<<"Your total amount due is $";
        cout<<totlDu;
        cout<<"\n";
             cout<<"Your minimum payment is $";
             if (totlDu<=10){
                 cout<<totlDu;
             }else if (totlDu>10){
                 minPymnt=totlDu*.10;
                         cout<<minPymnt;
             } 
    }else if (amnt>=1000){
        float tmp = amnt-1000;//Subtract 1st $1000 to calculate interest on remainder
        float tmpInt = 1000*intrst1;//Calculate interest on first $1000
        float tmpInt2 = tmp*intrst2;//Calculate interest on remainder amount
        totlDu = tmpInt+tmpInt2+tmp+1000;//Calculate Total
        minPymnt=totlDu*.10;
        cout<<"Your total amount due is $";
        cout<<totlDu;
        cout<<"\n";
             cout<<"Your minimum payment is $";
             cout<<minPymnt;
    }else
        
    cout<<"\n";  
    //Option to repeat calculation
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to calculate another amount?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"\n";
    cout<<"Good-bye and have a nice day!";
    //Exit Stage Right
    return 0;
}

