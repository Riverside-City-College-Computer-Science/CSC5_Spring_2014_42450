/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 28, 2014, 11:56 AM
 * Purpose: Hangman Game
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <ctime> //Random Generator
#include <string> //Word Creation

using namespace std;

//Global Constants

//Function Prototypes
int letterFill (char,string,string&);
void printman(unsigned int stage);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int stage=0;
    int MAX_TRY=9,numWrGs=0;
    char letter;
    string word,guesses;
    string words[]={
        "saber","laser","gunfight","planet","alien",
        "monster","dragon","sword","shield","destroyer",
        "starship","cruiser","fleet","reaper","troll",
        "demon","warhammer","axe","lance","horse",
        "snowspeeder","deathstar","vader","witch",
        "jedi"
    };
    
    //Choose Words From Array Randomly
    srand(time(NULL));
    int n=rand()%10;
    word=words[n];
    
    //Initialize Secret Word With *
    string unknown(word.length(),'*');
    
    //Welcome User And Prompt Choice For Being Ready
    cout<<"                  Welcome To..."<<endl;
    cout<<"            Hangman In The 31st Century!"<<endl;
    cout<<"The most interesting and dangerous Hangman ever devised!"<<endl;
    cout<<"One lucky contestant will be able to help one of our "<<endl;
    cout<<"'volunteers', who was caught by one of our 'Game Wardens' "<<endl;
    cout<<"try to escape their impending doom!! "<<endl;
    cout<<"Do you have the spelling and guessing skills to help "<<endl;
    cout<<"one of our 'volunteers' escape our clutches?"<<endl;
    cout<<"You will have 9 chances to succeed! Good Luck!"<<endl;
    cout<<" "<<endl;
    
    //Loop Until The Guesses Are Used Up
    while(numWrGs<MAX_TRY){
        printman(stage);
        
        cout<<" "<<endl;
        cout<<" "<<unknown<<endl;
        cout<<"Please choose a letter: ";
        cin>>letter;
        
        //Fill The Secret Word With A Letter, Otherwise
        //Increment Number Of Wrong Guesses
        if(letterFill(letter,word,unknown)==0){
            cout<<"Whoops! That's the wrong letter!"<<endl;
            numWrGs++;
            ++stage;
        }else cout<<"You found a letter! Awesome!"<<endl;
            cout<<" "<<endl;
              
        //Tell The User How Many Guesses They Have Left
        cout<<" You have "<<MAX_TRY-numWrGs<<" guesses left."<<endl;
            
        //Check To See If User Guesses Word
        if(word==unknown){
            cout<<" "<<endl;
            cout<<word<<endl;
            cout<<" "<<endl;
            cout<<"Well! You guessed the right word! Amazing!"<<endl;
            cout<<"You saved one of the 'volunteers' for one more day!"<<endl;
            break;
        }
    }
    
    //Output If User Loses
    if(numWrGs==MAX_TRY){
        printman(stage);
        cout<<" "<<endl;
        cout<<"Sorry, you lose! The hanging has commenced!"<<endl;
        cout<<" "<<endl;
        cout<<"The word was : "<<word<<"."<<endl;
        cout<<" "<<endl;
        cout<<"Bring in the next 'volunteer'!!"<<endl;
    }
    
    
    return 0;
}


    //Functions
    int letterFill (char guess,string secretword,string&guessword){
        int i;
        int matches=0;
        int len=secretword.length();
        for(i=0;i<len;i++){
            if(guess==guessword[i])
                return 0;
            if(guess==secretword[i]){
                guessword[i]=guess;
                matches++;
            }
        }
        return matches;
    }
    
    void printman(unsigned int stage){
        
        // |/---
        // |  o
        // | /|\
        // | / \
        // |____
 
        switch(stage)
        {
             case 0:
                cout << "\n\n\n\n\n";
                break;
            case 1:
                cout << "\n\n\n\n_____";
                break;
            case 2:
                cout << "|\n|\n|\n|\n|____";
                break;
            case 3:
                cout << "|/---\n|\n|\n|\n|____";
                break;
            case 4:
                cout << "|/---\n|  o\n|\n|\n|____";
                break;
            case 5:
                cout << "|/---\n|  o\n|  |\n|\n|____";
                break;
            case 6:
                cout << "|/---\n|  o\n| /|\n|\n|____";
                break;
            case 7:
                cout << "|/---\n|  o\n| /|\\\n|\n|____";
                break;
            case 8:
                cout << "|/---\n|  o\n| /|\\\n| /\n|____";
                break;
            case 9:
                cout << "|/---\n|  o\n| /|\\\n| / \\\n|____";
                break;
            default:
               cout << "|/---\n|  o\n| /|\\\n| / \\\n|____";
               break;
        }
    return;
}