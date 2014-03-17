/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 17, 2014, 12:24 AM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
double loan, monthlypay, IntRat;
double e = 0;
double a, b, c, d;
double Interestpay;
double i;
//fiinputting values
cout<<"Enter the amount of the loan: $ ";
cin>>loan;
cout<<"Enter the interest per year: ";
cin>>Interestpay;
cout<<"Enter the monthly pay: $ ";
cin>>monthlypay;
c = loan;
cout<<endl;
cout<<endl;
cout<<endl;
for(i=1; c>0;i++)
{
IntRat = Interestpay/100/12;
a = IntRat*c;
b = monthlypay-a;
cout<<"Month: "<<i<<endl;
cout<<"Principle Interest: "<<a<<endl;
cout<<"Principle Remaining: 5 "<<b<<endl;
c = c-b;
cout<<"You still have a balance of: 5 "<<c<<endl;
cout<<endl;
d = e+a;
e = d;
}
i = i-1;
if(c<-0.1)
    c = c*-1;
else if (c>0.1)
    c = c*1;

cout<<"The total month is; "<<i<<endl;
cout<<"The total Interesr paid is: "<<d<<endl;
cout<<"You have a credit of "<<c<<endl;

system("pause");
    return 0;
}

