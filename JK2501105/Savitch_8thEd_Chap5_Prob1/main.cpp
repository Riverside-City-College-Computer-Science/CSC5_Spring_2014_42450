//
//  main.cpp
//  planer
//
//  Created by JuLio on 6/7/14.
//  Copyright (c) 2014 JuLio. All rights reserved.
//

#include <iostream>
using namespace std;

void get_input(int &hr, int &min);
void calculate(int &hr, char &types);
void output(int hr, int min, char types);

int main(int argc, char** argv)
{
    int hours,min;
    char type,choice;
    do
    {
        cout<<"This program converts 24-hour to 12-notation"<<endl;
        get_input(hours,min);
        calculate(hours,type);
        output(hours,min,type);
        cout << "Do you want to repeat the calculation?"<<endl;
        cout << "Y / N"<<endl;
        cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
}

//Define Function

void calculate(int &hrs, char &type)
{
    if(hrs>12)
    {
        hrs=hrs%12;
        type='P';
    }
    else
        type='A';
}
void output(int hrs,int min, char t)
{
    cout<<"12-hour notation is: "<<endl;
    cout<<hrs<<":"<<min<<" "<<t<<"M"<<endl;
}