/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450
 *
 * Created on March 15, 2014, 8:01 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Global Constants
//Function Prototypes
//Execution Begins here
int main(int argc, char** argv) {
//Variables   
    string instr, name, food, num, adject, color, animal;
//IO   
    cout<<"Please enter the first or last name of your instructor"<<endl;
    cin>>instr;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter a number between 100 and 120"<<endl;
    cin>>num;
    cout<<"Enter an adjective"<<endl;
    cin>>adject;
    cout<<"Enter a food"<<endl;
    cin>>food;
    cout<<"Enter a color"<<endl;
    cin>>color;
    cout<<"Enter an animal"<<endl;
    cin>>animal;
//Story
//???? How do I format this? When I setw, it does not include variables.
    cout<<"My "<<adject<<" "<<animal<<" used "<<num<<" pounds of";
    cout<<" force to turn Dr. "<<instr<<endl;
    cout<<"into something that resembled "<<food<<"!!!";
    cout<<"This left me, "<<name<<", feeling "<<color<<"!!!"<<endl;
//Exit stage right
            return 0;
}

