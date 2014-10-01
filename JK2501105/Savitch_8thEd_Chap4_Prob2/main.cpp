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

//Function Prototype
#define LPG (3.785)
float MilesPerGallon(float milesf,float litersf)
{
    return (milesf*LPG/litersf);
}

int main(int argc, char** argv) {

    char choice;
    float fliters,fmiles,sliters,smiles,fmpg,smpg;
    do
    {
        //input miles of first car
        cout << "Enter miles traveled by the first car: ";
        cin >> fmiles;
        //input liters
        cout << "Enter in liters the gasoline consumed: ";
        cin >> fliters;
        //input miles of second car
        cout << "Enter miles traveled by second car: ";
        cin >> smiles;
        //input miles of second car
        cout << "Enter in liters the gasoline consumed: ";
        cin >> sliters;
        
        if (fliters == 0 || sliters == 0)
            cout << "\n Invalid input";
        else
        {
            fmpg = MilesPerGallon (fmiles,fliters);
            smpg = MilesPerGallon (smiles,sliters);
            //Display MPG
            cout <<"Miles per Gallon "<<fmpg<<endl;
            cout <<"Miles per Gallon "<<smpg<<endl;
        }
        if(fmpg == smpg)
        {
            cout<< " Both cars are best"<<endl;
        }
        else if (fmpg > smpg)
        {
            cout<< "First car is best"<<endl;
        }
        else
            cout<< "Second car is best"<<endl;
        
        cout << "Do you want to repeat the calculation?"<<endl;
        cout << "Y / N"<<endl;
        cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
   
}
