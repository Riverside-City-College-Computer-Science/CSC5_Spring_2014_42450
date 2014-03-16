/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on February 26, 2014, 9:40 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
// Variable declaration
    char letter, closeC;  
//Input request for letter
    cout<<"Welcome to C. Would you like to see a C?"<<endl;
    cout<<"Enter a character and see it as a C!!"<<endl;
    cin>>letter;
    cout<<letter<<letter<<letter<<letter<<endl;
    cout<<letter<<"  "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<"  "<<letter<<endl;
    cout<<letter<<letter<<letter<<letter<<endl;
    cout<<"See?"<<endl;
    //Attempt to demand a specific input
    cout<<"Press C to close C"<<endl;
    //I do not know how to prevent this loop from automatically starting.
    //How do I add a break?
    do {
        cin.get(closeC); 
        if (closeC!='C'&&closeC!='c');
        cout<<"Press C, cilly!"<<endl;
    }while (closeC!='C'&&closeC!='c');
    
//Exit Stage Right
    return 0;
}

