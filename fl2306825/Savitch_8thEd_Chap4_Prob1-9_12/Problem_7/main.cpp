/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 8, 2014, 9:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float G = 6.73e-8;

//Function prototype
float f(float m1_par, float m2_par, float dist_par);

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare Variables
    float m1, m2, dist, dyne;
    char ans;
    
    do{
    //Inputting
    cout << "Hello, please input the first mass in grams\n";
    cin >> m1;
    cout << "Input second mass in grams\n";
    cin >> m2;
    cout << "Enter the distance between the two\n";
    cin >> dist;
    
    //Calculations
    dyne = f(m1, m2, dist);
    
    //Outputting
    cout << "The gravitational force between the two are " << dyne << endl;
    cout << "Would you like to try again?\nY = Yes\nN = No";
    cin >> ans;
            
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye";
    return 0;
}

float f(float m1_par, float m2_par, float dist_par)
{
    return (G * m1_par * m2_par)/(dist_par * dist_par);
}

