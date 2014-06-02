/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on June 2, 2014, 7:49 AM
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
    // This part of the final project will be added to the complete project
    srand(time(0));
    const int Rows = 2, Cols = 2;
 
    int usrnum[Rows][Cols] = { { rand() % 10, rand() % 10 }, {rand() % 10, rand() % 10}};
    int x; // x is going to be equal to the number of bulls, since i already used the variable "bulls" previosly in the program
    int y; // y is going to be equal to the number of cows, since i already used the variable "cows" previosly in the program
    usrnum[0][0];
    usrnum[0][1];
    usrnum[1][0];
    usrnum[1][1];
    
   cout<< "\nIs your number " << usrnum[0][0]
        << usrnum[0][1]
        << usrnum[1][0]
        << usrnum[1][1]
        << " ?\n";
   cout << "\nType in number of bulls:";
   cin>> x;
   cout << "Type in the number of cows:";
   cin >> y;
   cout << endl;
   while (x > 4 || x < 0 || y > 4 || y < 0 ){
       cout << "ERROR!! The number of bulls and cows has to be between 0 and 4.";
                cout << "\nType in number of bulls:";
       cin>> x;
       cout << "Type in the number of cows:";
       cin >> y;
       cout << endl;
   }
   while ( ! (x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4)  ){
       cout << "Program should keep repeating!";
       cin >> x;
       cin >> y;
         while (x > 4 || x < 0 || y > 4 || y < 0 ){
             cout << "ERROR!! The number of bulls and cows has to be between 0 and 4.";
             cout << "\nType in number of bulls:";
             cin>> x;
             cout << "Type in the number of cows:";
             cin >> y;
             cout << endl;
   }
   }
   while ( (x==3 && y== 1) || (x==2 && y==2) || (x==1 && y==3) || (x==0 && y==4) ){
       cout << "It works !!\n";
       cin >> x;
       cin >> y;
          while (x > 4 || x < 0 || y > 4 || y < 0 ){
              cout << "ERROR!! The number of bulls and cows has to be between 0 and 4.";
              cout << "\nType in number of bulls:";
              cin>> x;
              cout << "Type in the number of cows:";
              cin >> y;
              cout << endl;
   }
         
   }
   
    return 0;
}
