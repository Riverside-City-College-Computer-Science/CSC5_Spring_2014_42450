/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on June 4, 2014, 4:18 PM
 * Purpose: To Create Hangman V 2.0
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <ctime> //Random Generator
#include <string> //Word Creation
#include <fstream> //Read From Text File
#include <vector> //To Create Vector For Words
using namespace std;

//Global Constants

//Function Prototypes
int letterFill (char,string,string&);
void printman(unsigned int *stage);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int stage=0;
    int MAX_TRY=9,numWrGs=0,choice,choice2,nmWrGs2=0,MX_TRY2=9;
    char letter,letter2;
    string word;
    
    //Random Words For "Easy" Mode
    string words[]={
        "saber","laser","alien","sword","fleet",
        "troll","jedi","demon","axe","lord",
        "lance","horse","vader","witch","armor",
        "magic","fire","ice","rifle","wyrm",
        "slay","giant","angel","smaug","king"
    };
    
    //Introduce And Ask User If They Want To Play
    cout<<"                    |/---                    "<<endl;
    cout<<"                    |  o                     "<<endl;
    cout<<"                    | /|\\                   "<<endl;
    cout<<"                    | / \\                   "<<endl;
    cout<<"                    |____                    "<<endl;
    cout<<" "<<endl;
    cout<<"Hello! Welcome to Hangman's Journey! The words contained therein ";
    cout<<"are Fantasy and Sci Fi themed!"<<endl;
    cout<<"It contains many characters, authors, places, and ";
    cout<<"creatures from your favorite books, television ";
    cout<<"shows, video games and movies! "<<endl;
    cout<<" "<<endl;
    cout<<"Do you want to play a game?"<<endl;
    cout<<"Please press 1 for Yes, ";
    cout<<"and 2 for No."<<endl;
    cout<<" "<<endl;
    cout<<"Please input your choice here: ";
    cin>>choice;
    
    //If Choice Is Yes, Ask For Easy Or Hard Mode
    if(choice==1){
        cout<<" "<<endl;
        cout<<"Okay! Now that we know you want to play, what path would you ";
        cout<<"like to traverse? "<<endl;
        cout<<"The Easy Path or the DIFFICULT Path? ";
        cout<<"Please press 4 for The Easy Path ";
        cout<<"and 5 for The DIFFICULT Path."<<endl;
        cout<<" "<<endl;
        cout<<"WARNING! The DIFFICULT Path is only for those heavily trained ";
        cout<<"in the arcane arts of Fantasy and Sci Fi lore!!"<<endl;
        cout<<"Please enter your choice here: ";
        cin>>choice2;
        
        //If Easy, Start Easy Mode. Those Wussies.
        if(choice2==4){
            cout<<"You chose the Easy Path. Get ready, you ";
            cout<<"yellow belly milk drinker!"<<endl;
            
            //Randomize The Words In The Game
            srand(time(NULL));
            int n=rand()%10;
            word=words[n];
            
            //Initialize Secret Word With *
            string unknown(word.length(),'*');
    
            //Loop Until The Guesses Are Used Up
            while(numWrGs<MAX_TRY){
                printman(&stage);
        
                cout<<" "<<endl;
                cout<<" "<<unknown<<endl;
                cout<<"Please choose a letter: ";
                cin>>letter;
        
                 //Fill The Secret Word With A Letter, Otherwise
                 //Increment Number Of Wrong Guesses
                 if(letterFill(letter,word,unknown)==0){
                     cout<<"Uh oh! The milk drinker got the ";
                     cout<<"wrong letter!"<<endl;
                     numWrGs++;
                     ++stage;
                 }else cout<<"Amazing! The tenderfoot found a letter! ";
                       cout<<" "<<endl;
              
                 //Tell The User How Many Guesses They Have Left
                 cout<<" You have "<<MAX_TRY-numWrGs<<" guesses left."<<endl;
            
                 //Check To See If User Guesses Word
                 if(word==unknown){
                     cout<<" "<<endl;
                     cout<<word<<endl;
                     cout<<" "<<endl;
                     cout<<"Well... You guessed the right word."<<endl;
                     cout<<"Hmmm I'm somewhat impressed... You didn't hurt ";
                     cout<<"youself trying to think. Try the DIFFICULT Path ";
                     cout<<"next time!"<<endl;
                     break;
                 }
             }
    
             //Output If User Loses
             if(numWrGs==MAX_TRY){
                 printman(&stage);
                 cout<<" "<<endl;
                 cout<<"Hmm, you are one silly milk drinking fool. Bring ";
                 cout<<"your mom next time...";
                 cout<<" "<<endl;
                 cout<<"The word was : "<<word<<"."<<endl;
                 cout<<" "<<endl;
                 cout<<"Try again or bring someone smarter with ";
                 cout<<"you when you try again."<<endl;
             }
            
            //INITIALIZE DIFFICULT MODE!!!!! You Go Bro!
            }else if(choice2==5){
                
                //Welcome User To DIFFICULT Mode!!!
                cout<<"I see you've chosen the Path of the elite... ";
                cout<<"Good luck you courageous knight!"<<endl;
                //Declare Variables
                ifstream myfile;
                vector<string> words2;
                string word2;
                
                //Open File
                myfile.open("Words.txt",ios::in);
                  
                if(!myfile){
                    cout<<"Sorry! No file found!"<<endl;
                    return 0;
                }
                
                while(myfile>>word2){
                    words2.push_back(word2);
                }
                
                //Randomize The Words In The Game
                srand(time(NULL));
                int s=rand()%10;
                word2=words2[s];
             
                //Close The File
                myfile.close();
    
                //Initialize Secret Word With *
                string unknwn2(word2.length(),'*');
    
                //Loop Until The Guesses Are Used Up
                while(nmWrGs2<MX_TRY2){
                    printman(&stage);
        
                    cout<<" "<<endl;
                    cout<<" "<<unknwn2<<endl;
                    cout<<"Please choose a letter: ";
                    cin>>letter2;
        
                 //Fill The Secret Word With A Letter, Otherwise
                 //Increment Number Of Wrong Guesses
                 if(letterFill(letter2,word2,unknwn2)==0){
                     cout<<"Wrong letter m'lord! Try again!"<<endl;
                     nmWrGs2++;
                     ++stage;
                 }else cout<<"You found a letter! I knew you could ";
                    cout<<"do this!"<<endl;
                    cout<<" "<<endl;
              
                 //Tell The User How Many Guesses They Have Left
                 cout<<" You have "<<MX_TRY2-nmWrGs2<<" guesses left."<<endl;
        
                 //Check To See If User Guesses Word
                 if(word2==unknwn2){
                     cout<<" "<<endl;
                     cout<<word2<<endl;
                     cout<<" "<<endl;
                     cout<<"My Lord! How astounding! Amazing! ";
                     cout<<"I bow to thee! The trumpets sing!"<<endl;
                     cout<<"Congratulations m'lord!"<<endl;;
                     break;
                 }
             }
    
             //Output If User Loses
             if(nmWrGs2==MX_TRY2){
                 printman(&stage);
                 cout<<" "<<endl;
                 cout<<"It seems you didn't have what it takes to win..."<<endl;
                 cout<<" "<<endl;
                 cout<<"The word was : "<<word2<<"."<<endl;
                 cout<<" "<<endl;
                 cout<<"Go back to The Training Grounds m'lord. ";
                 cout<<"Come back when you've had some more time ";
                 cout<<"with the maester."<<endl;
             }
             
        }
    }
    
    //If Choice Is No, End The Game
    else if(choice==2){
        cout<<"Fine, don't test yourself against my might!"<<endl;
        return 0;
    }
    
    //If User Picks A Letter, End The Game
    else {
        cout<<"You chose the wrong input! This means I must exit! Bye!";
    }
    
    return 0;
}
    
int letterFill (char guess,string secretword,string&guessword){
    //Function To Determine Whether Letter Was Guessed Right Or Not
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
    
void printman(unsigned int *stage){
    //Print The Stages Of Hangman When Guessed Wrong
    // |/---
    // |  o
    // | /|\
    // | / \
    // |____
    switch(*stage){
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