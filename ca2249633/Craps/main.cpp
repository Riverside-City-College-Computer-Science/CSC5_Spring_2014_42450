/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 9, 2014, 7:55 AM
 * Craps game
 */

//System Libraries
#include <cstdlib>//srand
#include <iostream>//standard input ouput
#include <ctime>//time for random and program
using namespace std;

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    unsigned char sum,die1,die2,sum2;
    unsigned int win=0,win2=0,win3=0,win4=0,win5=0,win6=0,
            win7=0,win8=0,win9=0,win10=0,win11=0,win12=0;
    unsigned int loss=0,lose2=0,lose3=0,lose4=0,lose5=0,lose6=0,
            lose7=0,lose8=0,lose9=0,lose10=0,lose11=0,lose12=0;
    //loop the dice throw
    unsigned int games=1000000;
    for(int roll=1;roll<=games;roll++){
        //determine the sum
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if(sum==7||sum==11){
            win++;
            switch(sum){                
                case 7:win7++;break;                
                case 11:win11++;break;
                default:cout<<"Better never get here!!!";
            }
        }
        else if(sum==2||sum==3||sum==12){
            loss++;
            switch(sum){
                case 2:lose2++;break;
                case 3:lose3++;break;
                case 12:lose12++;break;
            }
        }else{
            bool cntLoop=true;
            do{
                //roll the dice again
                die1=rand()%6+1;
                die2=rand()%6+1;
                sum2=die1+die2;
                if(sum2==7){
                    loss++;
                    switch(sum){
                        case 4:lose4++;break;
                        case 5:lose5++;break;
                        case 6:lose6++;break;                    
                        case 8:lose8++;break;
                        case 9:lose9++;break;
                        case 10:lose10++;break;
                        default:cout<<"Better never get here!!!";
                    }
                    cntLoop=false;
                }else if(sum==sum2){
                    win++;
                    switch(sum){
                        case 4:win4++;break;
                        case 5:win5++;break;
                        case 6:win6++;break;                    
                        case 8:win8++;break;
                        case 9:win9++;break;
                        case 10:win10++;break;
                        default:cout<<"Better never get here!!!";
                    }
                    cntLoop=false;
                }  
            }while(cntLoop);
        }
    }
    //output the result
    cout<<"Total wins = "<<win<<" Total losses = "<<loss<<endl;
    cout<<"Total 2 wins = "<<win2<<" Total 2 losses = "<<lose2<<endl;
    cout<<"Total 3 wins = "<<win3<<" Total 3 losses = "<<lose3<<endl;
    cout<<"Total 4 wins = "<<win4<<" Total 4 losses = "<<lose2<<endl;
    cout<<"Total 5 wins = "<<win5<<" Total 5 losses = "<<lose2<<endl;
    cout<<"Total 6 wins = "<<win6<<" Total 6 losses = "<<lose2<<endl;
    cout<<"Total 7 wins = "<<win7<<" Total 7 losses = "<<lose2<<endl;
    cout<<"Total 8 wins = "<<win8<<" Total 8 losses = "<<lose2<<endl;
    cout<<"Total 9 wins = "<<win9<<" Total 9 losses = "<<lose2<<endl;
    cout<<"Total 10 wins = "<<win10<<" Total 10 losses = "<<lose2<<endl;
    cout<<"Total 11 wins = "<<win11<<" Total 11 losses = "<<lose2<<endl;
    cout<<"Total 12 wins = "<<win12<<" Total 12 losses = "<<lose2<<endl;
    //check to see i it all adds up
    int checkwin=win2+win3+win4+win5+win6+win7+
                win8+win9+win10+win11+win12;
    int checkloss=lose2+lose3+lose4+lose5+lose6+lose7+
                lose8+lose9+lose10+lose11+lose12;
    cout<<"Total Wins = "<<checkwin<<" Total Losses = "<<checkloss<<endl;
    cout<<"Total Games Played = "<<checkwin+checkloss<<endl;
    //Exit stage right!!

    return 0;
}