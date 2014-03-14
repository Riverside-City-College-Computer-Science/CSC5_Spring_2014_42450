/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 11, 2014, 9:12 PM
 * Purpose: Calculate pay with deductions
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Variable Declaration
    float pyRate, hrsWrkd, grssPay, ssnTx=.06, fedTx=.14, statTx=.05, ntPay;
    float uniDues=10, depnts, ssnWht, fedWht, statWht, depWht=35; 
    char ans;
    do
    {
        
//Input Hours Worked and Dependents
    cout<<"\n";
    cout<<"Enter your hourly pay rate: $";
    cout<<pyRate;
    cout<<"\n";
    cout<<"Enter the number of hours worked this week: ";
    cout<<hrsWrkd;
    cout<<"\n";
    cout<<"Enter total number of dependants: ";
    cout<<depnts;
    cout<<"\n";

   //Calculations for Gross Pay, Each Withholding Amount, Net Take Home Pay.
    grssPay = pyRate * hrsWrkd;
    ssnWht = grssPay * ssnTx;
    fedWht = grssPay * fedTx;
    statWht = grssPay * statTx;
    
    if (depnts >= 4)
   
        ntPay = grssPay - (ssnWht + fedWht + statWht + uniDues + depWht);

    else     
        ntPay = grssPay - (ssnWht + fedWht + statWht + uniDues);
    int depWht=0;

//Output Gross Pay, Each Withholding Amount, Net Take Home Pay
cout<<"Your gross weekly pay is : $";
cout<<grssPay;
cout<<"\n";
cout<<"Your Social Security tax withholdings for this month are: $";
cout<<ssnWht;
cout<<"\n";
cout<<"Your federal income tax withholdings for this week are: $";
cout<<fedWht;
cout<<"\n";
cout<<"Your state income tax withholdings for this week are: $";
cout<<statWht;
cout<<"\n";
cout<<"Your union dues withholdings for this week are: $";
cout<<uniDues;
cout<<"Your dependent withholdings for this week are: $";
cout<<depWht;
cout<<"\n";
cout<<"Your net pay for this week is: $";
cout<<ntPay;
cout<<"\n";

//Recalculate Option
cout<<"Would you like to recalculate your weekly pay?\n";
cout<<"Press y for yes, n for no, and then press enter: ";
cin>>ans;
cout<<"\n";

}while (ans == 'y' || ans == 'Y');
cout<<"Don't spend it all in one place, good-bye.";
        
//Exit Stage Right
    return 0;
}

