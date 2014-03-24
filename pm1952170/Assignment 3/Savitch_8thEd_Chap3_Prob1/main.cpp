/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 22, 2014, 10:43 AM
 * Purpose: Grade a game of paper rock scissors
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char usr1, usr2;
    //Prompt users for inputs
    cout<<"User 1, Input Paper(P), Rock(R), or Scissors(S): ";
    cin>>usr1;
    cout<<"User 2, Input Paper(P), Rock(R), or Scissors(S): ";
    cin>>usr2;
    //if-else user 1 chooses rock
    if (usr1=='r'||usr1=='R')
    {
        if (usr2=='r'||usr2=='R')
            cout<<"Nobody wins."<<endl;
        if (usr2=='p'||usr2=='P')
            cout<<"Paper covers rock, user 2 wins."<<endl;
        if (usr2=='s'||usr2=='S')
            cout<<"Rock crushes scissors, user 1 wins."<<endl;
    }else cout<<endl;
    //if-else user 1 chooses paper
    if (usr1=='p'||usr1=='P')
    {
        if (usr2=='p'||usr2=='P')
            cout<<"Nobody wins."<<endl;
        if (usr2=='r'||usr2=='R')
            cout<<"Paper covers rock, user 1 wins."<<endl;
        if (usr2=='s'||usr2=='S')
            cout<<"Scissors cut paper, user 2 wins."<<endl;
    }else cout<<endl;
    //if-else user 1 chooses scissors
    if (usr1=='s'||usr1=='S')
    {
        if (usr2=='s'||usr2=='S')
            cout<<"Nobody wins."<<endl;
        if (usr2=='r'||usr2=='R')
            cout<<"Rock crushes scissors, user 2 wins."<<endl;
        if (usr2=='p'||usr2=='P')
            cout<<"Scissors cut paper, user 1 wins."<<endl;
    }else cout<<endl;
//Exit Stage Right
    return 0;
}

