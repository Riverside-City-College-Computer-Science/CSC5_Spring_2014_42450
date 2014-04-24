/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 23, 2014, 9:08 AM
 * Purpose: OUtput bars made of *'s = to how many user wants (max 5)
 */

#include <cstdlib>
#include <iostream>
#include <istream>
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //declare variables
    char nInput;
    unsigned int n[5],cnt=0;
    //ask user for how many nInputbers they want to input
    cout<<"Hello."<<endl
        <<"How many numbers (max 5) do you want to input? ";
    cin>>nInput;
    //checks if the char is within the range 1 to 5
    while(nInput!='1'&&
          nInput!='2'&&
          nInput!='3'&&
          nInput!='4'&&
          nInput!='5'){
        cout<<"Enter a valid NUMBER from 1 to 5: ";
        //PROBLEM: if input begins with 1,2,3,4,5(i.e. 30)///////////////////
        //continues as if valid input...
        nInput=cin.get();
        //cin.getline(nInput,256);
        cin.ignore(256,'\n');
    }
    //convert char nInput into valid int totNum variable
    unsigned int totNum=nInput-'0';
    //make a loop based on number of inputs.
    for(int i=0;i<totNum;i++){
        cout<<"Enter number "<<i+1<<" (between 3 and 27): ";
        cin>>n[i];
        //make sure number is within range given
        while(n[i]<3||n[i]>27){
            cout<<"Error! Choose a number from 3 to 27: ";
            cin>>n[i];
        }
    }
    //output bar of *'s
    cout<<endl;
    while(cnt<totNum){//loop for each input given by user
        for(int j=0;j<n[cnt];j++){//loop until j equals number at n[cnt],
            cout<<"*";            //Printing *'s = to user's numbers
        }
        cout<<endl;
        cnt++;
    }
    //Exit stage right!!
    return 0;
}
