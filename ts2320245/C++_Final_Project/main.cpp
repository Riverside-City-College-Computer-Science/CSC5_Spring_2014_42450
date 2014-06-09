/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * V2: Final Project 
 *
 * Created on 5 June 2014, 10:38 AM
 */
//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;
// No Global Constants

//Function Prototypes
bool check (int, int&);
int srtngfnct ( int, int , int , int); 
int srtngfnct2 ( int, int , int , int, int); 

//Execution Begins.
int main(int argc, char** argv) {
    //Declarition of variables
    int num1 = 0, num2 = 0, num3 = 0, 
        num4 = 0, guess = 0,
        dgt1 = 0, dgt2 = 0, dgt3 = 0, dgt4= 0, randnum;
    int  bulls = 0, cows =0, tries = 0 ;
    bool Sentinel = true;
    cout << endl;
     //Prompt and instructions
     //This code reads from the file "instructions1.txt"
    string getcontent;
    ifstream openfile("instructions1.txt");
    if (openfile.is_open()){
        while(!openfile.eof()){
            getline(openfile,getcontent);
            cout << getcontent << endl;
        }
            
    }
    
    cout << "\n\n";
    // Sets the random number  generator
    srand ( time(0));
    num1 = rand() % 2 + 3;//the shifting value and the scaling factor are different in order to generate a non repeating four-digit number.
    num2 = rand() % 2 + 1;// num2 has range [2,3]
    num3 = rand() % 3 + 5;// num3 has range [3,8]
    num4 = rand() % 2 + 8; // num4 has range[2,9]
    //this is the number the user has to try to guess
    randnum = num1 * 1000 + num2 * 100 + num3 * 10 + num4;// reverses the processes in lines 35 to 40
    cout << randnum; //DONT FORGET TO TAKE OUT
    do {
    cout << "Guess the computers 4-digit number(Note: Digits in your in your 4-digit number should not repeat): "; // prompts user to guess for the first time
    cout << endl;
    cin >> guess;//input
    ++tries;
    }while( ! ( check(guess, tries) ) );
  
    // This while structure checks to see if the first guess of the user is correct. 
    // According to probability, this construct should never execute.
    //Although this do/while structure can be omitted from the program, it is not. i like it
    do{
      if ( guess == randnum )
          cout << "\nYou guessed the computers number right from the start!\n";
      break;
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
    //Checks to see if user guessed the right number on this try
    if ( guess == randnum ){
        cout << endl << "\nCongratulations! You guessed the computer's number in "<< tries << " tries!\n\n"; 
      
      
    }
    bulls = 0;
    cows  = 0 ;    
    }
    
                                     //****SECOND PART OF THIS PROJECT BEGINS HERE****
    cout <<setw(30)<< "\n\t\t\t\t****It is now the computers turn to guess your number!****\n";
    cout << "\nSame rules apply: think of a four-digit number, and write it down ";
    cout <<"on a pice of paper\n so that you do not forget.(Please do not repeat digits and do not include the zero digit in your number)\n";
    cout << "The computer will try to guess your number, and";
    cout << " then it will display what it thinks your four-digit number is every time until it guesses your number.\n";
    cout << "In order for the computer to guess your number successfully however, you will need to tell the computer how many bulls and cows it has in its guess.\n";
    cout << "\nThe computer will now think of a number...If the computer guesses your number in less tries than you, the computer will win.\n"; 
    
    int x = 0; // x is going to be equal to the number of bulls, since i already used the variable "bulls" previously in the program
    int y = 0; // y is going to be equal to the number of cows, since i already used the variable "cows" previously in the program
    int a =0, b=0, c=0, d=0;
    int tries2 = 0;
    int found = 0, frstdgt,scnddgt,thrddgt,
        frthdgt, frstgss, a1, b1, c1, d1; 
    //Begining of code that will find the users number
    while ( (x != 4) ){
        //set the random number seed
        srand(time(0));
        frstgss = rand() % 9000 + 1000;//this is a random number between 1000 and 9999
        frstdgt = frstgss /1000;//First digit
        frstgss = frstgss %1000;//make frstgss a three digit number
        scnddgt = frstgss /100; //Second digit
        frstgss = frstgss % 100;//make frstgss a two digit number
        thrddgt = frstgss/10;   // third digit
        frstgss = frstgss % 10; //make frstgss a two didit number
        frthdgt = frstgss;      //first digit
        const int Rows = 2, Cols = 2;// Set the constant variables for 2D array usrnum[][];
        //2 Dimensional Array
        int usrnum[Rows][Cols] = { { frstdgt, scnddgt}, {thrddgt, frthdgt}};
           cout<< "\nIs your number " << usrnum[0][0]
                << usrnum[0][1]
                << usrnum[1][0]
                << usrnum[1][1]
                << " ?\n";
           found = usrnum[0][0] * 1000 + usrnum[0][1] * 100 + usrnum[1][0] * 10 + usrnum[1][1]; // combines all the subscripts in the 2D array into one number
           cout << "\nType in number of bulls:";//Prompt
           cin>> x;//Input
           cout << "Type in the number of cows:";//Prompt
           cin >> y;//Input
           tries2++;// increment the tries of the computer
            // Checks for invalid inputs 
            while (x > 4 || x < 0 || y > 4 || y < 0 ){
               cout << "\nERROR!! The number of bulls and cows has to be between 0 and 4.";
                        cout << "\nType in number of bulls:";
               cin>> x;
               cout << "Type in the number of cows:";
               cin >> y;
               cout << endl;
           }
           //this if structure will cause this while structure to stop looping when the computer finds the computers number
           if ( x == 4)
                      break;
           cout << endl;
           // This while structure will loop untill the computer finds a combination of bulls and cows that add up to 4. 
           while ( ! ((x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4))    ){
                   int fndnum = rand()%9000 + 1000;
                   a1= fndnum/1000;
                   fndnum= fndnum%1000;
                   b1= fndnum/100;
                   fndnum = fndnum%100;
                   c1= fndnum/10;
                   fndnum= fndnum%10;
                   d1= fndnum;
                   cout << "\nIs your number "<< a1 << b1 << c1 << d1 << " ?\n";
                    found = a1 * 1000 + b1 * 100 + c1 * 10 + d1;
                   cout << "\n\nType in number of bulls:";
                   cin>> x;
                   cout << "Type in the number of cows:";
                   cin >> y;
                   tries2++;
                   if (tries2 > tries){
                       cout << "\nYou guessed the computers number in " << tries << " tries. The computer could not top that!\n"
                            << "You Win!!\n";
                       return 0;
                   }
                   if (x==4) //DONT FORGET TO ADJUST!!!!
                       break;
                   // Checks range of x and y . (0,4)
                 while (x > 4 || x < 0 || y > 4 || y < 0 ){
                     cout << "ERROR!! The number of bulls and cows has to be between 0 and 4.";
                     cout << "\nType in number of bulls:";
                     cin>> x;
                     cout << "Type in the number of cows:";
                     cin >> y;
                     cout << endl;
           }
           }    

           if ( x == 4 )
               break;

           // once this while construct executes, it will arrange the users four digit number until it finds it
           while ( (x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4) ){

               //FIRST FOR STRUCTURE
               for ( int i= 1 ; i <=20 ; i ++ ){

                        a = found / 1000;         // allows us to check first digit
                            found = found % 1000; //makes guess a three digit number
                        b = found / 100;          //allows us to check second digit
                            found  = found % 100; //makes guess a two digit number
                        c = found / 10;           // allows us to check third digit
                            found = found % 10;   // makes guess a one digit number
                        d  = found;               // allows us to check fourth digit
                        found = a*1000+b*100+c*10+d;
                        cout << "\nIs your number " << srtngfnct2(a,b,c,d,i)  << " ?\n";
                        cout << "\n\nType in number of bulls:";
                        cin>> x;
                        cout << "Type in the number of cows:";
                        cin >> y;
                        tries2++;
                         if (tries2 > tries){
                       cout << "\nYou guessed the computers number in " << tries << " tries. The computer could not top that!\n"
                            << "You Win!!\n";
                       return 0;
                   }

                         //Checks range of x and y (0,4)
                  while (x > 4 || x < 0 || y > 4 || y < 0 ){
                      cout << "\nERROR!! The number of bulls and cows has to be between 0 and 4.";
                      cout << "\nType in number of bulls:";
                      cin>> x;
                      cout << "Type in the number of cows:";
                      cin >> y;
                      cout << endl;
             }
                        if (x==4)
                            break;

               }
               //SECOND FOR STRUCTURE
                if ( x == 4)
                      break;

                for (int count = 0; count < 3 ; count ++ ){

                        a = found / 1000;         // allows us to check first digit
                            found = found % 1000; //makes guess a three digit number
                        b = found / 100;          //allows us to check second digit
                            found  = found % 100; //makes guess a two digit number
                        c = found / 10;           // allows us to check third digit
                            found = found % 10;   // makes guess a one digit number
                        d  = found;               // allows us to check fourth digit

                        found  = srtngfnct(a,b,c,d);
                        cout << "\nIs your number " << found << " ?\n";
                        cout << "\n\nType in number of bulls:";
                        cin>> x;
                        cout << "Type in the number of cows:";
                        cin >> y;
                        tries2++;
                         if (tries2 > tries){
                       cout << "\nYou guessed the computers number in " << tries << " tries. The computer could not top that!\n"
                            << "You Win!!\n";
                       return 0;
                   }
                         //Checks range of x and y (0,4)
                  while (x > 4 || x < 0 || y > 4 || y < 0 ){
                      cout << "\nERROR!! The number of bulls and cows has to be between 0 and 4.";
                      cout << "\nType in number of bulls:";
                      cin>> x;
                      cout << "Type in the number of cows:";
                      cin >> y;
                      cout << endl;
               }
                        if (x==4)
                            break;

               }
       
               x = 4; y = 0;

           }
       
    }
       cout << "\n\nThe computer guessed your number in " << tries2 << " tries. You guessed the computers number in " << tries << " tries.\n";
       cout << "The computer wins!\n";
 //Exit Stage Right
    return 0;
    }



 //Function Definitions
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
                    cout << "\nError!\n" << "Please enter a four-digit number whose integers do not repeat.\n"; //tells user he/she messed up
                    // return type
                    return false;
                }
            else
                {
                    return true;
                }
        }
}
//Function "srtngfnct" sorts out the users guess
int srtngfnct(int a, int b, int c, int d){
    int value = b*1000 + c*100 + d*10 + a; 
    return value;
    
//Function "srtngfnct2" sorts out the users guess in a different pattern than the srtngfnct above 
}
int srtngfnct2(int a, int b, int c, int d, int i ){
    // this switch structure will return different combinations until it finds the users numbers.
    switch (i){
            case  1: 
                return a* 1000 +  b* 100 +  d* 10 + c;
            case  2: 
                return b* 1000 + a* 100 + c* 10 + d;
            case  3: 
                return b* 1000 + a* 100 + d* 10+c;
            case  4: 
                return c* 1000 + d* 100 + b* 10+a;
            case  5: 
                return d* 1000 + c* 100 + a* 10+b;
            case  6: 
                return d* 1000 + c* 100 + b* 10+a;
            case  7: 
                return b* 1000 + c* 100 + a* 10+d;
            case  8: 
                return c* 1000 + b* 100 + a* 10+d;
            case  9: 
                return c* 1000 + b* 100 + d* 10+a;
            case  10: 
                return a* 1000 + d* 100 + b* 10+c;
            case  11: 
                return a* 1000 + d* 100 + c* 10+b;
            case  12: 
                return d* 1000 + a* 100 + c* 10+b;
            case  13: 
                return b* 1000 + d* 100 + a* 10+c;
            case  14: 
                return b* 1000 + d* 100 + c* 10+a;
            case  15: 
                return d* 1000 + b* 100 + a* 10+c;
            case  16: 
                return d* 1000 + b* 100 + c* 10+a;
            case  17: 
                return a* 1000 + c* 100 + b* 10+d;
            case  18: 
                return a* 1000 + c* 100 + d* 10+b;
            case  19: 
                return c* 1000 + a* 100 + b* 10+d;
            case  20: 
                return c* 1000 + a* 100 + d* 10+b;
        default : 
            cout << "\nSomething went wrong.\n";
            break;
    }
}
   
   
 