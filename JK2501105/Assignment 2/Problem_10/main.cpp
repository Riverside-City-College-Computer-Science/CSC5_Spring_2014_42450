/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 17, 2014, 12:34 AM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
double sumpos=0,sumneg=0,sumTotal=0,num;
//Input number
cout<<" Enter number: "<<endl;
for(int i=0;i<10;i++)
{
cin>>num;
sumTotal +=num;
if(num>0)
    //validate negative
sumpos += num;
else
sumneg += num;
}
//Display sum of all positive numbers
cout<<"Sum of all positive numbers : "<<sumpos<<endl;
//Display sum of all negative numbers
cout<<"Sum of all negative numbers : "<<sumneg<<endl;
//Display total sum of numbers
cout<<"Sum of all numbers : "<<sumTotal<<endl;

system("pause");
//End main function
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

