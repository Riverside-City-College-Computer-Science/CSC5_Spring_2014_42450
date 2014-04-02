/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 31, 2014, 7:19 PM
 * Purpose: Calculate Clothing Size
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
float CNVINCH=12;

//Function Prototypes

float hat(float hght_parm, float wght_parm);
//Returns size of a hat based on height, and weight.
//The formal parameter named hght_parm is the person's height in inches
//The formal parameter named wght_parm is the person's weight in pounds
float jacket(float hght_parm, float wght_parm);
//Returns size of a jacket based on height, weight, and age.
//The formal parameter named hght_parm is the person's height in inches
//The formal parameter named wght_parm is the person's weight in pounds
float size(float wght_parm);
//Returns size of clothing based on weight and age
//the formal parameter named wght_parm is the person's weight in pounds


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float hatSiz, jcktSiz, waist, hght, hghtF, hghtI, wght, age;
    
    cout<<"\n";
    cout<<"Calculate clothing size based on height, weight, and age. ";
    cout<<"\n";
    cout<<"\n";
    cout<<"Enter your height (feet then inches)";
    cout<<"\n";
    cout<<"feet: ";
    cin>>hghtF;
    cout<<"inches: ";
    cin>>hghtI;
    cout<<"\n";
    cout<<"Enter your weight (in pounds): ";
    cin>>wght;
    cout<<"\n";
    cout<<"Enter your age (in years): ";
    cin>>age;
    cout<<"\n";
    
    
    
    hatSiz = hat(hght, wght);
    jcktSiz = jacket(hght, wght);
    waist = size(wght);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Results";
    cout<<"\n";
    cout<<"Hat Size: ";
    cout<<hatSiz;
    cout<<"\n";
    cout<<"Jacket Size: ";
    cout<<jcktSiz;
    cout<<"\n";
    cout<<"Waist Size: ";
    cout<<waist;
    cout<<"\n";
    //Exit Stage Right
    return 0;
}

float hat(float hght_parm, float wght_parm)
{
    float hghtF, hghtI;
    hght_parm = (hghtF*CNVINCH)+hghtI;
    return (wght_parm/hght_parm)*2.9;
}

float jacket(float hght_parm, float wght_parm)
{
    float n, hghtF, hghtI, age, hatSiz;
    hght_parm = (hghtF*CNVINCH)+hghtI;
    if ((age>=40)||(age<50))
        n=hght_parm*(wght_parm/288)+(1/8);
    if ((age>=50)||(age<60))
        n=hght_parm*(wght_parm/288)+(2/8);
    if ((age>=60)||(age<70))
        n=hght_parm*(wght_parm/288)+(3/8);
    if ((age>=70)||(age<80))
        n=hght_parm*(wght_parm/288)+(4/8);
    if ((age>=80)||(age<90))
        n=hght_parm*(wght_parm/288)+(5/8);
    if ((age>=90)||(age<100))
        n=hght_parm*(wght_parm/288)+(6/8);
    if ((age>=100)||(age<110))
        n=hght_parm*(wght_parm/288)+(7/8);
    if ((age>=110)||(age<120))
        n=hght_parm*(wght_parm/288)+(8/8);
    if ((age>=120)||(age<130))
        n=hght_parm*(wght_parm/288)+(8/8);
    else
        n=hght_parm*(wght_parm/288);
    return (n);
}

float size(float wght_parm)
{
    float age, w;
    if ((age>28)&&(age%2=0))
        w=(wght_parm/5.7)+(1/10);
    else
        w=(wght_parm/5.7);
    return (w) ;
}