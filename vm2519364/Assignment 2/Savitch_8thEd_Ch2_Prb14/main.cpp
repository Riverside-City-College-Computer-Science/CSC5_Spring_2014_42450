/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 8, 2014, 8:35 PM
 * Purpose: Create a Mad Lib Program
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

    int number;
    string instNm, yorNm, food, adjctv, color, animal;
    
    
    //Input Information for Mad Lib Game
    cout<<"Fill out the following.\n";
    cout<<"Your instructor's first or last name: ";
    cin>>instNm;
    cout<<"\n";
    cout<<"Your name: ";
    cin>>yorNm;
    cout<<"\n";
    cout<<"Fruit or Vegetable: ";
    cin>>food;
    cout<<"\n";
    cout<<"A number between 100 and 120: ";
    cin>>number;
    cout<<"\n";
    cout<<"An adjective: ";
    cin>>adjctv;
    cout<<"\n";
    cout<<"A color: ";
    cin>>color;
    cout<<"\n";
    cout<<"Finally, an animal: ";
    cin>>animal;
    cout<<"\n";
     cout<<"\n"; 
      
    
    //Output Letter
    cout<<"Dear Instructor ";
    cout<<instNm;
    cout<<",\n";
    cout<<"\n";
    
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n";
    cout<<"First I ate a rotten ";
    cout<<food;
    cout<<", which made me turn ";
    cout<<color;
    cout<<" and extremely ill. \n";
    cout<<"I came down with a fever of ";
    cout<<number;
    cout<<". Next, my ";
    cout<<adjctv;
    cout<<" pet ";
    cout<<animal;
    cout<<" must have smelled \n";
    cout<<"the remains of the ";
    cout<<food;
    cout<<" on my homework, because he ate it. I am currently \n";
    cout<<"rewriting my ";
    cout<<"homework and hope you will accept it late.";
    cout<<"\n";
    cout<<"\n";
    cout<<"Sincerely,";
    cout<<"\n";
    cout<<yorNm;
    cout<<"\n";        
            
    
//Exit Stage Right    
    return 0;
}

