/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 8, 2014, 4:52 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    const float lit = 0.264179;
    float miles1, miles2, cons1, cons2, mpg1, mpg2;
    char ans;
    
    do{
    //Outputting for both cars
    cout << "Please insert the miles you traveled in your first car.\n";
    cin >> miles1;
    cout << "Now insert the number of liters of gasoline consumed\n";
    cin >> cons1;
    cout << "Insert the second cars miles you traveled\n";
    cin >> miles2;
    cout << "Finally, the liters of gasoline consumed on the second car\n";
    cin >> cons2;
            
    //Calculating the first car
    cons1 = (cons1 * lit);
    mpg1 = miles1 / cons1;
    
    //Calculating the second car
    cons2 = (cons2 * lit);
    mpg2 = miles2 / cons2;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting answer
    cout << "The first car consumed at least " << mpg1 << 
            " miles per gallon. The second car consumed at least " << mpg2
            << " miles per gallon";
    
    //If-else statement
    if(mpg1 > mpg2)//For car 1
    {
        cout << " The best choice to travel is with the first car.";
    }
    else if(mpg1 < mpg2)//For car 2
    {
        cout << " The best choice to travel is with the second car.";
    }
    else//If the same
    {
        cout << " Their both the same!";
    }
    
    cout << " Would you like to try again?\nY = yes\nN = No\n";
    cin >> ans;
   
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    

    return 0;
}


