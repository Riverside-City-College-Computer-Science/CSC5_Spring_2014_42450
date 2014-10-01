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
float max(float n1, float n2, float n3);
float max(float n1, float n2);

int main(int argc, const char * argv[])
{
    //Define Variables
    float num1, num2, num3;
    
    //input values
    cout<<"Enter number ";
    cin>>num1;
    cout<<"Enter number ";
    cin>>num2;
    cout<<"Enter number ";
    cin>>num3;
    //function call to get maximum of two num1 and num3
    cout<<"Maximum of num1 nad num3: "<<max(num1,num3)<<endl;
    //function call to get maximum of two num2 and num3
    cout<<"Maximum of num2 and num3: "<<max(num2,num3)<<endl;
    //function call to get maximum of three num1 num2 and num3
    cout<<"Maximum of num1, num2, num3: "<<max(num1, num2, num3)<<endl;
}

//Define Functions

float max(float n1, float n2, float n3)
{
    if(n1>n2)
    {
        if (n1>n3)
            return n1;
        else
            return n3;
        
    }
    else
    {
        if(n2>n3)
            return n2;
        else
            return n3;
    }
}
float max(float n1, float n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}
    







