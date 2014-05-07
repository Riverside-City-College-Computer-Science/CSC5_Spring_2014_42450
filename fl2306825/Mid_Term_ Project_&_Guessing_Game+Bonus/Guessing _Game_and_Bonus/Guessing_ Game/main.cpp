/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 28, 2014, 7:38 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    short money = 300;                                                          //The players money
    int ch;                                                                     //The players input(choosing)
    char ans;                                                                   //For the riddle game
    srand(time(0));                                                             //To randomize where the prize is hidden 
 
    do{
    //Executing
    cout << "Hello and welcome to the guessing game. The object of the game is "
            "to guess where the prize is hidden inside the coconuts. Please "
            "choose a game type:\nGame 1. Bet 50,  3 coconuts\nGame 2. Bet "
            "100, 5 coconuts\nGame 3. Bet 200, 8 coconuts\nGame 4. "
            "Riddle\nMoney: $" << money << endl;
    
    do{
     cin >> ch;
     
     if(ch >= 5)                                                                 //Repeats if the input is not less than 4 
         {
                cout << "Invalid choice. Please try again.\n";      
         }
     
      }while(ch >= 5);
     
     switch(ch){
         case 1:                                                                //Game 1
         {
             int die = (rand() % 3) + 1;                                        //The die is rolled
             
             cout << "The coconuts have been shuffled. Please choose between "
                     "(1 - 3)\n";
              cin >> ch;                                                        //Player guesses 1 out of 3
              
              if(ch == die)                                                     //If the choice is correct, win 100
              {
                  cout << "Congrats! you won $100";
                  
                  money += 100;
                  
              }
              else if (ch != die)                                               //If the choice isn't correct, loses 50
              {
                  cout << "I'm sorry. You lost $50";
                  
                  money -= 50;
              }
         }break;
         
         case 2:                                                                //Game 2
         {
             int die = (rand() % 5) + 1;                                        //The die is rolled
             
             cout << "The coconuts have been shuffled. Please choose between "
                     "(1 - 5)\n";
              cin >> ch;                                                        //Player guesses 1 out of 5
              
              if(ch == die)                                                     //If the choice is correct, win 200
              {
                  cout << "Congrats! you won $200";
                  
                  money += 200;
                  
              }
              else
              {
                  cout << "I'm sorry. You lost $100";                           //If the choice isn't correct, losses 100
                  
                  money -= 100;
              }
         }break;
         
         case 3:                                                                //Game 3
         {
             int die = (rand() % 8) + 1;                                        //The die is rolled
             
             cout << "The coconuts have been shuffled. Please choose between "
                     "(1 - 8)\n";
              cin >> ch;                                                        //Player guesses 1 out of 8
              
              if(ch == die)                                                     //If the choice is correct, win 500
              {
                  cout << "Congrats! you won $500";
                  
                  money += 500;
                  
              }
              else                                                              //If the choice isn't correct, loses 200
              {
                  cout << "I'm sorry. You lost $200";
                  
                  money -= 200;
              }
              
         }break;
         
         case 4:                                                                //Guessing game
         {
             cout << "Here's a fun little riddle that I came up with:\nI am a "
                     "device that separates the mind and the soul.. What am "
                     "I?\n(Input the first letter only that you think it is)\n";
              cin >> ans;                                                       //if input g, win 1000
              
              if(ans == 'g')
              {
                  cout << "If you thought of guillotine, congrats!! Heres a "
                          "bonus $1000.";
                  
                  money += 1000;
              }
              else                                                              //if input is incorrect, loses
              {
                  cout << "I'm sorry, that wasn't it.";
              }
         }break;
         
         
     }
     
     cout << "\nTry again?\n1 = Yes\n2 = No\n";                                 //Looping
      cin >> ch;
             
    }while(ch == 1);
    
    cout << "You walked away with $" << money << "\nGoodbye.";                  //Display total score
    return 0;
}

