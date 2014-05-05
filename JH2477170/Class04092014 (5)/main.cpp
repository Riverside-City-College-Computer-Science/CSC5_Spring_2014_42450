/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on April 9, 2014, 9:40 AM
 * Craps
 */

//System Libraries
//take out if not needed
#include <cstdlib>//Random function srad
#include <iostream>//Standard input/ouput
#include <ctime>//time for random and program
using namespace std;

//Global Constants
//if no a global constant get an F

//Function Prototype

//Execution Start Here!!!
int main(int argc, char** argv) {
    //initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));\
    //declare variables
    unsigned char sum,die1,die2,sum2;
    unsigned int win=0,win2=0,win3=0,win4=0,win5=0,win6=0,win7=0,
            win8=0,win9=0,win10=0,win11=0,win12=0;
    unsigned int loss=0,loss2=0,loss3=0,loss4=0,loss5=0,loss6=0,loss7=0,
            loss8=0,loss9=0,loss10=0,loss11=0,loss12=0;
    //loop the dice throw
    unsigned int games=1000000;
    for(int roll=1;roll<=games;roll++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if (sum==7||sum==11){
            win++;
            switch (sum){
                case 7:win7++;break;
                case 11:win11++;break; 
                default:cout<<"Better never get here"<<endl;
        }
    }else if (sum==2||sum==3||sum==12){
            loss++;
            switch (sum){
                case 2:loss7++;break;
                case 3:loss3++;break;
                case 12:loss12++;break;
                default:cout<<"Better never get here"<<endl;
        }
    }else {
        bool cntLoop=true;
        do{
            //roll the dice again
            die1=rand()%6+1;
            die2=rand()%6+1;
            sum2=die1+die2;
            if(sum2==7){
                loss++;
                switch (sum){
                    case 4:loss4++;break;
                    case 5:loss5++;break;
                    case 6:loss6++;break;
                    case 8:loss8++;break;
                    case 9:loss9++;break;
                    case 10:loss10++;break;
                    default:cout<<"Better never get here"<<endl;
                }
                cntLoop=false;
            }else if(sum==sum2){
                win++;
                switch (sum){
                    case 4:win4++;break;
                    case 5:win5++;break;
                    case 6:win6++;break;
                    case 8:win8++;break;
                    case 9:win9++;break;
                    case 10:win10++;break;
                    default:cout<<"Better never get here"<<endl;
                }
                cntLoop=false;
            }
        }while(cntLoop);
      }
    }
    //output the result
    cout<<"Total Wins = "<<win<<" Total Losses = "<<loss<<endl;
    cout<<"Total 2 Wins "<<win<<" Total 2 Losses = "<<loss<<endl;
    cout<<"Total 3 Wins "<<win<<" Total 3 Losses = "<<loss<<endl;
    cout<<"Total 4 Wins "<<win<<" Total 4 Losses ="<<loss<<endl;
    cout<<"Total 5 Wins "<<win<<" Total 5 Losses = "<<loss<<endl;
    cout<<"Total 6 Wins "<<win<<" Total 6 Losses = "<<loss<<endl;
    cout<<"Total 7 Wins "<<win<<" Total 7 Losses = "<<loss<<endl;
    cout<<"Total 8 Wins "<<win<<" Total 8 Losses = "<<loss<<endl;
    cout<<"Total 9 Wins "<<win<<" Total 9 Losses = "<<loss<<endl;
    cout<<"Total 10 Wins "<<win<<" Total 10 Losses = "<<loss<<endl;
    cout<<"Total 11 Wins "<<win<<" Total 11 Losses = "<<loss<<endl;
    cout<<"Total 12 Wins  "<<win<<" Total 12 Losses = "<<loss<<endl;
    //Check to determine if all adds up
    int checkwin=win2+win3+win4+win5+win6+win7+
                 win8+win9+win10+win11+win12;
    int checkloss=loss2+loss3+loss4+loss5+loss6+loss7+
                  loss8+loss9+loss10+loss11+loss12;
    cout<<"Totals Wins = "<<checkwin<<" Total Losses = "<<checkloss<<endl;
    cout<<"Total Games Played = "<<checkwin+checkloss<<endl;

    //Exit Stage Right!!!
    
    return 0;
}