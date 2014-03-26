/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 16, 2014, 6:41 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int num;
    string instNM, yorNM, food, adj, colr, anim;
    
    //Input answer to questions.
    cout<<"Type the name of your instructor."<<endl;
    cin>>instNM;
    cout<<endl;
    cout<<"Now type your name."<<endl;
    cin>>yorNM;
    cout<<endl;
    cout<<"Next type a name of a fruit."<<endl;
    cin>>food;
    cout<<endl;
    cout<<"Type a number between 100 and 120."<<endl;
    cin>>num;
    cout<<endl;
    cout<<"Here type name of a color."<<endl;
    cin>>colr;
    cout<<endl;
    cout<<"Finally type the name of an animal."<<endl;
    cin>>anim;
    
    //Output Story.
    cout<<"Dear Instructor"<<instNM<<","<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. "<<endl;
    cout<<"First, I ate a rotten "<<food<<", which made me "<<colr<<"";
    cout<<" and extremely ill."<<endl;
    cout<<"I came down with a fever of "<<num<<". Next my"<<adj<<" pet"<<endl;
    cout<<""<<anim<<" must have smelled the remains of the "<<food<<"";
    cout<<" on my homework"<<endl;
    cout<<"because he ate it. I am currently rewriting my ";
    cout<<"homework an hope you"<<endl;
    cout<<"will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<yorNM<<" ;)";
    
    //Exit Stage Right!
    return 0;
}

