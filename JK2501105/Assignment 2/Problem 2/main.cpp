/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 16, 2014, 10:10 PM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{

    //Declare Variables
    double weightKillMouse, weightMouse,weightDiet,amount;
    char choice;
    do
    {
    //Weight of sweet
    cout<<"Enter weight of artificial sweetener that can kill a mouse:";
    cin>>weightKillMouse;
    //Weight of mouse
    cout<<"Enter weight of mouse:";
    cin>>weightMouse;
    cout<<"Enter minium weight to stop diet:";
    cin>>weightDiet;
    //Calculate
    amount=((weightKillMouse*weightDiet)/(weightMouse*.001));
    
    cout<<"Amount of soda that can be consumed without Diet:";
    cout<<amount<<endl;
    cout<<"Press 'y' to repeat calculations for different variables."<<endl;
    cout<<"Press any other key to exit. ";
    cin>>choice;
    }while(choice == 'y' || choice == 'Y');
    system("pause");
    
    
    return 0;
}

