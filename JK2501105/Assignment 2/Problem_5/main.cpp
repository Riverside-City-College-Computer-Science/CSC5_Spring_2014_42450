/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 10:33 PM
 */

//System Libraries
#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
     
    //Declare Variables
    double interest, time, facevalue, amount;
    char choice;
    do
    {
      //Amount you want to receive
      cout<<"Enter the amount you want to receive:";
      cin>>amount;
      //Time for amount needed
      cout<<"Enter time for which amount is needed:";
      cin>>time;
      //Rate of interest on loan
      cout<<"Enter the rate of interest on loan in percent:";
      cin>>interest;
      //Calculating interest
      interest = interest/100;
      //Calculating fasce value
      facevalue = amount/ (1-time*interest);
      //Display face value
      cout<<"You must ask for a loan of: $."<<facevalue;
      //Display monthly instalments
      cout<<" Monthly instalments that you need to pay will be ";
      cout<<(facevalue/(time*12))<<endl;
      cout<<"If you want to repeat calculations press y";
      cin>> choice;
    }while (choice == 'y' || choice == 'Y');
      
        system("pause");
                
    return 0;
}

