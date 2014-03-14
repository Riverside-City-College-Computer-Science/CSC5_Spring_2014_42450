/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 11, 2014, 9:12 PM
 * Purpose: Calculate pay with deductions
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    cin>>pyRate;
    cout<<"\n";
    cout<<"Enter the number of hours worked this week: ";
    cin>>hrsWrkd;
    cout<<"\n";
    cout<<"Enter total number of dependants: ";
    cin>>depnts;
    cout<<"\n";

   //Calculations for Gross Pay, Each Withholding Amount, Net Take Home Pay.
    if (hrsWrkd > 40)
        grssPay = (pyRate * 40) + (1.5 * pyRate * (hrsWrkd - 40));
    else
        grssPay = pyRate * hrsWrkd;
    
    ssnWht = grssPay * ssnTx;
    fedWht = grssPay * fedTx;
    statWht = grssPay * statTx;
    
    if (depnts >=4)
        ntPay = grssPay - (ssnWht + fedWht + statWht + uniDues + depWht);
        
    
    else
        ntPay = grssPay - (ssnWht + fedWht + statWht + uniDues);
        
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<setw(10)<<left<<"Your gross weekly pay is : ";
    cout<<setw(3)<<right<<"$"<<grssPay;
    cout<<"\n";
    cout<<setw(10)<<left<<"Your Social Security tax withholdings for this month are: ";
    cout<<setw(3)<<right<<"$"<<ssnWht;
    cout<<"\n";
    cout<<setw(10)<<left<<"Your federal income tax withholdings for this week are: ";
    cout<<setw(3)<<right<<"$"<<fedWht;
    cout<<"\n";
    cout<<setw(10)<<left<<"Your state income tax withholdings for this week are: ";
    cout<<setw(3)<<right<<"$"<<statWht;
    cout<<"\n";
    cout<<setw(10)<<left<<"Your union dues withholdings for this week are: ";
    cout<<setw(3)<<right<<"$"<<uniDues;
    cout<<"\n";
    cout<<setw(10)<<left<<"Your dependent withholdings for this week are: ";
    
    if (depnts >=4)
       cout<<setw(3)<<right<<"$"<<depWht;
    else cout<<setw(3)<<right<<"$"<<0.00;
    cout<<"\n";    
    cout<<"\n";
    cout<<setw(10)<<left<<"Your net pay for this week is: ";
    cout<<setw(3)<<right<<"$"<<ntPay;

cout<<"\n";
cout<<"\n";

//Recalculate Option
cout<<"Would you like to recalculate your weekly pay?\n";
cout<<"Press y for yes, n for no, and then press enter: ";
cin>>ans;
cout<<"\n";

}while (ans == 'y' || ans == 'Y');
cout<<"Don't spend it all at one place, good-bye.";
cout<<"\n";
cout<<"\n";
//Exit Stage Right
    return 0;
}

