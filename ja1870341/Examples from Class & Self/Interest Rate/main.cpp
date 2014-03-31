/* 
 * File:   main.cpp
 * Author: Dr. Lehr
 *
 * Created on March 10, 2014, 9:35 AM
 */

#include <iostream> //
#include <cmath> //Calculations
#include <iomanip> //Formatting
//Global Constants

const int CNVPCNT=100;
const int CNVYMON=12;

using namespace std;


int main(int argc, char** argv) {

    float loan, rate, nPaymnts;
    float mPaymnt, totPaid, tIntrst;
    cout<<"Input the loan $, interest rate %, and"<<endl;
    cout<<"number of payments"<<endl;
    cin>>loan>>rate>>nPaymnts;
    rate/=(CNVYMON*CNVPCNT);
    //Calculations
    float tmp=pow(1+rate,nPaymnts);//Do once
    nPaymnts=rate*tmp/(tmp-1)*loan;
    //Round to exact # of pennies; truncating by rounding to an int
    int penies=(mPaymnt+0.005)*CNVPCNT;
    //ABOVE IS IMPORTANT ^ ^ ^
    mPaymnt=static_cast<float>(penies)/CNVPCNT;
    totPaid=mPaymnt*nPaymnts;
    tIntrst=totPaid-loan;
    //Output Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(20)<<left<<"loan Amt: ";
    cout<<"$"<<loan<<endl;
    cout<<setw(21)<<left<<"Yearly Interest: ";
    cout<<setw(9)<<right<<rate*(CNVYMON*CNVPCNT);
    cout<<"%"<<endl;
    cout<<setw(20)<<left<<"Number of payments:";
    cout<<setw(10)<<right<<nPaymnts<<endl;
    cout<<setw(20)<<left<<"Monthly payment: ";
    cout<<"$"<<endl;
    cout<<setw(10)<<right<<mPaymnt<<endl;
    cout<<setw(20)<<left<<"Total amount paid is: ";
    cout<<right<<"$"<<totPaid<<endl;
    cout<<setw(20)<<left<<"Total interest paid is: ";
    cout<<setw(10)<<right<<"$"<<tIntrst<<endl;
    cin.get();
    cin.get();
    //Exit Stage Right
    return 0;
}

