/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9, 2014, 7:54 AM
 * Craps Game
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <ctime>//Time for random and program
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));\
    //Declare variables
    unsigned char sum,die1,die2,sum2;
    unsigned int win=0,win2=0,win3=0,win4=0,win5=0,win6=0,
       win7=0,win8=0,win9=0,win10=0,win11=0,win12=0;
    unsigned int loss=0,lose2=0,lose3=0,lose4=0,lose5=0,lose6=0,
       lose7=0,lose8=0,lose9=0,lose10=0,lose11=0,lose12=0;
    //Loop the dice throw
    unsigned int games=1000000;
    for(int roll=1;roll<=games;roll++){
        //Determine the sum
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
        }else if(sum==2||sum==3||sum==12){
            loss++;
            switch(sum){
                case 2:lose2++;break;
                case 3:lose3++;break;
                case 12:lose12++;break;
                default:cout<<"Better never get here!!!";
            }
        }else{
            bool cntLoop=true;
            do{
               //Roll the dice again
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
    //Output the results
    cout<<"Total Wins = "<<win<<" Total Losses = "<<loss<<endl;
    cout<<"Total 2 Wins = "<<win2<<" Total 2 Losses = "<<lose2<<endl;
    cout<<"Total 3 Wins = "<<win3<<" Total 3 Losses = "<<lose3<<endl;
    cout<<"Total 4 Wins = "<<win4<<" Total 4 Losses = "<<lose4<<endl;
    cout<<"Total 5 Wins = "<<win5<<" Total 5 Losses = "<<lose5<<endl;
    cout<<"Total 6 Wins = "<<win6<<" Total 6 Losses = "<<lose6<<endl;
    cout<<"Total 7 Wins = "<<win7<<" Total 7 Losses = "<<lose7<<endl;
    cout<<"Total 8 Wins = "<<win8<<" Total 8 Losses = "<<lose8<<endl;
    cout<<"Total 9 Wins = "<<win9<<" Total 9 Losses = "<<lose9<<endl;
    cout<<"Total 10 Wins = "<<win10<<" Total 10 Losses = "<<lose10<<endl;
    cout<<"Total 11 Wins = "<<win11<<" Total 11 Losses = "<<lose11<<endl;
    cout<<"Total 12 Wins = "<<win12<<" Total 12 Losses = "<<lose12<<endl;
    //Check to determine if all adds up
    int checkwin=win2+win3+win4+win5+win6+win7+
                 win8+win9+win10+win11+win12;
    int checkloss=lose2+lose3+lose4+lose5+lose6+lose7+
                 lose8+lose9+lose10+lose11+lose12;
    cout<<"Total Wins = "<<checkwin<<" Total Losses = "<<checkloss<<endl;
    cout<<"Total Games Played = "<<checkwin+checkloss<<endl;
    //Exit stage right!!
    return 0;
}