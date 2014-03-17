/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 11:21 PM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{

    //Declare Variables
    int hours, dependents;
    double grosspay;
    char choice;
    do
    {
        //Input number of hours
        cout<<"Enter hours worked per week";
        cin>>hours;
        //Input number of dependants
        cout<<"Enter number of dependants";
        cin>>dependents;
        //Calculate
        cout<<"Workers gross pay: ";
        grosspay = hours>40?((40*16.78)+(hours-40)*(16.78*1.5)): (hours*16.78);
        //grosspay
        cout<<grosspay<<endl;
        cout<<"Amount withheld for Social security tax = "<<(.06* grosspay)<<endl;
        cout<<"Amount withheld for federal income tax = "<<(.14* grosspay)<<endl;
        cout<<"Amount withheld for state income tax = "<<(.05* grosspay)<<endl;
        if(dependents >=3)
        {
            cout<<"Amount withheld for insurance cost 35$";
            grosspay -= 35;
           
        }
        cout<<"Take home pay of employee is ";
        cout<<(grosspay*(1-0.06 - 0.05-0.14)-10)<<endl;
        cout<<"To repeat the calculation press 'y";
        cin>>choice;
               
    }    
    while(choice == 'y' || choice == 'Y');
    
    system("pause");
   
    return 0;
}

