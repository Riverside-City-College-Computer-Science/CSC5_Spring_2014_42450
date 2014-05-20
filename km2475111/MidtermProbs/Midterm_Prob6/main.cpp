/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 24, 2014, 11:26 AM
 * Purpose: To find 1475'th ugly number
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
unsigned int min(unsigned int, unsigned int, unsigned int);
unsigned int getUgly(unsigned int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int x=1475;
    unsigned int uglyNum = getUgly(x);//call function to calculate ugly number
    //Display message
    cout<<"The 1475'th ugly number is "<<uglyNum<<"."<<endl;
    //Exit Stage Right!!
    return 0;
}
//Function to find minimum of 3 numbers
unsigned min(unsigned num1, unsigned num2, unsigned num3)
{
    if(num1 <= num2)
    {
      if(num1 <= num3)
        return num1;
      else
        return num3;
    }
    if(num2 <= num3)
      return num2;
    else
      return num3;
}
//Function to get the nth ugly number
unsigned int getUgly(unsigned int num)
{
    //create array to store numbers and initialize first spot to 1
    unsigned int *ugly =
             (unsigned int *)(malloc(sizeof(unsigned int)*num));
    unsigned int i2 = 0, i3 = 0, i5 = 0;
    unsigned int i;
    //initialize divisibility parameters
    unsigned int div2=2;
    unsigned int div3=3;
    unsigned int div5=5;
    unsigned int nUgNum=1;
    *(ugly+0) = 1;
    //loop until 1475 is found
    for(i=1; i<num; i++)
    {
       nUgNum = min(div2,div3,div5);
       *(ugly+i) = nUgNum;                    
       if(nUgNum == div2)
       {
           i2 = i2+1;       
           div2 = *(ugly+i2)*2;
       }
       if(nUgNum == div3)
       {
           i3 = i3+1;
           div3 = *(ugly+i3)*3;
       }
       if(nUgNum == div5)
       {
           i5 = i5+1;
           div5 = *(ugly+i5)*5;
       }
    }//end of loop
    return nUgNum;
}