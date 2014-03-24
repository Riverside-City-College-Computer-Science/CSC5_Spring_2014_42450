/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 4, 2014, 8:31 AM
 * Purpose: Big C and character
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    char letter='Z';
    //Prompt user what character to use
    cout<<"What character would you like to use"<<endl;
    cout<<"Output a big letter C?"<<endl;
    cin>>letter;
    //Output a big C
    cout<<"  "<<letter<<letter<<letter<<endl;
    cout<<" "<<letter<<"  "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<" "<<letter<<"  "<<letter<<endl;
    cout<<"  "<<letter<<letter<<letter<<endl;
    //Exit Stage Right
    return 0;
}
