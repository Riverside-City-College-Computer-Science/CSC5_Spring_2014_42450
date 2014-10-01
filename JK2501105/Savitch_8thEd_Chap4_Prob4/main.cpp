/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on June 4, 2014, 7:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//Function Prototypes
float inflation(float pre_price, float cur_price);

int main(int argc, char** argv) 
{
    //Variable declaration
    float pre_price, cur_price, rate;
    char choice;
    do
    {
        //input previous year price
        cout<<"Enter previous year price of the item"<<endl;
        cin>>pre_price;
        //input present year price
        cout<<"Enter present year price of the item"<<endl;
        cin>>cur_price;
        //Calculate rate of inflation
        rate = inflation(pre_price,cur_price);
        //Display value of rate of inflation
        cout<<"Rate of inflation: "<<rate*100<<"%"<<endl;
        //input for repeat calculation
        cout<<"If you want to repeat calculation for different variable then press 'Y'";
        cin>>choice;
    }
    while (choice == 'y' || choice == 'Y');

    return 0;
}

//Define Function

float inflation(float pre_price, float cur_price)
{
    //Return function value
    return ((cur_price - pre_price)/cur_price);
}
float estimated(float cur_price,double rate)
{
    return (cur_price * rate);
}
