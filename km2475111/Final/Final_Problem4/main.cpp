/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 6, 2014, 9:33 PM
 * Purpose: CSC5 Final
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize rand
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    const int n=5,ntimes=10000;
    int freq[n]={0};
    short int rndseq[]={9,51,78,181,208};
    unsigned char roll;
    unsigned int loop=10000;
    //loop
    for(int toss=1;toss<loop;toss++){
        //determine sum
        roll=rand()%5;//gives 0-4
        switch(roll){
            case 0:freq[roll]++;break;
            case 1:freq[roll]++;break;
            case 2:freq[roll]++;break;
            case 3:freq[roll]++;break;
            case 4:freq[roll]++;break;
            default:cout<<"Never get here!!!"<<endl;
        }
    }
    cout<<"9 was thrown "<<freq[0]<<" times."<<endl;
    cout<<"51 was thrown "<<freq[1]<<" times."<<endl;
    cout<<"78 was thrown "<<freq[2]<<" times."<<endl;
    cout<<"181 was thrown "<<freq[3]<<" times."<<endl;
    cout<<"208 was thrown "<<freq[4]<<" times."<<endl;
    return 0;
}

