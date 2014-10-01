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
float G = 6.673E-8;

//Function Prototype
float Gravity(float m1, float m2, float d);

int main(int argc, const char * argv[])
{

    float m1, m2, d, gravityF;
    char choice;
    do
    {
        //input mass of body 1
        cout<<"Enter mass of first body: ";
        cin>>m1;
        //input mass of body 2
        cout<<"Enter mass of second body: ";
        cin>>m2;
        //input distance b/w bodies
        cout<<"Enter distance between two bodies: ";
        cin>>d;
        //function call to calculate gravity force
        gravityF = Gravity(m1, m2, d);
        //output data
        cout<<"Gravitational force between two bodies is: "<<gravityF;
        //Repeat
        cout<<"Do you want to repeat calculations?";
        cin>>choice;
    }
    while (choice == 'y' || choice == 'Y');
    
}

//define function

float Gravity(float m1, float m2, float d)
{
    return (G * m1 * m2)/(d * d);
}

