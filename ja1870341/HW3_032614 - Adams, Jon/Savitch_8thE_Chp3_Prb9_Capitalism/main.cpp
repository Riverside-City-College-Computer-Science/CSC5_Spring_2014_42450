/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 29, 2014, 11:32 PM
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    float loan, rate;
    float mPaymnt, totPaid, tIntrst;
    int n=1, nPaymnts, orinPay;
    cout<<"Input the loan $, interest rate %, and"<<endl;
    cout<<"number of payments"<<endl;
    cin>>loan>>rate>>nPaymnts;
    //Store original term value
    orinPay=nPaymnts;
    //Convert rate into proper format
    rate=rate/100;
    //Round decimals
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Loop for calculating payments
    do {
        mPaymnt=((loan*rate)/nPaymnts)+(loan/nPaymnts);
        tIntrst=(loan*rate/nPaymnts)+tIntrst;
                cout<<"Loan amount: "<<loan<<endl;
                cout<<"Payment #"<<n++<<": "<<mPaymnt<<endl;
                cout<<"Interest Paid this period: "<<(loan*rate)/nPaymnts<<endl;
                cout<<"Principal Paid this period: "<<loan/nPaymnts<<endl;
                cout<<"Total interest paid: "<<tIntrst<<endl;
                cout<<"Balance carried forward: "<<loan-mPaymnt<<endl;
                cout<<endl;
                cout<<endl;
        loan=loan-mPaymnt;
        nPaymnts=(--nPaymnts);
        //Cutoff for final payment to not be exponentially reduced
        if (mPaymnt>loan) {
                cout<<"Final payment is: "<<loan<<endl;
                cout<<"Payment #"<<n++<<": "<<loan<<endl;
                cout<<"Interest Paid this period: "<<(loan*rate)<<endl;
                cout<<"Principal Paid this period: "<<loan-(loan*rate)<<endl;
                cout<<"Total interest paid: "<<tIntrst+(loan*rate)<<endl;
                loan=(loan-loan);
                cout<<"Loan amount: "<<loan<<endl;
                nPaymnts=0;
                cout<<"I wish my mortgage company used this equation!!"<<endl;
        }
    } while (nPaymnts>0);
    //Exit Stage Right
    return 0;
}

