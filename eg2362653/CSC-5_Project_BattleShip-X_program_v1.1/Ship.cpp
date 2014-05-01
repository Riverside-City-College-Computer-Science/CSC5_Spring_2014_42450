#include "Ship.h"

//Ship class
Ship::Ship(){                                   //default constructor for a Ship instance
    //initialization code here
}
Ship::Ship(string type){                        //constructor for a Ship instance
    s_Type = type;                              //initializes Ship name
    isSunk = false;                             //initializes Ship Sunk state to FALSE
}
Ship::~Ship(){                                  //default destructor for Ship object
    //cleanup code here
}
bool Ship::Sunk(){                              //function returning the isSunk member variable
    return isSunk;                              //return isSunk
}
short Ship::R_Size(){                           //return the size of the Range member variable
    return Range.size();
}
vector<string> Ship::Occupy(){                  //returns pointer to the first element of the Range vactor
    return Range;                               //holds character pairs signifying the coordinates occupied by the current Ship instance
}
bool Ship::PollRange(string x_y){               //iterates through the Ship's Range and evaluates whether the string argument is found within the Range
    for(short ctr = 0; ctr < Range.size(); ctr++){      //ctr is a generic counter/iterator variable. Range.size() is the upper bound.
        if(x_y.compare(Range.at(ctr)) == 0){            //compare the string in the x_y string variable to the string in Range[ctr]. Using the vector memthot vector.at() for bounds-checking 
            hits--;                                     //if x_y and Range.at(ctr) are equivalent, decrement the current Ship's hits member variable
            if(hits == 0){                              //checks if the the current Ship's hits is 0
                cout << "You have sunk the enemy " << s_Type << "!!!\n\n";
                isSunk = true;                          //set the current Ship's Sunk state to TRUE
            }
            return true;                                //return TRUE if the current Ship is hit by a shot
        }
    }
    return false;                                       //if x_y is not found in Range, return FALSE
}
//generates the Range of strings that make up the current Ship instance's coordinates or hit points
void Ship::SetHits(short posx, short posy, short hp, char f_pos, string Coords){
    hits = hp;                                          //sets the hits member variable equivalent to the choice of ship type
    short ctr = 0;                                      
    string x_y;
    for(char x = Coords[0], y = Coords[1]; ctr < hits; ctr++){
        x_y = x;
        x_y = x_y + y;
        Range.push_back(x_y);                           //sets the Range of the Ship based on orientation and hitpoints
        if(toupper(f_pos) == 'V'){
            if(posx > 10 - hp) x--;
            else x++;
        }
        else if(toupper(f_pos) == 'H'){
            if(posy > 10 - hp) y--;
            else y++;
        }
    }
}