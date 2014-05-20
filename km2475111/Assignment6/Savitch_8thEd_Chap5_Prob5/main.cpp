/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 10:07 AM
 * Purpose: calculating change
 */

//system libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void compute_coins(int,int &,int &);
void print(int,int,int,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    const int QUARTER=25;
    const int DIME=10;
    const int PENNIES=1;
    bool cntLoop=true;
    int choice,amnt,newAmnt,totQtr,totDim,totPen;
    do{
        //ask for change total (1 to 99)
        cout<<"Enter amount of change (1 to 99 cents): ";
        cin>>amnt;
        while(amnt<1||amnt>99){
            cout<<"Enter amount of change between 0 & 99: ";
            cin>>amnt;
        }
        newAmnt=amnt;
        //calculate
        compute_coins(QUARTER,totQtr,newAmnt);
        compute_coins(DIME,totDim,newAmnt);
        compute_coins(PENNIES,totPen,newAmnt);
        //print
        print(totQtr,totDim,totPen,amnt);
        //ask to loop
        cout<<endl<<"To try again, press 1."<<endl
            <<"To quit, press any other key."<<endl;
        cin>>choice;
        switch(choice){
            case 1:{break;}
            default:{
                cntLoop=false;
                cout<<"Good-bye."<<endl;
            }
        }
    }while(cntLoop);
    //Exit Stage Right!!
    return 0;
}
void compute_coins(int coin_value,int &number,int &amount_left){
    number=amount_left/coin_value;
    amount_left-=(coin_value*number);
}
void print(int quarters,int dimes,int pennies,int amnt){
    cout<<amnt<<" cents can be given as"<<endl
        <<quarters<<" quarter(s) "<<dimes
        <<" dime(s) "<<pennies<<" penny(pennies)"<<endl;
}