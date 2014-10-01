/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on June 4, 2014, 6:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constant
float const LTs = 0.264172;

//Function Prototype
float mpg(int miles, int liters);

int main(int argc, char** argv) {

    char choice;
    int liters, miles;
    do
    {
        //input liters
        cout << "Enter the number of liters of gasoline: ";
        cin >> liters;
        //input miles
        cout << "Enter the number of miles traveled by the car: ";
        cin >> miles;
        //funtion call and output
        cout << "The number of miles per gallon is "<< mpg(miles, liters)<<endl;
        //input choice
        cout << "Do you want to repeat the calculation?"<<endl;
        cout << "Y / N"<<endl;
        cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
    
 
    return 0;
}
float mpg(int miles, int liters)
{
float gallons;
gallons = LTs * liters;
return (miles/gallons);
}