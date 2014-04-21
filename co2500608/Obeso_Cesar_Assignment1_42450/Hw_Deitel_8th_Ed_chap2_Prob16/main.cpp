/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 4, 2014, 7:09 AM
 * Deitel 8th Ed Chapter 2 Prob 2.16
 * program obtains 2 numbers from the user
 * and prints the sum, product, difference,
 * and quotient of the 2 numbers.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
    
    int number1, number2, sum, product, difference, quotient;
    
    cout<<"Enter 2 numbers"<<endl;
    cin>>number1>>number2;
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    cout<<"sum of number1 and number2 is"<<" "<<sum <<endl;
    cout<<"difference of number1 and number2 is"<<" "<<difference<<endl;
    cout<<"product of number1 and number2 is"<<" "<<product<<endl;
    cout<<"quotient of number1 and number2 is"<<" "<<quotient<<endl;

    //Exit
    return 0;
}

