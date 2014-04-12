/* 
 * File:   main.cpp
 * Author: Ezra Guinmapang
 * Created on April 9, 2014, 9:48 AM
 */

//Libraries
#include <iostream> //for cin and cout
#include <ctime> //for time() function
#include <cstdlib> //for rand() and srand() functions
using namespace std;

//Global variables and constants

//Function prototypes

//Execution begins HERE
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned int sum, die1 = 0, die2 = 0, sum2 = 0, win = 0, win2 = 0,
                 win3 = 0, win4 = 0, win5 = 0, win6 = 0, win7 = 0,
                 win8 = 0, win9 = 0, win10 =0, win11 = 0, win12 = 0;
    unsigned int loss = 0, lose2 = 0, lose3 = 0, lose4 = 0, lose5 = 0,
                 lose6 = 0, lose7 = 0, lose8 = 0, lose9 = 0, lose10 = 0,
                 lose11 = 0, lose12 = 0;
    unsigned int games = 1000000;
    //Simulate 1000000 games
    for(int roll = 1; roll <= games; roll++){
        //Roll the dice
        die1 = rand()%6 + 1;
        die2 = rand()%6 + 1;
        sum = die1 + die2;
        //Check for a win (rolling a 7 or 11)
        if(sum == 7 || sum == 11){
            win++; //increment total wins
            switch(sum){ //increment win for particular sum
                case 7: win7++; break; 
                case 11: win11++; break;
                default: cout << "Better never get here!\n";
            }
        }
        //Check for immediate loss
        else if(sum == 2 || sum == 3 || sum == 12){
            loss++; //increment total losses
            switch(sum){ //increment loss for particular sum
                case 2: lose2++; break;
                case 3: lose3++; break;
                case 12: lose12++; break;
                default: cout << "Better never get here!\n";
            }
        }
        //Catch all other cases not immediate wins or immediate losses
        else{ 
            bool cntLoop = true; //boolean variable to loop with
            //keep rolling the dice until 7 or 1st roll == current roll
            do{
                //Roll the dice again
                die1 = rand()%6 + 1;
                die2 = rand()%6 + 1;
                sum2 = die1 + die2;
                //rolling a 7 is a loss here
                if(sum2 == 7){
                    loss++;
                    switch(sum){
                        case 4: lose4++; break;
                        case 5: lose5++; break;
                        case 6: lose6++; break;
                        case 8: lose8++; break;
                        case 9: lose9++; break;
                        case 10: lose10++; break;
                        default: cout << "Better never get here!\n";
                    }
                    cntLoop = false; //set boolean variable to false exits the do-while loop
                }
                //1st roll == current roll wins here
                else if(sum == sum2){
                    win++;
                    switch(sum){
                        case 4: win4++; break;
                        case 5: win5++; break;
                        case 6: win6++; break;
                        case 8: win8++; break;
                        case 9: win9++; break;
                        case 10: win10++; break;
                        case 11: win11++; break;
                        default: cout << "Better never get here!\n";
                    }
                    cntLoop = false; //set boolean variable to false exits the do-while loop
                }
            }while(cntLoop); //condition to exit do-while loop
        }
    }
    //Output the results
    cout << "Total wins = " << win << " Total Losses = " << loss << endl;
    cout << "Total 2 wins = " << win2 << " Total 2 Losses = " << lose2 << endl;
    cout << "Total 3 wins = " << win3 << " Total 3 Losses = " << lose3 << endl;
    cout << "Total 4 wins = " << win4 << " Total 4 Losses = " << lose4 << endl;
    cout << "Total 5 wins = " << win5 << " Total 5 Losses = " << lose5 << endl;
    cout << "Total 6 wins = " << win6 << " Total 6 Losses = " << lose6 << endl;
    cout << "Total 7 wins = " << win7 << " Total 7 Losses = " << lose7 << endl;
    cout << "Total 8 wins = " << win8 << " Total 8 Losses = " << lose8 << endl;
    cout << "Total 9 wins = " << win9 << " Total 9 Losses = " << lose9 << endl;
    cout << "Total 10 wins = " << win10 << " Total 10 Losses = " << lose10 << endl;
    cout << "Total 11 wins = " << win11 << " Total 11 Losses = " << lose11 << endl;
    cout << "Total 12 wins = " << win12 << " Total 12 Losses = " << lose12 << endl;
    //Check the results
    int checkwin = win2 + win3 + win4 + win5 + win6 + win7 + win8 + win9 + win10 + win11 + win12;
    int checkloss = lose2 + lose3 + lose4 + lose5 + lose6 + lose7 + lose8 + lose9 + lose10 + lose11 + lose12;
    cout << "checking the results:\n";
    cout << "Total wins = " << checkwin << " Total Losses = " << checkloss << endl;
    cout << "Total wins = " << win << " Total Losses = " << loss << endl;
    //Execution ends HERE
    return 0;
}