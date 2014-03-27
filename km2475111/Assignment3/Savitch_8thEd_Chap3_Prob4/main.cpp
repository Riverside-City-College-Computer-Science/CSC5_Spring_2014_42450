/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on March 26, 2014, 5:22 PM
 * Rock, Paper, Scissors
 */

#include <iostream>
#include <string>
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool SENTINEL=true;
    string p1turn,p2turn,replay;
    //loop until user says not to
    do{
        //ask for turns
        cout<<"Let's play Rock-Paper-Scissors!"<<endl
            <<"Player 1, make your move (P,R,or S): ";
        cin>>p1turn;
        cout<<"Player 2, make your move (P,R,or S): ";
        cin>>p2turn;
        //calculate who wins with rule: r>s, s>p, p>r
        if((p1turn=="R"||p1turn=="r")&&(p2turn=="P"||p2turn=="p")){
            cout<<"Player 2 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="R"||p1turn=="r")&&(p2turn=="S"||p2turn=="s")){
            cout<<"Player 1 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="R"||p1turn=="r")&&(p2turn=="R"||p2turn=="r")){
            cout<<"Nobody wins."<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="P"||p1turn=="p")&&(p2turn=="S"||p2turn=="s")){
            cout<<"Player 2 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="P"||p1turn=="p")&&(p2turn=="R"||p2turn=="r")){
            cout<<"Player 1 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="P"||p1turn=="p")&&(p2turn=="P"||p2turn=="p")){
            cout<<"Nobody wins."<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="S"||p1turn=="s")&&(p2turn=="P"||p2turn=="p")){
            cout<<"Player 1 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="S"||p1turn=="s")&&(p2turn=="R"||p2turn=="r")){
            cout<<"Player 2 wins!"<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        else if((p1turn=="S"||p1turn=="s")&&(p2turn=="S"||p2turn=="s")){
            cout<<"Nobody wins."<<endl
                <<"Remember: Paper beats Rock, Rock beats Scissors, "
                <<"and Scissors beats Paper!"<<endl;
        }
        //prompt user and ask to play again
        cout<<"Do you wish to play again? (y/n): ";
        cin>>replay;
        if(replay=="No"||replay=="no"||replay=="n"||replay=="N"){
            cout<<"Thanks for playing! Good-bye!";
            SENTINEL=false;
        }
        else{}
    }while(SENTINEL);
    //Exit Stage Right!!
    return 0;
}

