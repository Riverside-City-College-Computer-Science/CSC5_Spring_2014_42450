/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 26, 2014, 5:10 AM
 * Purpose: Calculate BMI
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants


//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
//Declare Variables
    int choice;
    float weight, height, height1, height2, age, bmr;
    char sex;
    //Input Sex, weight, height, and age.
    cout<<"\n";
    cout<<"Calculate your basal metabolic rate (BMR).";
    cout<<"\n";
    cout<<"Enter your weight (in pounds): ";
    cin>>weight;
    cout<<"\n";
    cout<<"Enter your height (feet then inches)\n";
    cout<<"feet: ";
    cin>>height1;
    //cout<<"\n";
    cout<<"inches: ";
    cin>>height2;
    cout<<"\n";
    cout<<"Enter your age (in years): ";
    cin>>age;
    cout<<"\n";
    cout<<"Male or Female? ";
    cin>>sex;
    cout<<"\n";
   
    height = (height1*12) + height2;
  
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    if (sex=='m'||sex=='M'){
        bmr = 66 + (6.3*weight) + (12.9*height) - (6.8*age);
        float tmp = bmr/230;
        cout<<"Your basal metabolic rate is ";
        cout<<bmr;
        cout<<" calories";
        cout<<"\n";
        cout<<"You would require ";
        cout<<tmp;
        cout<<" bars of chocolate a day to maintain your current weight.";
        cout<<"\n";
    }else if (sex=='f'||sex=='F'){
        bmr = 655 + (4.3*weight) + (4.7*height) - (4.7*age);
        float tmp = bmr/230;
        cout<<"Your basal metabolic rate is ";
        cout<<bmr;
        cout<<" calories";
        cout<<"\n";
        cout<<"You would require ";
        cout<<tmp;
        cout<<" bars of chocolate a day to maintain your current weight.";
        cout<<"\n";
    }
    
    cout<<"\n";
    cout<<"Please select one of the following for a more accurate BMR reading ";
    cout<<"\n";
    cout<<"\n";
    cout<<"1 for Sedentary\n";
    cout<<"2 for Somewhat active (exercise occasionally)\n";
    cout<<"3 for Active (exercise 3-4 days per week)\n";
    cout<<"4 for Highly active (exercise every day)\n";
    cout<<"\n";
    cout<<"Enter your selection: ";
    cin>>choice;
    cout<<"\n";
    
    switch (choice){
        case 1:
            bmr = (bmr*.20)+bmr;
            cout<<"Your basal metabolic rate based on your daily activity is ";
            cout<<bmr;
            cout<<" calories.\n";
            cout<<"Based on your new BMR you will only need ";
            cout<<bmr/230;
            cout<<" bars of chocolate to maintain your weight.\n";
            break;
        case 2:
            bmr = (bmr*.30)+bmr;
            cout<<"Your basal metabolic rate based on your daily activity is ";
            cout<<bmr;
            cout<<" calories.\n";
            cout<<"Based on your new BMR you will only need ";
            cout<<bmr/230;
            cout<<" bars of chocolate to maintain your weight.\n";
            break;
        case 3:
            bmr = (bmr*.40)+bmr;
            cout<<"Your basal metabolic rate based on your daily activity is ";
            cout<<bmr;
            cout<<" calories.";
            cout<<"\n";
            cout<<"Based on your new BMR you will only need ";
            cout<<bmr/230;
            cout<<" bars of chocolate to maintain your weight.\n";
            break;
        case 4:
            bmr = (bmr*.50)+bmr;
            cout<<"Your basal metabolic rate based on your daily activity is ";
            cout<<bmr;
            cout<<" calories.";
            cout<<"\n";
            cout<<"Based on your new BMR you will only need ";
            cout<<bmr/230;
            cout<<" bars of chocolate to maintain your weight.\n";
            break;
        default:
            cout<<"Not a valid selection.\n";
            cout<<"Choose again.\n";
    }
       cout<<"\n";        
    //Exit Stage Right
    return 0;
}

