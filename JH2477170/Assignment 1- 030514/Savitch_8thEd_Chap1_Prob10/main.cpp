/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 3, 2014, 7:50 AM
 */

//System Libraries
#include <iostream>

using namespace std;


//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char letter;
    
    //Prompt the user what character to use.
    cout<<"What character would you like to"<<endl;
    cout<<"Output a Big Letter C?"<<endl;
    cin>>letter;
    cout<<endl<<endl;
    
    //Output a Big C
    cout<<"   "<<letter<<" "<<letter<<" "<<letter<<endl;
    cout<<" "<<letter<<" "<<"    "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<" "<<letter<<" "<<"    "<<letter<<endl;
    cout<<"   "<<letter<<" "<<letter<<" "<<letter<<endl;
    
    //Exit Stage Right!
    return 0;
}

