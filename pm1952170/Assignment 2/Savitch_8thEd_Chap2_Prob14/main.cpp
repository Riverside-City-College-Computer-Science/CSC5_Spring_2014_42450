/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 12:59 PM
 * Write a program that plays a game of madlib.
 */
//System Libraries
#include <iostream>
#include <string>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare strings
    string ins_name, usr_name, food, num, adj, colr, anml;
    //Prompt user for inputs
    cout<<"Enter the first or last name of your instructor. ";
    cin>>ins_name;
    cout<<"Enter your name. ";
    cin>>usr_name;
    cout<<"Enter a food. ";
    cin>>food;
    cout<<"Enter a number between 100 and 120. ";
    cin>>num;
    cout<<"Enter an adjective. ";
    cin>>adj;
    cout<<"Enter a color. ";
    cin>>colr;
    cout<<"Enter an animal. ";
    cin>>anml;
    cout<<endl;
    //Plug strings into Paragraph.
    cout<<"Dear Instructor "<<ins_name<<","<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. "
            "First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<colr<<" and "
            "extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<num<<". Next, my "<<adj<<" pet "<<endl;
    cout<<anml<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<usr_name<<endl;     
    //Exit Stage Right       
    
    return 0;
}

