/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 22, 2014, 11:04 PM
 * Purpose: Modify Chap2:Problem 18 to fit new parameters.
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Define Floats and Characters
    float wLbs,hInch,age,bmr,bmr1,choc;
    char sex, selc;
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Prompt user for inputs: weight, height, age, sex, how active they are
    cout<<"Enter your weight in pounds: ";
    cin>>wLbs;
    cout<<"Enter your height in inches: ";
    cin>>hInch;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Are you (M)ale or (F)emale? ";
    cin>>sex;
    cout<<"Are you:"<<endl;
    cout<<"(A)Sedentary"<<endl;
    cout<<"(B)Somewhat active (exercise occasionally)"<<endl;
    cout<<"(C)Active (exercise 3-4 days per week)"<<endl;
    cout<<"(D)Highly active (exercise every day)"<<endl;
    cout<<"Input A, B, C, or D: ";
    cin>>selc;
      
    if (sex=='f'||sex=='F')
    {
        bmr=655+(4.3*wLbs)+(4.7*hInch)-(4.7*age);//calculate BMR for female
        //calculate BMR based on new parameters
        if (selc=='a'||selc=='A')
        {
            bmr1=(.20*bmr)+bmr;
        }
        if (selc=='b'||selc=='B')
        {
            bmr1=(.30*bmr)+bmr;
        }
        if (selc=='c'||selc=='C')
        {
            bmr1=(.40*bmr)+bmr;
        }
        if (selc=='d'||selc=='D')
        {
            bmr1=(.50*bmr)+bmr;
        }
    }
    else if (sex=='m'||sex=='M')
    {
        bmr=66+(6.3*wLbs)+(12.9*hInch)-(6.8*age);//calculate BMR for male
        //calculate BMR based on new parameters
        if (selc=='a'||selc=='A')
        {
            bmr1=(.20*bmr)+bmr;
        }
        if (selc=='b'||selc=='B')
        {
            bmr1=(.30*bmr)+bmr;
        }
        if (selc=='c'||selc=='C')
        {
            bmr1=(.40*bmr)+bmr;
        }
        if (selc=='d'||selc=='D')
        {
            bmr1=(.50*bmr)+bmr;
        }
    }
    choc=bmr1/230;//equation for how many chocolate bars need to be consumed
    cout<<endl;
    //Output results
    cout<<"You should consume "<<choc<<" chocolate bars to maintain your weight."<<endl;
    //Exit Stage Right
    return 0;
}

