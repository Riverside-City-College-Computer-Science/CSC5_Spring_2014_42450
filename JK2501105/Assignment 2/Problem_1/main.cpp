/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 6:07 PM
 */

//System Libraries
#include <iostream>

using namespace std;

#define Metricton 35273.92



int main(int argc, char** argv) 
{

    //Declare Variables
     
    double ounceses, weight, boxes;
    char choice;
    do
    {
    //Input the weight of the package
    cout<<"Enter weight of package in ounces "<<endl;
    cin>>ounceses;
    //Calculate the weight
    weight = ounceses/Metricton;
    
    cout<<"Weight of package in metric tons is ";
    cout<< weight<<endl;
  
    boxes = (Metricton/ounceses);
            
    cout<<"Number of boxes to make metric ";
    cout<< boxes<<endl;
    cout<<"Press Y or y key to continue"<<endl;
    cin>> choice;
    
}while (choice == 'y' || choice == 'Y' );
    
    system("pause");
    return 0;
}

