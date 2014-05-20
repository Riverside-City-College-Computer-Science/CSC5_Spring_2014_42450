/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 23, 2014, 5:53 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    bool redo=true,loopMnu=true;
    float ovrDrft=12.50;
    char ans;
    unsigned short accNum[6],balance,tCheck=0,tDepost=0,choice,
                   withdrw,deposit,numChck=0,numDpst=0;
    float balRem;
    //ask user for 6-digit account number - loop until user says not to
    do{
        cout<<"Please enter you 6-digit account number."<<endl;
        for(short i=0;i<6;i++){
            cout<<"Enter digit "<<i+1<<": ";
            cin>>accNum[i];
            while(accNum[i]>9||accNum[i]<0){
                cout<<"Error. Enter a valid digit: ";
                cin>>accNum[i];
            }
        }
        cout<<endl;
        //checks with user if correct
        cout<<"Is the account number "
            <<accNum[0]<<accNum[1]<<accNum[2]
            <<accNum[3]<<accNum[4]<<accNum[5]
            <<" correct?"<<endl;
        //ask to input again if user wishes to
        cout<<"If you would like try again, press 1."<<endl
            <<"Otherwise, press 2 to continue. ";
        cin>>ans;
        while(ans!='1'&&ans!='2'){
            cout<<"Error! Try again."<<endl
                <<"Press 1 to start over."<<endl
                <<"Press 2 to continue."<<endl;
            ans=cin.get();
            cin.ignore(256,'\n');
        }
        short ansr=ans-'0';
        if(ansr!=1)redo=false;
        else{}
    }while(redo);
    //asks for user's balance
    cout<<endl
        <<"What is your account balance? ";
    cin>>balance;
    balRem=balance;
    cout<<endl;
    //ask what user wishes to do
    do{
        cout<<"Total Balance: $"<<balRem<<endl;
        cout<<"What would you like to do?"<<endl
            <<"1.) Withdraw money from account"<<endl
            <<"2.) Deposit money into account"<<endl
            <<"3.) See all checks made this month"<<endl
            <<"4.) See all deposits made this month"<<endl
            <<"Press any other key to quit."<<endl;
        cin>>choice;
        //use menu for selections
        switch(choice){
            case 1:{
                //withdraw
                cout<<"How much would you like to withdraw? ";
                cin>>withdrw;
                if(withdrw>balRem){
                    short temp=withdrw-balRem;
                    cout<<"You have overdrawn from your account."<<endl
                        <<"An overdraft fee of $12.50 will be charged."<<endl
                        <<"Overdraft total is $"<<temp
                        <<" plus $12.50."<<endl;
                    balRem-=ovrDrft;
                }else{}
                tCheck+=withdrw;
                balRem-=withdrw;
                numChck++;
                break;
            }
            case 2:{
                //deposit
                cout<<"How much would you like to deposit? ";
                cin>>deposit;
                tDepost+=deposit;
                balRem+=deposit;
                numDpst++;
                break;
            }
            case 3:{
                //see total withdraws
                cout<<"You've made "<<numChck
                    <<" check(s) this month."<<endl
                    <<"Total: $"<<tCheck<<endl<<endl;
                break;
            }
            case 4:{
                //see total deposits
                cout<<"You've deposited "<<numDpst
                    <<" credit(s) this month."<<endl
                    <<"Total: $"<<tDepost<<endl<<endl;
                break;
            }
            default:{
                //quit menu if no other action needed
                cout<<"Thank you and come again."<<endl;
                loopMnu=false;
            }
        }
    }while(loopMnu);
    //Exit Stage Right!!
    return 0;
}

