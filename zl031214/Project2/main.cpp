/* 
 * File:   main.cpp
 * Author: Zachery Ludwin
 * Created on May 2, 2014, 12:10 AM
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib> //for rand and srand
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int aceVal(int);
void score(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int cardNum[12]={1,2,3,4,5,6,7,8,9,10,10,10};
    int cardNum2[12]={1,2,3,4,5,6,7,8,9,10,10,10};
    int dealNum[12]={1,2,3,4,5,6,7,8,9,10,10,10};
    int dealNum2[12]={1,2,3,4,5,6,7,8,9,10,10,10};
    int dealer[11]={1,2,3,4,5,6,7,8,9,10};
    int dealer2[11]={1,2,3,4,5,6,7,8,9,10};
    int card[11]={1,2,3,4,5,6,7,8,9,10};
    int card2[11]={1,2,3,4,5,6,7,8,9,10};
    int RandIndex, faceCard, value=0;
    int total, dealerTotal, faceCard2;
    char hit, hit2, answer;
    int i, n, temp;
    int choice;
    
    srand((unsigned)time(0)); //initialize the random seed
    
    do
    {
    //Initialize totals
        total=0;
        dealerTotal=0;
        n=2;
        
    //Determine dealer's initial cards
    for (int i=0;i<n;i++){
        do
        {
        RandIndex = rand()%13; //generates a random number between 0 and 12
        dealer[i]=dealNum[RandIndex];
        
        if(dealer[i]<11){
        dealerTotal+=dealer[i];
        }

        }
        while(dealer[i]<1||dealer[i]>13);           
    }
    cout<<"The dealer's public card is a "<<dealer[0]<<endl;
    cout<<" "<<endl;

    //Determine player's initial cards
        for (int i=0;i<n;i++){
        do
        {
        RandIndex = rand()%13; //generates a random number between 0 and 12
        card[i]=cardNum[RandIndex];
        
        if(card[i]<11){
        total+=card[i];    
        }
        
        }
        while(card[i]<1||card[i]>13);           
    }
    cout<<"Your first card is a "<<card[0]<<"."<<endl;
    cout<<"Your second card is a "<<card[1]<<"."<<endl;
    
    //Determine value of ace
    if(card[0]==1){
        temp=aceVal(value);
    }
    
    if(card[1]==1){
        temp=aceVal(value);
    }
  
    if(temp==2){
        total+=10;
    }
    
    //Ask user if they want to stand or hit
    cout<<"Your total is "<<total<<"."<<endl;
    cout<<" "<<endl;
    cout<<"Would you like to stand or hit?"<<endl;
    cout<<"1. Stand"<<endl;
    cout<<"2. Hit"<<endl;
    cin>>choice;
    
    if(choice==2){//if user wants to hit
    do
    {   
    n=1;
        for (int i=0;i<n;i++){
        do
        {
        RandIndex = rand()%13; //generates a random number between 0 and 12
        card2[i]=cardNum2[RandIndex];
        if(card2[i]<11){

        total+=card2[i];    
        }
        }
        while(card2[i]<1||card2[i]>13);           
    }
    cout<<"Your next card is a "<<card2[0]<<endl;
    
    //Determine value of ace
    if(card[0]==1){
        temp=aceVal(value);
    }
    if(temp==2){
        total+=10;
    }
    
    cout<<"Your total is "<<total<<endl;
    if(total>21){
        cout<<"You have busted. The dealer wins."<<endl;
        return 0;
    }
    else if(total==21){
        cout<<"BlackJack! You win!"<<endl;
    }
    else
    cout<<"Would you like to hit again? (Y/N) ";
    cin>>hit;
    }while(hit=='Y'||hit=='y');
    }
    
    //Reveal dealer's second card
    cout<<" "<<endl;
    cout<<"The dealer's cards are "<<dealer[0]<<" and "<<dealer[1]<<"."<<endl;
    cout<<"The dealer's total is "<<dealerTotal<<endl;
    
    if(dealerTotal<17){
    //Dealer hits until the total is 17 or greater
    do
    {
        n=1;
        for (int i=0;i<n;i++){
        do
        {
        RandIndex = rand()%13; //generates a random number between 0 and 12
        dealer2[i]=dealNum2[RandIndex];
        if(dealer2[i]<11){

        dealerTotal+=dealer2[i];
        }
        }  
        while(dealer2[i]<1||dealer2[i]>13);
    }
    cout<<"The dealer's next card is a "<<dealer2[0]<<endl;
    }while(dealerTotal<17);
    }
    
    cout<<"The dealer total is "<<dealerTotal<<endl;
    
    //Determine winner
    score(total, dealerTotal);
    
    //Ask user if they want to play again
    cout<<"Would you like to play another round of blackjack? (Y/N) ";
    cin>>answer;
    }while(answer=='y'||answer=='Y');
    
    return 0;
}

//Function to determine value of an ace
int aceVal(int value){
   
        cout<<"Would you like your ace to count as a 1 or an 11?"<<endl;
        cout<<"1. 1"<<endl;
        cout<<"2. 11"<<endl;
        cin>>value;
      
        return value;
}

//Function to score the game
void score(int total, int dealerTotal){
    if(total>dealerTotal){
        cout<<" "<<endl;
        cout<<"You win!"<<endl;
    }
    else if(total==21){
        cout<<" "<<endl;
        cout<<"Blackjack. You win!"<<endl;
    }
    else if(total<dealerTotal&&dealerTotal<21){
        cout<<" "<<endl;
        cout<<"The dealer wins."<<endl;
    }
    else if(total<dealerTotal&&dealerTotal>21){
        cout<<" "<<endl;
        cout<<"The dealer busts. You win!"<<endl;
    }
    else if(dealerTotal==21){
        cout<<" "<<endl;
        cout<<"The dealer has blackjack. The dealer wins."<<endl;
    }
    else if(total==dealerTotal){
        cout<<" "<<endl;
        cout<<"Tie."<<endl;
    }
}