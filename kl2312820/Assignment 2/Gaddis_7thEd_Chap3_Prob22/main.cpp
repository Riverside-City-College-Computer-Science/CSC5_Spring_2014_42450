/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 3:09 PM
 * Purpose: To create a Word Game
 */
//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char name[50],city[50],age[3],college[60],prof[30];
    char animal[25],petnam[25];
    //Input the user's information
    cout<<"Input your name, city, age, college attended ";
    cout<<"profession, an animal, and it's name. "<<endl;
    cout<<"Name:";
    cin.getline (name,50);
    cout<<"City:";
    cin.getline (city,50);
    cout<<"Age:";
    cin.getline (age,3);
    cout<<"College Attended:";
    cin.getline (college,60);
    cout<<"Profession:";
    cin.getline (prof,30);
    cout<<"Animal:";
    cin.getline (animal,25);
    cout<<"Pets Name:";
    cin.getline (petnam,25);
    //Output the story using the information
    cout<<"There once was a person named "<<name<<" who lived in ";
    cout<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at ";
    cout<<college<<". "<<endl;
    cout<<name<<" graduated and went to work as a "<<prof<<"."<<endl;
    cout<<"Then, "<<name<<" adopted a "<<animal<<" named "<<petnam<<". "<<endl;
    cout<<"They both lived happily ever after! "<<endl;
    //Exit Stage Right!
    return 0;
}

