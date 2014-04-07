/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 7, 2014, 8:38 AM
 * Purpose: 
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
float income, tax;

cin>>income;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

if ((income>15001)&&(income<25000)){
         tax = ((income-15000)*.05);
         cout<<"$";
         cout<<tax;
}else if (income>25000){
         tax = ((income-15000)*.10);
         cout<<"$";
         cout<<tax;
}else 
       cout<<"No Tax";
    
    return 0;
}

