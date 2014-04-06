/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 5, 2014, 11:05 AM
 * Purpose: Clothes Size Calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
float hat(float wght_parm, float hght_parm);
//Returns hat size
float jacket(float wght_parm, float hght_parm, int age_parm);
//Returns jacket size
float waist(float wght_parm, int age_parm);
//Returns waist size

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    float wght, hght, hghtF, hghtI, hatSize, jacSize, waiSize;
    int age;
    //Input age, height, and weight
    cout<<"\n";
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"\n";
    cout<<"Enter your height, feet and then inches.";
    cout<<"\n";
    cout<<"Feet: ";
    cin>>hghtF;
    cout<<"Inches: ";
    cin>>hghtI;
    cout<<"\n";
    cout<<"Enter your weight (in pounds): ";
    cin>>wght;
    cout<<"\n";
    
    
    //Convert Feet to Inches
    hght=(hghtF*12)+hghtI;
    
    //Function Call
    hatSize = hat(wght, hght);
    jacSize = jacket(wght, hght, age);
    waiSize = waist(wght, age);
    //Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);   
    //Output Clothing Sizes
    cout<<"\n";
    cout<<"Hat size: ";
    cout<<hatSize;
    cout<<"\n";
    cout<<"Jacket size: ";
    cout<<jacSize;
    cout<<" inches";
    cout<<"\n";
    cout<<"Waist size: ";
    cout<<waiSize;
    cout<<" inches";
    cout<<"\n";
    //Exit Stage Right        
    return 0;
}

float hat(float wght_parm, float hght_parm)
{
    float h;
       h=(wght_parm/hght_parm)*2.9;
    return (h);
}

float jacket(float wght_parm, float hght_parm, int age_parm)
{
    float j;
    if ((age_parm>30)&&(age_parm%10==0)){
       j=((hght_parm*wght_parm)/288)+(((age_parm-30)/10)*0.125);
    }else if ((age_parm>40)&&(age_parm%10!=0)){ 
        age_parm=((age_parm/10.0)-((age_parm%10)/10.0))*10;//when the % is used it returns whole numbers | had to divide by 10
       j=((hght_parm*wght_parm)/288)+(((age_parm-30)/10)*0.125);
    }else    
        j=(hght_parm*wght_parm)/288;
    return (j);
          
}

float waist(float wght_parm, int age_parm)
{
    float w;
        
     if ((age_parm>28)&&(age_parm%2==0)){
           w=(wght_parm/5.7)+(((age_parm-28)/2)*0.1);    
    }else if ((age_parm>28)&&(age_parm%2!=0)){
           age_parm=age_parm-1;//decrease age by 1 to make sure that the number calculated will be even
           w=(wght_parm/5.7)+(((age_parm-28)/2)*0.1);
    }else      
        w=(wght_parm)/5.7;
        
    return (w);
           
}