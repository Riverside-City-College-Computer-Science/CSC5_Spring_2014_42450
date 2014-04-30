#include "Player.h"

//Player class
Player::Player(){
    //initializing code here
}
Player::Player(string Name){
    P_Name = Name;                                      //set the Player name
    FleetCT = 5;                                        //initialize the Fleet Count
    SunkCT = 0;                                         //initialize the Sunk Count to zero
    //create the fleet of Ships
    p_Fleet.push_back(new Ship("Aircraft Carrier"));
    p_Fleet.push_back(new Ship("Battleship"));
    p_Fleet.push_back(new Ship("Destroyer"));  
    p_Fleet.push_back(new Ship("Submarine"));
    p_Fleet.push_back(new Ship("Patrol Boat"));
    //initialize the placement grid and shots grid
    for(int row = 0; row < 10; row++){
        for(int col = 0; col < 10; col++){
            p_Grid[row][col] = '_';
            s_Grid[row][col] = '_';
        }
    }
}
Player::~Player(){                              
    //cleanup code here
}
grid Player::P_Grid(){
    return p_Grid;
}
grid Player::S_Grid(){
    return s_Grid;
}
string Player::Shot(){
    return Coords;
}
string Player::Name(){
    return P_Name;
}
short Player::FleetSize(){
    return FleetCT;
}
short Player::SunkSize(){
    return SunkCT;
}
vector<Ship *> Player::Fleet(){
    return p_Fleet;
}
//Populate the board with your ships
void Player::C_Ships(){
    char s_type = '0';
    short ac_left = 1, bs_left = 1, ds_left = 1, sb_left = 1, pb_left = 1;
    short hp = 0, n_Ships = 1;
    short ctr;
    vector<string> anchor;
    do{
        cout << "Enter the type of ship to place:\n";
        cout << "A. Aircraft Carrier (" << ac_left << " available)\n";
        cout << "B. Battleship (" << bs_left << " available)\n";
        cout << "C. Destroyer (" << ds_left << " available)\n";
        cout << "D. Submarine (" << sb_left << " available)\n";
        cout << "E. Patrol boat (" << pb_left << " available)\n";
        cout << "Enter your choice: ";
        cin >> s_type;
        switch(toupper(s_type)){
            case 'A':{
                if(ac_left > 0){
                    hp = 5;
                    c_Ship = p_Fleet.at(0);
                    PlaceIt(hp);
                    ac_left--;
                    n_Ships++;
                    break;
                }
                else{
                    cout << "None available! Pick again.\n";
                    break;
                }
            }
            case 'B':{
                if(bs_left > 0){
                    hp = 4;
                    c_Ship = p_Fleet.at(1);
                    PlaceIt(hp);
                    bs_left--;
                    n_Ships++;
                    break;
                }
                else{
                    cout << "None available! Pick again.\n";
                    break;
                }
            }
            case 'C':{
                if(ds_left > 0){
                    hp = 3;
                    c_Ship = p_Fleet.at(2);
                    PlaceIt(hp);
                    ds_left--;
                    n_Ships++;
                    break;
                }
                else{
                    cout << "None available! Pick again.\n";
                    break;
                }
            }
            case 'D':{
                if(sb_left > 0){
                    hp = 3;
                    c_Ship = p_Fleet.at(3);
                    PlaceIt(hp);
                    sb_left--;
                    n_Ships++;
                    break;
                }
                else{
                    cout << "None available! Pick again.\n";
                    break;
                }
            }            
            case 'E':{
                if(pb_left > 0){
                    hp = 2;
                    c_Ship = p_Fleet.at(4);
                    PlaceIt(hp);
                    pb_left--;
                    n_Ships++;
                    break;
                }
                else{
                    cout << "None available! Pick again.\n";
                    break;
                }
            }
            default: cout << "Invalid choice! Try again.\n";
        }
    }while(n_Ships <= 5);
}
//Display Board
void Player::Display(grid Grid){
    char x_Coord;
    cout << "**********************\n";
    cout << "|   " << P_Name << "    >>>\n";
    cout << "**********************\n";
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
    for(short ctr = 0; ctr < 10; ctr++){
        switch(ctr){
            case 0: x_Coord = 'A'; break;
            case 1: x_Coord = 'B'; break;
            case 2: x_Coord = 'C'; break;
            case 3: x_Coord = 'D'; break;
            case 4: x_Coord = 'E'; break;
            case 5: x_Coord = 'F'; break;
            case 6: x_Coord = 'G'; break;
            case 7: x_Coord = 'H'; break;
            case 8: x_Coord = 'I'; break;
            case 9: x_Coord = 'J'; break;
            default: cout << "Err..\n"; break;
        }
        cout << x_Coord << "|";
        for(short ctr2 = 0; ctr2 < 10; ctr2++){
            cout << Grid[ctr][ctr2] << "|";
        }
        cout << endl;
    }
    cout << endl;
}
bool Player::GetCoord(){
    bool isValid = false;
    cin >> Coords;
    switch(toupper(Coords[0])){
        case 'A': posx = 0; break;
        case 'B': posx = 1; break;
        case 'C': posx = 2; break;
        case 'D': posx = 3; break;
        case 'E': posx = 4; break;
        case 'F': posx = 5; break;
        case 'G': posx = 6; break;
        case 'H': posx = 7; break;
        case 'I': posx = 8; break;
        case 'J': posx = 9; break;
        default: break;
    }    
    switch(Coords[1]){
        case '0': posy = 0; break;
        case '1': posy = 1; break;
        case '2': posy = 2; break;
        case '3': posy = 3; break;
        case '4': posy = 4; break;
        case '5': posy = 5; break;
        case '6': posy = 6; break;
        case '7': posy = 7; break;
        case '8': posy = 8; break;
        case '9': posy = 9; break;
        default: break;
    }
    if((toupper(Coords[0]) >= 'A')&&(toupper(Coords[0]) <= 'J')&&(Coords[1] >= '0')&&(Coords[1] <= '9') && Coords.size() == 2){
        isValid = true;
    }
    else{
        cout << "Invalid coordinates! Try again.\n";
    }
    return isValid;
}
//Resolve hits
short Player::Impact(string x_y, USS o_Fleet){
    short f_Size = 0;
    bool isHit = false;
    for(int ctr = 0; ctr < o_Fleet.size(); ctr++){
        if(o_Fleet.at(ctr)->Sunk()){
            f_Size++;
        }
        if(o_Fleet.at(ctr)->PollRange(x_y)){                    //allows each Ship instance to check its Range to see if it is hit
            isHit = true;
            cout << "A direct HIT, Admiral! Well Done!\n\n";
            break;
        }
    }
    if(!isHit) cout << "The shot was a MISS, Admiral!\n";
    SunkCT = f_Size;
}
//Place your ships
void Player::PlaceIt(short hp){
    bool isValid = false, isFinal = false;
    char choice, pos;
    string x_y;
    vector<string> Chkpos;
    do{
        cout << "Place vertically or horizontally(V/H)? ";
        cin >> pos;
        if(toupper(pos) != 'H' && toupper(pos) != 'V') cout << "Invalid placement! Try again.\n";
    }while(toupper(pos) != 'H' && toupper(pos) != 'V');
    do{
        do{
            cout << "Enter the coordinates to place your ship: ";
            isValid = GetCoord();
            int ctr = 0;
            for(char x = Coords[0], y = Coords[1]; ctr < hp; ctr++){
                x_y = x;
                x_y = x_y + y;
                Chkpos.push_back(x_y);
                if(toupper(pos) == 'V'){
                    if(posx > 10 - hp) x--;
                    else x++;
                }
                else if(toupper(pos) == 'H'){
                    if(posy > 10 - hp) y--;
                    else y++;
                }
            }
            for(int ctr = 0; ctr < Filled.size(); ctr++){
                x_y = Filled.at(ctr);
                for(int ctr2 = 0; ctr2 < Chkpos.size(); ctr2++){
                    if(x_y.compare(Chkpos.at(ctr2)) == 0){
                        isValid = false;
                        cout << "Position occupied! Try again.\n";
                        Chkpos.clear();
                    }
                }
            }
        }while(!isValid);
        Chkpos.clear();
        char peg;
        cout << "Final choice? ";
        cin >> choice;
        if(toupper(choice) == 'Y') isFinal = true;
        for(short p_Ship = 0; p_Ship < hp; p_Ship++){
            if(isFinal){
                peg = '@';
            }
            else peg = '_';
            if(toupper(pos) == 'V'){
                if(posx > 10 - hp) p_Grid[posx - p_Ship][posy] = peg;
                else p_Grid[posx + p_Ship][posy] = peg;
            }
            else if(toupper(pos) == 'H'){
                if(posy > 10 - hp) p_Grid[posx][posy - p_Ship] = peg;
                else p_Grid[posx][posy + p_Ship] = peg;
            }
        }    
        Display(p_Grid);
    }while(!isFinal);
    c_Ship->SetHits(posx, posy, hp, toupper(pos), Coords);
    Chkpos = c_Ship->Occupy();
    for(int ctr = 0; ctr < hp; ctr++){
        Filled.push_back(Chkpos.at(ctr));
    }
    Chkpos.clear();
}
//Shoot at coordinates
void Player::Volley(grid Grid){
    bool isValid = false, isFinal = false;
    char choice;
    do{
        do{
            cout << "Enter the coordinates to shoot at: ";
            isValid = GetCoord();
            for(int ctr = 0; ctr < Shots.size(); ctr++){
                if(Coords.compare(Shots.at(ctr)) == 0){
                    cout << "Shot has been fired previously! Try again.\n";
                    isValid = false;
                }        
            }
        }while(!isValid);
        s_Grid[posx][posy] = 'o';
        Display(s_Grid);
        cout << "Final choice? ";
        cin >> choice;
        if(toupper(choice) == 'Y'){
            isFinal = true;
            if(Grid[posx][posy] == '@'){
                Grid[posx][posy] = 'X';
                s_Grid[posx][posy] = 'X';
                Display(s_Grid);
            }
            else if(Grid[posx][posy] == '_'){
                Grid[posx][posy] = 'O';
                s_Grid[posx][posy] = '-';            
                Display(s_Grid);
            }
        }
        else{
            s_Grid[posx][posy] = '_';
            Display(s_Grid);
        }
    }while(!isFinal);
    Shots.push_back(Coords);
}
//Checks for the victory conditions. returns TRUE if all 5 Ships are sunk
bool Player::Victory(short s_Sunk, grid c_Grid){
    if(FleetCT == s_Sunk){
        cout << "The enemy fleet has been DECIMATED!!!\n";
        cout << "You have achieved a NAVAL VICTORY! Conratulations,";
        cout << "Admiral " << P_Name << endl;
        Display(c_Grid);
        return true;
    }
    return false;
}