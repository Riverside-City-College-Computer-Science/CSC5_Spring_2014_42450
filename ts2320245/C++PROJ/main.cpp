/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Project 1
 *
 * Created on April 16, 2014, 10:38 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
// Global Constants

//Function Prototypes
bool check (int, int&);
//Execution Begins.
int main(int argc, char** argv) {
    
    int num1 = 0, num2 = 0, num3 = 0, 
                 num4 = 0, guess = 0,
                 dgt1 = 0, dgt2 = 0, dgt3 = 0, dgt4= 0, randnum;
    int  bulls = 0, cows =0, tries = 0 ;
    bool Sentinel = true;
     //Prompt and instructions
    cout << "BULLS AND COWS\n";
    cout << "--------------\n";
    cout << "In this game, the computer is going to think of a random  4-digit number, and you will try to guess it.\n";
    cout << "Follow the computers hints: \n";
    cout << "Bulls = correct digit, in a correct position.\n";
    cout << "Cows = correct digit, in an incorrect position.\n\n";
    cout << "Easy = Guess the computers number in 15 tries or more.\n";
    cout << "Hard = Guess the computers number in 14 tries or less.\n";
    cout << "Expert = Guess the computers number in 6 tries or less.\n\n";
            
    // Sets the random number  generator
    srand ( time(0));
    num1 = rand() % 2 + 3;//the shifting value and the scaling factor are different in order to generate a non repeating four-digit number.
    num2 = rand() % 2 + 1;// num2 has range [2,3]
    num3 = rand() % 3 + 5;// num3 has range [3,8]
    num4 = rand() % 2 + 8; // num4 has range[2,9]
    //this is the number the user has to try to guess
    randnum = num1 * 1000 + num2 * 100 + num3 * 10 + num4;// reverses the processes in lines 35 to 40
    
   
    do {
    cout << "Guess the computers 4-digit number(Note: Digits in your in your 4-digit number should not repeat): "; // prompts user to guess for the first time
    cout << endl;
    cin >> guess;
    ++tries;
    }while( ! ( check(guess, tries) ) );
  
    // This while structure checks to see if the first guess of the user is correct. 
    // According to probability, this construct should never execute.
    //Although this do/while structure can be omitted from the program, it is not. i like it
    do{
      if ( guess == randnum )
          cout << "\nYou guessed the computers number right from the start! You win!\n";
    }while ( randnum == guess );
    
    //This while structure will repeat until user guesses the right number.  
    while ( guess != randnum ){
    if ( guess / 1000 == num1 ) //Checks if the first digit of the users four digit number is a bull
        ++bulls;
    if ( ( guess/1000 != num1 ) && ( num2 == guess/1000 || num3 == guess/1000  || num4 == guess/1000 ))  //Check for cows
        ++cows;
    
    guess = guess % 1000;      // checks the 2nd digit
    
    if ( guess / 100 == num2)  //Checks for bulls
       ++bulls;
    if ( ( guess/100 != num2 ) && ( num1 == guess/100 || num3 == guess/100  || num4 == guess/100 ))  //Check for cows
       ++cows; 
      
    
    guess = guess % 100;       // checks the third digit
    
    if ( guess / 10 == num3 )   //Checks for bulls
        ++bulls;
    if ( ( guess / 10 != num3 ) && ( num1 == guess/10 || num2 == guess/10  || num4 == guess/10 ))  //Check for cows
       ++cows; 
    
    guess = guess % 10;        // checks the fourth digit
    
    if ( guess == num4 )      //Checks for bulls
        ++bulls;
    if ( ( guess != num4 )&& ( num1 == guess || num2 == guess  || num3 == guess ))  //Check for cows
       ++cows;  
      
    cout << "Bulls: " << bulls << ", Cows: " << cows <<  endl;
       do{
    cout << "\nTry again(Digits in your in your 4-digit number should not repeat): ";
    cout << endl  ;
    cin >> guess;
    ++tries;
     }while( ! ( check(guess, tries) ));
    
    while ( guess < 1000 || guess > 9999){ // Checks for the range of the n input.
       
            cout << endl << "\nThe number you entered is incorrect.\n";
            cout << "Please enter a four digit, positive numbers--only.\n";
            cin >> guess;

   }
    
    if ( guess == randnum ){
        cout << endl << "\nCongratulations! You guessed the computer's number!\n\n"; 
        cout << "You guessed the computers number in " << tries << " tries!\n";
      
    }
    bulls = 0;
    cows  = 0 ;    
    }
 //Exit Stage Right
    return 0;
    }
 //Function Definition
bool check ( int guess, int& tries){

    int dgt1 = 0,dgt2 = 0,dgt3 = 0, dgt4 = 0;
    dgt1 = guess / 1000;  // allows us to check first digit
    guess = guess % 1000; //makes guess a three digit number
    dgt2 = guess / 100;//allows us to check second digit
    guess  = guess % 100;//makes guess a two digit number
    dgt3 = guess / 10;// allows us to check third digit
    guess = guess % 10;// makes guess a one digit number
    dgt4  = guess;// allows us to check fourth digit
    guess = guess;// guess has now become a one digit number
    guess = dgt1 * 1000 + dgt2 * 100 + dgt3 * 10+ dgt4; // reverses the above process. line 121 to 128.
    
    
    
        if( guess <1000 || guess >9999 )// Checks for the range of the first input.
        { 
                cout << endl << "The number you entered is incorrect.\n";
                cout << "Please enter a four digit, positive numbers--only.\n";
     
      
                //return type
                return false;
        }
        else 
        {
            if (( dgt1 == dgt2)||( dgt1 == dgt3 )||( dgt1 == dgt4 )||( dgt2 == dgt3)||(dgt2 == dgt4)||( dgt3 == dgt4))   // checks  to see if any digit in the users guess repeats
                {
                    cout << "\nError!\n" << "Please enter a four-digit number whose integers do not repeat.\n"; //tells user he/she mest up
                    // return type
                    return false;
                }
            else
                {
                    return true;
                }
        }
}


