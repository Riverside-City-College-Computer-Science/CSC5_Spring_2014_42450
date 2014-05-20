/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on April 21, 2014, 10:20 AM
 * Purpose: Output a diagonal of *'s 
 */
#include <iostream>
//#include <cstdlib>
//#include <cstring>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables
    int row=0,col,numLine;
    col=row;//begin with col=row
    //ask user how many numbers they want to go
    cout<<"How many lines do you want to display? ";
    cin>>numLine;
    //loop for as many the user specifies
    for(int row=0;row<numLine;row++){//rows
        cout<<row+1;
        cout<<endl;
        for(int col=0;col<=row;col++){//columns
            cout<<" ";
        }
    }
    //Exit Stage Right!!
    return 0;
}

