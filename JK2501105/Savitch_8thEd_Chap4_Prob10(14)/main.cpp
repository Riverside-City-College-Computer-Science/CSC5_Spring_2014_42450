//
//  main.cpp
//  planer
//
//  Created by JuLio on 6/7/14.
//  Copyright (c) 2014 JuLio. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//Global constant

//Funtion Prototypes
float basal(float weight)
{
    return 70 * pow((weight/2.2), 0.756);
}

float physical(float weight, float minutes, float intensity)
{
    return (0.0385 * intensity * weight * minutes);
}

int main(int argc, const char * argv[])
{
    float weight, cal, totalcal;
    int intensity, minutes;
    char choice;
    do
    {
        totalcal = 0;
        cout<<"Enter weight of person: ";
        cin>>weight;
        cout<<"Enter intensity of exercise that person does: ";
        cin>>intensity;
        cout<<"Enter minutes for exercise: ";
        cin>>cal;
        totalcal = basal(weight) + physical(weight, minutes, intensity);
        totalcal*=1.1;
        cout<<"You can enjoy "<<(totalcal / cal)<<" servings of food daily";
        cout<<"Do you want to repeat calculations?";
        cin>>choice;
    }
    while (choice == 'y' || choice == 'Y');
        
    
}



