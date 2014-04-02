/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 10, 2014, 7:53 AM
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip>//Formatting
#include <cmath>
using namespace std;

//Global Constants
const int CNVPCNT=100;
const int CNVYMON=12;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float loan,rate,nPaymts;
    float mPaymnt,totPaid,tIntrst;
    //Input the loan,interest rate, and
    //number of payments
    cout<<"Input the loan $,interest rate %, and "<<endl;
    cout<<"number of payments"<<endl;
    cin>>loan>>rate>>nPaymts;
    //Process for the Conversion
    rate/=(CNVYMON*CNVPCNT);
    //Calculations
    float tmp=pow(1+rate,nPaymts);//Do once
    mPaymnt=rate*tmp/(tmp-1)*loan;
    //Truncate to exact number of pennies
    int penies=(mPaymnt+0.005)*CNVPCNT;
    mPaymnt=static_cast<float>(penies)/CNVPCNT;
    totPaid=mPaymnt*nPaymts;
    tIntrst=totPaid-loan;
    //Output the Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(20)<<left<<"Loan Amt: ";
    cout<<"$"<<loan<<endl;
    cout<<setw(20)<<left<<"Yearly Interest: ";
    cout<<setw(9)<<right<<rate*(CNVYMON*CNVPCNT);
    cout<<"%"<<endl;
    cout<<setw(20)<<left<<"Number of Payments:";
    cout<<setw(9)<<right<<nPaymts<<endl;
    cout<<setw(20)<<left<<"Monthly Payment:";
    cout<<setw(9)<<right<<mPaymnt<<endl;
    cout<<setw(20)<<left<<"Total Payments:";
    cout<<setw(9)<<right<<totPaid<<endl;
    cout<<setw(20)<<left<<"Interest Paid:";
    cout<<setw(9)<<right<<tIntrst<<endl;
    //Exit stage right!
    return 0;
}
