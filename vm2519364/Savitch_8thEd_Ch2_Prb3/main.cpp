/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 6, 2014, 8:07 PM
 * Purpose: Calculate Retroactive Pay Increase
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
//Variable Declaration
    float prevYr, retPay, nuAnul, nuMonth, payDiff;
    const float payInc=0.076;
    char ans;

do
{     
        
    //Input Previous Year's Annual Salary
    cout<<"Congratulations! You have been awarded a pay increase. \n";
    cout<<"\n";
    cout<<"Please enter your previous year annual salary to \n";
    cout<<"calculate your new pay rates: ";
    cin>>prevYr;
    cout<<"\n";
    
    //Calculate All Payments
    
    nuAnul = prevYr + (prevYr * payInc); //New Annual Salary
    
    nuMonth = nuAnul/12; //New Monthly Salary
         
    retPay = ((prevYr*payInc)/12)*6; //Retro Payment  
    
        
    //Output New Pay Rates
    cout<<"Your new annual pay rate is $";
    cout<<nuAnul;
    cout<<" per year.\n";
    cout<<"\n";
    
    cout<<"Your new monthly pay rate is $";
    cout<<nuMonth;
    cout<<" per month.\n";
    cout<<"\n";
    
    cout<<"Your retroactive pay for the last six months will be ";
    cout<<"a one time payment of $";
    cout<<retPay;
    cout<<".\n";
    
//Recalculation Options    
    cout<<"\n";
    cout<<"Would you like to recalculate?\n";
    cout<<"Press y for yes, n for no, and then press enter:";
    cin>>ans;   
} while (ans == 'y' || ans == 'Y');    

cout<<"\n";
cout<<"Thank you... Good-bye.\n";
    
//Exit Stage Right
    return 0;
}

