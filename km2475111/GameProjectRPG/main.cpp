/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 9, 2014, 7:58 AM
 * RPG game
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize rand
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    char plyrNme[],clssTyp[];
    unsigned short choice,atk,def,hp,spd;
    //ask user for name and class choice
    cout<<"Hello player! What is your name? ";
    cin>>plyrNme;
    //offer list of four classes to play
    cout<<"Okay "<<plyrNme<<", please pick a class type!"<<endl
        <<"1. Knight"<<endl
        <<"2. Wizard" <<endl
        <<"3. Gladiator"<<endl
        <<"4. Rogue"<<endl;
    cin>>choice;
    //operate menu for player class stats
    switch(choice){
        case 1:{
            //Knight
            clssTyp='Knight';
            cout<<"You chose "<<clssTyp<<"!"<<endl;
            //generate stats
            atk=rand()%15+1;
        }
        case 2:{
            //Wizard
            clssTyp='Wizard';
            cout<<"You chose "<<clssTyp<<"!"<<endl;
        }
        case 3:{
            //Gladiator
            clssTyp='Gladiator';
            cout<<"You chose "<<clssTyp<<"!"<<endl;
        }
        case 4:{
            //Rogue
            clssTyp='Rogue';
            cout<<"You chose "<<clssTyp<<"!"<<endl;
        }
    }
            
    //exit stage right!
    return 0;
}

