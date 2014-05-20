/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 16, 2014, 6:41 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "time.h"
using namespace std;

//Global Constant

//Function prototype
char map[40][40] = {"######################################",
                    "#                                  O #",
                    "#                                  O #",
                    "#                                  O #",
                    "#                                  O #",
                    "#                                  O #",
                    "#                                  O #",
                    "#                                  O #",
                    "# >                                O #",
                    "######################################"};

void clear();

//Execution Starts here!!
int main() {
    
    //Declare variables
    int gamespeed = 50;
    int level = 0;
    bool stopgame = false;
    int random;
    int points = 0;
    
    
    while(stopgame == false)
    {
        srand(time(0));
        system("cls");
        for(int y = 0;y <  10; y++)
        {
            void clear();
            cout << map[y] << endl;
        }
        for(int y = 0;y < 40; y++)
        {
            for(int x = 0;x < 40; x++)
            {
                switch(map[y][x])
                {
                    
                    case '>':
                    {
                        if(GetAsyncKeyState(VK_UP) != 0)
                        {
                            int y2 = (y - 1);
                            
                            switch(map[y2][x])
                            {
                                case ' ':
                                {
                                    map[y][x] = ' ';
                                    y -= 1;
                                    map[y2][x] = '>';
                                }break;
                            }
                        }
                        
                        if(GetAsyncKeyState(VK_DOWN) != 0)
                        {
                            int y2 = (y + 1);
                            
                            switch(map[y2][x])
                            {
                                case ' ':
                                {
                                    map[y][x] = ' ';
                                    y += 1;
                                    map[y2][x] = '>';
                                }break;
                                
                                
                            }
                        }
                        if(GetAsyncKeyState(VK_RIGHT) != 0)
                        {
                            int x2 = (x + 1);
                            
                            switch(map[y][x2])
                            {
                                case ' ':
                                {
                                    map[y][x] = ' ';
                                    x += 1;
                                    map[y][x2] = '>';
                                }
                            }
                        }
                        
                        if(GetAsyncKeyState(VK_LEFT) != 0)
                        {
                            int x2 = (x - 1);
                            
                            switch(map[y][x2])
                            {
                                case ' ':
                                {
                                    map[y][x] = ' ';
                                    x -= 1;
                                    map[y][x2] = '>';
                                }
                            }
                        }
                        
                        if(GetAsyncKeyState(VK_SPACE) != 0)
                        {
                            x++;
                            map[y][x] = '-';
                        }
                    }break;
                        
                    case '-':  
                    {
                        map[y][x] = ' ';
                        x++;
                        if(map[y][x] != '#' && map[y][x] != 'O')
                        {
                            map[y][x] = '-';
                        }
                        else if(map[y][x] == 'O')
                        {
                            map[y][x] = ' ';
                        }
                    }break;
                        
                    case 'O':
                     {
                         random = rand() % 10 + 1;
                         
                         if (random == 1)
                         {
                             x--;
                             map[y][x] = '*';
                         }
                     }break;
                    case '*':
                    {
                        map[y][x] = ' ';
                        x--;
                        
                        if(map[y][x] != '#' && map[y][x] != '>')
                        {
                        map[y][x] = '*';
                        }
                        else if(map[y][x] == '>')
                        {
                            map[y][x] = ' ';
                        }
                        
                    }break;
                        
                }   
            }
        }
        Sleep(gamespeed);
    }

    return 0;
}

void clear()
{
    HANDLE hOut;
    COORD Position;
 
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}