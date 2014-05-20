/* 
 * File:   Ship.h
 * Author: Ezra Guinmapang
 *
 * Created on April 28, 2014, 11:24 PM
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
using namespace std;

#ifndef SHIP_H
#define	SHIP_H

class Ship{
    private:
        bool isSunk;            //stores the status of the ship
        short hits;             //number of hitpoints left on the ship
        string s_Type;          //stores the type of ship
        vector<string> Range;   //stores the coordinates of the ship on the grid
    public:
        Ship();                         //default constructor for the ship object
        Ship(string);                   //constructor for the ship object
        ~Ship();                        //destructor for the ship object
        bool Sunk();                    //returns the status of a ship
        short R_Size();                 //returns the size of the vector holding the ship's placement coordinates
        vector<string> Occupy();        //returns the Range of the ship
        bool PollRange(string);         //polls the range to see if the ship is hit
        void SetHits(short, short, short, char, string);        //sets the ship's placement coordinates
};

#endif	/* SHIP_H */

