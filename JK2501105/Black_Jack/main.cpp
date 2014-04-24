//
//  Main.cpp
//  Black Jack
//
//  Created by JuLio Kohlberg on 4/22/14.
//
//  Black Jack

#include <cstdlib> //Random function srand
#include <iostream> //Standard input/output
#include <fstream> //file input/output
#include <ctime> //time for random and program
#include <iomanip> //Formatting
#include <cmath> //Math Functions

using namespace std;

//Global constans
//If not a Global Constant get an F

//Function Protoypes

//Execution starts here!

int main(int argc, const char * argv[])
{
    
    //Random Number
    srand((unsigned)time(0));
    //Declare Variables
    
    //Dealer Variables
    
    int bet;
    int dealer_card1 = rand() % 13 + 1;  //dealer card 1
	int dealer_card2 = rand() % 13 + 1;  //dealer card 2
    int dealer_card3 = rand() % 13 + 1;  //dealer card 3
    int dealer_total = dealer_card1 + dealer_card2 + dealer_card3;
    
	//Player Variables
    
    int player_card1 = rand() % 13 + 1;  //player card 1
	int player_card2 = rand() % 13 + 1;  //player card 2
    int player_card3 = rand() % 13 + 1;  //player card 3
    int player_card4 = rand() % 13 + 1;  //player card 4
    int player_1st_total = player_card1 + player_card2;
    int player_2nd_total = player_card1 + player_card2 + player_card3;
    int player_3th_total = player_card1 + player_card2 + player_card3 + player_card4;
    char choice;
    
    cout << "Welcome, if you wanna play Blackjack please place your bet: $ ";
	cin >> bet;
    cout << "\n";
    cout << "The dealer will now give you your cards..."<<endl;
    cout << "\n" << "You got a ";
    
    //Player Cards
    
    switch (player_card1){
		case 1: cout << "Ace and ";
            break;
		case 11: cout << "Jack and ";
			break;
		case 12: cout << "Queen and ";
			break;
		case 13: cout << "King and ";
			break;
		default: cout << player_card1 << " and ";
			break;
	}
	switch (player_card2){
		case 1: cout << "Ace";
			break;
		case 11: cout << "Jack";
			break;
		case 12: cout << "Queen";
			break;
		case 13: cout << "King";
			break;
		default: cout << player_card2;
			break;
	}
    
    //Output Blackjack
    
    if ((player_card1 == 1) && (player_card2 > 10)) {
		cout << " that's a Blackjack! You Win $ " << bet*1.5 << "!!" << endl;
        return 0;
    }
    if ((player_card1 > 10) && (player_card2 == 1)) {
		cout << " that's a Blackjack! You Win $ " << bet*1.5 << "!!" << endl;
        return 0;
    }
    
    // 3th Card Question
    
    cout << "\n"<<endl;
    cout << "If you want another card press Y, if you don't press N: ";
    cin >> choice;
    cout << "\n";
    
    {
        if (choice == 'Y' || choice == 'y'){
            cout << "You got a " << player_card3<< "\n" <<endl;
            cout << "Your Total is " << player_2nd_total <<endl;
        }
    }
    
    {
        if (choice == 'N' || choice == 'n'){
            cout << "You have "<< player_1st_total <<endl;
        }
    }
    
    cout << "If you want another card press Y, if you don't press N: ";
    cin >> choice;
    cout << "\n";
    
    {
        if (choice == 'Y' || choice == 'y'){
            cout << "You got a " << player_card4<< "\n" <<endl;
            cout << "Your Total is " << player_3th_total <<endl;
        }
    }
    
    {
        if (choice == 'N' || choice == 'n'){
            cout << "You have "<< player_2nd_total <<endl;
        }
        
    }
    
    cout << "\n";
    cout << "The dealer is playing..."<<endl;
    cout << "\n";
    
    switch (dealer_card1) {
		case 1: cout << "Ace, ";
			break;
		case 11: cout << "Jack, ";
			break;
		case 12: cout << "Queen, ";
			break;
		case 13: cout << "King, ";
			break;
		default: cout << dealer_card1 << ", ";
			break;
	}
	switch (dealer_card2) {
		case 1: cout << "Ace";
			break;
		case 11: cout << "Jack";
			break;
		case 12: cout << "Queen";
			break;
		case 13: cout << "King";
			break;
		default: cout << dealer_card2 << ", ";
			break;
	}
    switch (dealer_card3) {
		case 1: cout << " and Ace";
			break;
		case 11: cout << " and Jack";
			break;
		case 12: cout << " and Queen";
			break;
		case 13: cout << " and King";
			break;
		default: cout << dealer_card3<<endl;
			break;
	}
    
    cout << " The dealer have " << dealer_total <<endl;
    
    
    if (player_1st_total < dealer_total || player_2nd_total < dealer_total || player_3th_total < dealer_total){
        cout << "\n" << "You Win $" << bet*2 << "!!" << endl;
    }
    else if (player_1st_total > dealer_total || player_2nd_total > dealer_total || player_3th_total > dealer_total){
        cout << "\n" << "You lose" << endl;
    }
    
    return 0;
    
}
