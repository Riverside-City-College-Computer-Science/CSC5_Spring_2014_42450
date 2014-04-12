/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 4, 2014, 10:05 PM
 * Purpose: Required Calories
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
float bmical(float wght_parm);
//Returns Basal Metabolic Rate
float phycal(int inten_parm, float wght_parm, int mins_parm);
//Returns Calories Required for Physical Activity
float concal(float calCons_parm);
//Returns Calories Required to Consume Calories

//Execution Begins Here
int main(int argc, char** argv) {   
//Declare Variables
float physicl, wght, calCons, bmi, consum, totcal;
int inten, mins;
    
cout<<"\n";
cout<<"Calculate your total necessary daily caloric consumption,\n";
cout<<"based on your favorite food.";
cout<<"\n";
cout<<"\n";
cout<<"Enter your weight (in pounds): ";
cin>>wght;
cout<<"\n";
cout<<"Enter the intensity of your daily physical activity.\n";
cout<<"\n";
cout<<"On a scale of 1 to 20\n";
cout<<"1  representing walking at a pace of 1 mph\n";
cout<<"10 representing running at a pace of 6 mph\n";
cout<<"20 representing running at a pace of 15 mph\n";
cout<<"\n";
cout<<"Intensity of physical activity: ";
cin>>inten;
cout<<"\n";
cout<<"Number of minutes spent during the physical activity: ";
cin>>mins;
cout<<"\n";
cout<<"Enter the number of calories contained in your favorite food: ";
cin>>calCons;
cout<<"\n";
//Function Call    
physicl=phycal(inten, wght, mins);
bmi=bmical(wght);
consum=concal(calCons);
//Set Decimal Precision
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
//Output Individual Results
cout<<"Calories required to meet your basal metabolic rate: ";
cout<<bmi;
cout<<" calories";
cout<<"\n";
cout<<"Calories required to meet your physical activity: ";
cout<<physicl;
cout<<" calories";
cout<<"\n";
cout<<"Calories required to consume your favorite food: ";
cout<<consum;
cout<<" calories";
cout<<"\n";
//Output Services of Favorite Food Required to Maintain Current Weight 
totcal=physicl+bmi+consum;
cout<<"\n";
cout<<"You would need a total of ";
cout<<(totcal/calCons);
cout<<" servings per day of your favorite food to maintain your current \n";
cout<<"weight at the specified activity level.";
cout<<"\n";    
    //Exit Stage Right
    return 0;
}

float phycal(int inten_parm, float wght_parm, int mins_parm)
{
    float phys;
    phys=(0.0385*inten_parm*wght_parm*mins_parm);
    return (phys);
}

float bmical(float wght_parm)
{
    float bmi, temp;
    temp=(wght_parm/2.2);
    bmi=70*pow(temp,0.756);
    return (bmi);
}

float concal(float calCons_parm)
{
    float enDig;
    enDig=calCons_parm*0.1;
    return(enDig);            
}