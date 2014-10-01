//
//  main.cpp
//  planer
//
//  Created by JuLio on 6/7/14.
//  Copyright (c) 2014 JuLio. All rights reserved.
//

#include <iostream>
using namespace std;

//Global constant

//Function Prototype
float hatsize(float weight, float height);
float jacketsize(float height, float weight, int age);
float waistsize(float weight, int age);

int main(int argc, const char * argv[])
{
    //Define Variables
    float height, weight;
    int age;
    char choice;
    do
    {
        //input weight
        cout<<"Enter weight of person: ";
        cin>>weight;
        //input height
        cout<<"Enter height of person: ";
        cin>>height;
        //function call to get hat size
        cout<<"Hat size : "<< hatsize(weight, height)<<endl;
        //function call to get hjacket size
        cout<<"Jacket size : "<< jacketsize(weight, height, age)<<endl;
        //function call to get waist size
        cout<<"Waist size : "<< waistsize(weight, age)<<endl;
        //funtion call after 10 years
        cout<<"Jacket Size after 10 years: "
        <<jacketsize(height, weight, age +10)<<endl;
        cout<<"Waist size after 10 years: "
        <<waistsize(weight, age + 10)<<endl;
        //Repeat
        cout<<"Do you want to repeat calculations?";
        cin>>choice;
    }
    while (choice == 'y' || choice == 'Y');
    
}

//define function

float hatsize(float weight, float height)
{
    return (weight / height)*2.9;
}
float jacketsize(float height, float weight, int age)
{
    float adjustment=0;
    //validate age and calculate adjustment
    if(age>30)
        adjustment=(((age-30)/10)+1)*(1/8);
    return height*weight+adjustment;
}
float wasitsize(float weight, int age)
{
    float adjustment=0;
    //validate age and calculate adjustment
    if(age>28)
        adjustment=(age-28+1)/2*(1/10);
    return (weight / 5.7) + adjustment;
}



