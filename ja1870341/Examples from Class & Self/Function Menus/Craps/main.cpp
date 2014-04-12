/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 9, 2014, 8:02 AM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//Globals
//Functions
//Execution
int main(int argc, char** argv) {
    //random #
    srand(static_cast<unsigned int>(time(0)));
    //variables
    //dice
    unsigned char sum,sum2,die1,die2;
    //Keep track of rolls (initialize to zero if we want to count)
    unsigned int win2=0,win3=0,win4=0,win5=0,win6=0,win7=0,win8=0,win9=0,
            win10=0,win11=0,win12=0, win=0, lose=0;
    unsigned int lose2=0,lose3=0,lose4=0,lose5=0,lose6=0,lose7=0,lose8=0,lose9=0,
            lose10=0,lose11=0,lose12=0;
    //# of loops
    unsigned int games=1000000;
    //Calculations
    for(int roll=1;roll<=games;roll++){
        //Determine the sum
        //%6+1 because %6 is 0-6 (total of 7)
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if(sum==7||sum==11) {
            win++;
                switch(sum){
                        case 7:win2++;break;
                        case 11:win3++;break;\
                        default:cout<<"Better never get here"<<endl;
                }
        }
        else if(sum==2||sum==3||sum==12){
            lose++;
            switch(sum){
                case 2:lose2++;break;
                case 3:lose3++;break;
                case 12:lose12++;break;
                default:cout<<"Better never get here";        
            }
        }
        else {
            bool cntLoop=true;
            do {
        //Roll the dice
        //%6+1 because %6 is 0-6 (total of 7)
                die1=rand()%6+1;
                die2=rand()%6+1;
                sum2=die1+die2;
                if(sum==7){
                        lose++;
                        switch(sum){
                                case 4:lose4++;break;
                                case 5:lose5++;break;
                                case 6:lose6++;break;
                                case 8:lose8++;break;
                                case 9:lose9++;break;
                                case 10:lose10++;break;
                                //A check that you should never reach
                                default:cout<<"Better never get here"<<endl;
                        }
                         cntLoop=false;   
                }
                else if (sum==sum2) {
                    win++;
                    switch(sum){
                                case 4:win4++;break;
                                case 5:win5++;break;
                                case 6:win6++;break;
                                case 8:win8++;break;
                                case 9:win9++;break;
                                case 10:win10++;break;
                                default:cout<<"Dont get here";
                   }
                    cntLoop=false;
                }

            }while(cntLoop);
        }
    }
    
    cout<<"Total wins = "<<win<<" Total Losses = "<<lose<<"!"<<endl;
    cout<<"Total 2 wins = "<<win2<<" Total Losses = "<<lose2<<"!"<<endl;
    cout<<"Total 3 wins = "<<win3<<" Total Losses = "<<lose3<<"!"<<endl;
    cout<<"Total 4 wins = "<<win4<<" Total Losses = "<<lose4<<"!"<<endl;
    cout<<"Total 5 wins = "<<win5<<" Total Losses = "<<lose5<<"!"<<endl;
    cout<<"Total 6 wins = "<<win6<<" Total Losses = "<<lose6<<"!"<<endl;
    cout<<"Total 7 wins = "<<win7<<" Total Losses = "<<lose7<<"!"<<endl;
    cout<<"Total 8 wins = "<<win8<<" Total Losses = "<<lose8<<"!"<<endl;
    cout<<"Total 9 wins = "<<win9<<" Total Losses = "<<lose9<<"!"<<endl;
    cout<<"Total 10 wins = "<<win10<<" Total Losses = "<<lose10<<"!"<<endl;
    cout<<"Total 11 wins = "<<win11<<" Total Losses = "<<lose11<<"!"<<endl;
    cout<<"Total 12 wins = "<<win12<<" Total Losses = "<<lose12<<"!"<<endl;
    //Check to determine if all adds up
    int checkwin=win2+win3+win4+win5+win6+win7+win8+win9+win10+win11+win12;
    //Check losses
    int checklose=lose2+lose3+lose4+lose5+lose6+lose7+lose8+
    lose9+lose10+lose11+lose12;
    //Total games
    cout<<"Total wins = "<<checkwin<<" Total losses = "<<checklose<<"!"<<endl;
    cout<<"Total games played = "<<checkwin+checklose;        
    
    return 0;
    
}

