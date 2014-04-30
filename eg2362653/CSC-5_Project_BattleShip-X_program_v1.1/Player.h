/* 
 * File:   Player.h
 * Author: Ezra Guinmapang
 *
 * Created on April 28, 2014, 11:24 PM
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
#include "Ship.h"
using namespace std;

#ifndef PLAYER_H
#define	PLAYER_H

typedef char (*grid)[10];       //typedef for a pointer to an array of arrays of characters
typedef vector<Ship *> (USS);   //typedef for a vector of pointers to a ship instance
class Player{
    private:
        char p_Grid[10][10];            //placement grid for player's ships            
        char s_Grid[10][10];            //shot grid for player's shots
        string P_Name;                  //Player's name
        short FleetCT, SunkCT;          //Player's fleet count, and enemy ships sunk, respectively.
        string Coords;                  //string representing the coordinate pair
        short posx, posy;               //stores the x- and the y-coordinates as integers
        Ship *c_Ship;                   //pointer to a Ship instance
        vector<string> Shots;           //stores the shots fired by Player
        vector<string> Filled;          //stores coordinates that are occupied
        USS p_Fleet;         //stores the Player's fleet of ships
    public:
        Player();               //default constructor for player instance
        Player(string);         //constructor for player instance
        ~Player();              //destructor for player instance
        grid P_Grid();          //access the ship placement grid
        grid S_Grid();          //access the shot placement grid
        USS Fleet();            //access the player's fleet of ships
        string Shot();          //returns the value of Coords
        short FleetSize();      //returns the size of the player's fleet
        short SunkSize();       //returns the number of enemy ships sunk
        string Name();          //returns the Player's name
        bool GetCoord();        //input coordinates
        void C_Ships();               //choose ships to place
        void PlaceIt(short);  //place ships on placement grid
        void Volley(grid);                //fire a shot
        short Impact(string, USS);              //registers hits into the appropriate ship
        void Display(grid);               //display grid
        bool Victory(short, grid);                    //boolean function that evaluates whether or not the current Player wins the game
};

#endif	/* PLAYER_H */

