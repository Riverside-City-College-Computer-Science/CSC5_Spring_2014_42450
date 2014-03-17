/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 11:38 PM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
///Variable declaration
double cost,inflation;
int year;
char choice;
do
{
///Inputt current cost price
cout<<"Enter Current price of item: ";
cin>>cost;
///Input rate of inflation
cout<<"Enter rate of inflation: ";
cin>>inflation;
///Input number of years
cout<<"Enter number of years ";
cin>>year;
///Calculate inflation
inflation/= 100;
for (int i=0; i<year; i++)
{
cost *= (1 + inflation);
} 
//Display year and cost
cout<<"Estimated cost of item after "<<year
<<" will be: "<<cost<<endl;
cout<<"To repeat calculations for different value then press 'Y' or 'y'";
cin>>choice;
}
while(choice == 'y' || choice == 'Y');

system("pause");



    return 0;
}

