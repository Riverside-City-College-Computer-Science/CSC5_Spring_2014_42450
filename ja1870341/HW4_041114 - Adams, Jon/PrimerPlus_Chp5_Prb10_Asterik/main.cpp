/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 11:15 PM
 */
//System libraries
#include <iostream>

using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    int rows=0, count=1;
    cout<<"Enter the number of rows you want to see"<<endl;
    cin>>rows;
    //Loops for calculation
    for(int i=0;i<rows;i++)
    {
        //Display . diminishing
        for(int d=0;d<(rows-count);d++)
            cout<<".";
        //Display * progressing
        for(int a=0;a<count;a++)
            cout<<"*";
        cout<<endl;
        count++;
    }
    //Exit Stage Right
    return 0;
}

