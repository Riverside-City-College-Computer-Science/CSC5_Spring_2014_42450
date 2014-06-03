/* 
 * File:   main.cpp
 * Author: saldana
 *
 * Created on June 1, 2014, 12:03 AM
 */

#include <cstdlib>                   //*****This is the second part of my final project, which will be added to the first part on a later date.*****
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

int srtngfnct ( int, int , int , int); 
int srtngfnct2 ( int, int , int , int, int); 


int main(int argc, char** argv) {
   cout <<setw(30)<< "\n****It is now the computers turn to guess your number!****\n";
    cout << "\nSame rules apply: think of a four-digit number whose integers do not repeat, and write it down\n";
    cout <<"on a pice of paper so that you do not forget.\n";
    cout << "The computer will try to guess your number, and";
    cout << " then it will display what it thinks your four-digit number is every time until it guesses your number.\n";
    cout << "In order for the computer to guess your number successfully however, you will need to tell the computer how many bulls and cows it has in its guess.\n";
    cout << "\nThe computer will now think of a number...\n"; 
    
    int x = 0; // x is going to be equal to the number of bulls, since i already used the variable "bulls" previosly in the program
    int y = 0; // y is going to be equal to the number of cows, since i already used the variable "cows" previosly in the program
    int a =0, b=0, c=0, d=0;
    int found = 0; 
    while ( (x != 4) ){
         
         
    srand(time(0));
    const int Rows = 2, Cols = 2;
 
    int usrnum[Rows][Cols] = { { rand() % 10, rand() % 10 }, {rand() % 10, rand() % 10}};
 
    
    
       cout<< "\nIs your number " << usrnum[0][0]
            << usrnum[0][1]
            << usrnum[1][0]
            << usrnum[1][1]
            << " ?\n";
       found = usrnum[0][0] * 1000 + usrnum[0][1] * 100 + usrnum[1][0] * 10 + usrnum[1][1];
       cout << "\nType in number of bulls:";
       cin>> x;
       cout << "Type in the number of cows:";
       cin >> y;
        while (x > 4 || x < 0 || y > 4 || y < 0 ){
           cout << "\nERROR!! The number of bulls and cows has to be between 0 and 4.";
                    cout << "\nType in number of bulls:";
           cin>> x;
           cout << "Type in the number of cows:";
           cin >> y;
           cout << endl;
       }
           
       cout << endl;
    
       while ( ! ((x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4))    ){
           int fndnum[Rows][Cols] = { { rand() % 10, rand() % 10 }, {rand() % 10, rand() % 10}};
                cout<< "\nIs your number " << fndnum[0][0]
                    << fndnum[0][1]
                    << fndnum[1][0]
                    << fndnum[1][1]
                    << " ?\n";
                found = fndnum[0][0] * 1000 + fndnum[0][1] * 100 + fndnum[1][0] * 10 + fndnum[1][1];
               cout << "\n\nType in number of bulls:";
               cin>> x;
               cout << "Type in the number of cows:";
               cin >> y;
               if (x==4)
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

       // once this while construct executes, it will arrange the users four digit number until it finds it
       while ( (x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4) ){
           /*for (int count = 0; count < 4 ; count ++ ){
                  cout<< "\nIs your number " << found;
                a = found / 1000;         // allows us to check first digit
                    found = found % 1000; //makes guess a three digit number
                b = found / 100;          //allows us to check second digit
                    found  = found % 100; //makes guess a two digit number
                c = found / 10;           // allows us to check third digit
                    found = found % 10;   // makes guess a one digit number
                d  = found;               // allows us to check fourth digit
                
                cout<< " ---->" << a << "       " << b << "       " << c << "       "<< d <<  endl;
                found  = srtngfnct(a,b,c,d);
    
               
           }
           */
           for ( int i= 1 ; i <=20 ; i ++ ){
               int a = 4, b = 3, c = 2, d = 1;
           cout << srtngfnct2(a,b,c,d,i) << endl; 
           }
           cout << "It works !!\n";
           x = 4; y = 0;
           
           //Checks range of x and y (0,4)
              while (x > 4 || x < 0 || y > 4 || y < 0 ){
                  cout << "\nERROR!! The number of bulls and cows has to be between 0 and 4.";
                  cout << "\nType in number of bulls:";
                  cin>> x;
                  cout << "Type in the number of cows:";
                  cin >> y;
                  cout << endl;
         }

       }
       
    }
       cout << "End OF Program.";
       
    
        
    return 0;
}

int srtngfnct(int a, int b, int c, int d){
    int value = b*1000 + c*100 + d*10 + a; 
    return value;
    
    
}
int srtngfnct2(int a, int b, int c, int d, int i ){
    
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
                
    }
}