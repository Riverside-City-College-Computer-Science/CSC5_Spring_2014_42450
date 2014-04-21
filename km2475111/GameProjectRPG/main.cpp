/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 9, 2014, 7:58 AM
 * RPG game
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;

//Global constants

//Function Prototypes
void nKnight(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR);//generate stats for new knight
void nWizard(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR);//generate stats for new wizard
void nGlditr(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR);//generate stats for new gladitor
void nCleric(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR);//generate stats for new cleric
void nOnKght(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR);//generates stats for new onion knight-
                                     //random extremes are common
void doBattle(short pATK, short pMATK,
              short &eHP, short eDEF,short eSPR);//calculates battle damage
void recvr(short &pHP,short pSPR);//calculates unit healing
void emySpwn(string &mnstNme,short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR, short WAVE);//spawn enemy - random stats
void emyDmg(short &pHP,short pDEF, short pSPR,
            short eATK,short eMATK);//damage enemy deals
void emyHeal(short &eHP,short eSPR, short WAVE);//amount enemy revocers
//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize rand
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    bool gamExit=false;
    string plyrNme,clssTyp,monster;//general info
    short wave=0,choice,cmnd,pHp=0,pAtk=0,pDef=0,pMatk=0,pSpr=0,//player stats
          cntinue,eTurn,eHp=0,eAtk=0,eDef=0,eMatk=0,eSpr=0;//enemy stats
    //loop until game exit
    while(!gamExit){
        /////////Start adventure!/////////
        cout<<" +    FANTASY SURVIVAL     "<<endl
            <<"            <@@>        * "<<endl
            <<"             ||    +       "<<endl
            <<"    *        ||            "<<endl
            <<"        o===<@@>===o    *  "<<endl
            <<"            |  |           "<<endl
            <<"     +      |  |   *       "<<endl
            <<"            |  |        *  "<<endl
            <<"  *         |  |           "<<endl
            <<"            |  |     +     "<<endl
            <<"         *  |  |           "<<endl
            <<"    o.  .,#/^^O;WX//^',,,  "<<endl
            <<" o.x#//##//o^^^#cVw#W;,,,o."<<endl;
        //explain game
        cout<<"This game is an RPG 50 wave survival game!"<<endl
            <<"How the game works: "<<endl
            <<"One turn = A Player action then an Enemy action."<<endl
            <<"The player can attack or heal on their turn."<<endl<<endl
            <<"Try and survive 50 enemies in a row!"<<endl
            <<"But beware, every 10 waves a boss will appear!"<<endl
            <<"Oh...and you can't flee from this. >:) "<<endl
            <<"///////////////////////////////"<<endl
            <<"Let's begin!!!"<<endl<<endl;
        //ask user for name and class choice
        cout<<"What is your name? ";
        cin>>plyrNme;
        cout<<endl;
        //offer list of four classes to play
        cout<<"So "<<plyrNme<<", please pick a class type!"<<endl
            <<"//////////////////////////////"<<endl
            <<"1. Knight - A strong Physical Attacker"<<endl
            <<"2. Wizard - A strong Magical Attacker" <<endl
            <<"3. Gladiator - A Heavy Defender, can take a hit"<<endl
            <<"4. Cleric - A powerful Healer, resists Magic"<<endl
            <<"5. Onion Knight - A special warrior, stats unknown..."<<endl
            <<"//////////////////////////////"<<endl;
        cin>>choice;
        while(choice!=1&&choice!=2&&choice!=3&&choice!=4&&choice!=5){
                cout<<"Pick a proper action. Try again: ";
                cout<<"///////////////////////////////"<<endl;
                cin>>choice;
            }
        /////////operate menu for player class creation////////
        switch(choice){
            case 1:{
                //Knight
                clssTyp="Knight";
                cout<<"You chose "<<clssTyp<<"!"<<endl;
                cout<<"///////////////////////////////"<<endl;
                //generate stats
                nKnight(pHp,pAtk,pDef,pMatk,pSpr);
                break;
            }
            case 2:{
                //Wizard
                clssTyp="Wizard";
                cout<<"You chose "<<clssTyp<<"!"<<endl;
                cout<<"///////////////////////////////"<<endl;
                //generate stats
                nWizard(pHp,pAtk,pDef,pMatk,pSpr);
                break;
            }
            case 3:{
                //Gladiator
                clssTyp="Gladiator";
                cout<<"You chose "<<clssTyp<<"!"<<endl;
                cout<<"///////////////////////////////"<<endl;
                //generate stats
                nGlditr(pHp,pAtk,pDef,pMatk,pSpr);
                break;
            }
            case 4:{
                //Cleric
                clssTyp="Cleric";
                cout<<"You chose "<<clssTyp<<"!"<<endl;
                cout<<"///////////////////////////////"<<endl;
                //generate stats
                nCleric(pHp,pAtk,pDef,pMatk,pSpr);
                break;
            }
            case 5:{
                //Onion Knight
                clssTyp="Onion Knight";
                 cout<<"You chose "<<clssTyp<<"!"<<endl;
                cout<<"///////////////////////////////"<<endl;
                //generate stats
                nOnKght(pHp,pAtk,pDef,pMatk,pSpr);
                break;
            }
            default:{
                cout<<"Should never get here!"<<endl;
            }
        }
        //loop while player is alive e.i. hp!=0
        while(pHp>0){
            //generate enemy
            if(eHp<=0){
                wave++;
                emySpwn(monster,eHp,eAtk,eDef,eMatk,eSpr,wave);
            }
            else{}
            //player turn
            cout<<"Wave: "<<wave<<endl
                <<"Beware! A wild "<<monster<<" is attacking!"<<endl
                //create user interface
                <<left
                <<plyrNme<<"'s HP = "<<pHp
                <<right<<setw(15)
                <<monster<<"'s HP = "<<eHp<<endl
                <<"///////////////////////////////"<<endl
                <<"What would you like to do?"<<endl
                <<"1. Attack"<<endl
                <<"2. Heal"<<endl
                <<"3. Flee"<<endl
                <<"///////////////////////////////"<<endl;
            cin>>cmnd;
            while(cmnd!=1&&cmnd!=2&&cmnd!=3){
                cout<<"Pick a proper action. Try again: ";
                cin>>cmnd;
                cout<<"///////////////////////////////"<<endl;
            }
            //induce menu based on command
            switch(cmnd){
                case 1:{
                    doBattle(pAtk,pMatk,eHp,eDef,eSpr);
                    cout<<"///////////////////////////////"<<endl;
                    break;
                }
                case 2:{
                    recvr(pHp,pSpr);
                    cout<<"///////////////////////////////"<<endl;
                    break;
                }
                case 3:{
                    cout<<"You can't run from this battle!"<<endl
                        <<"///////////////////////////////"<<endl;
                    break;
                }
                default:{
                    cout<<"Should never get here!"<<endl;
                }
            }
            
            //enemy turn
            //determines action of enemy
            if(eHp<=0){
                eTurn=3;
            }
            else if((eHp<(eHp/2))&&eHp>0){eTurn=2;}
            else{eTurn=1;}
            switch(eTurn){
                case 1:{
                    emyDmg(pHp,pDef,pSpr,eAtk,eMatk);
                    cout<<"///////////////////////////////"<<endl;
                    break;
                }
                case 2:{
                    emyHeal(eHp,eSpr,wave);
                    cout<<"///////////////////////////////"<<endl;
                    break;
                }
                case 3:{
                   cout<<monster<<" has been slain by "<<plyrNme<<"!"<<endl
                       <<"Watch out! Another monster approaches!!"<<endl;
                   cout<<"///////////////////////////////"<<endl;
                   break;
                }
                default:{
                    cout<<"Should never get here!"<<endl;
                }
            }
        }
        //check if player is alive
        if(pHp<=0){
            cout<<plyrNme<<"'s HP reached zero!"<<endl<<endl
                <<"GAME OVER"<<endl<<endl
                <<"Best Record: "<<wave<<" waves!"<<endl<<endl
                <<"To start over, press 1."<<endl
                <<"Press any other key to quit."<<endl;
            cout<<"///////////////////////////////"<<endl;
            cin>>cntinue;
            switch(cntinue){
                case 1:{
                    //reset player HP and reset wave counter
                    cout<<"///////////////////////////////"<<endl;
                    cout<<"Loading character creation..."<<endl;
                    cout<<"///////////////////////////////"<<endl;
                    eHp=0;
                    pHp=100;
                    wave=0;
                    break;
                }
                default:{
                    cout<<endl<<"///////////////////////////////"<<endl;
                    cout<<"Thanks for playing!"<<endl;
                    cout<<"///////////////////////////////"<<endl;
                    gamExit=true;
                }
            }
        }else if(wave>=50){
            //beaten game, exit loop
            cout<<"Congratulations! You've survived!"<<endl;
            cout<<plyrNme<<"'s Best Record: "<<wave<<" waves!"<<endl<<endl
                <<"To start over, press 1."<<endl
                <<"Press any other key to quit."<<endl;
            cout<<"///////////////////////////////"<<endl;
            cin>>cntinue;
            switch(cntinue){
                case 1:{
                    //reset player HP and reset wave counter
                    cout<<"///////////////////////////////"<<endl;
                    cout<<"Loading character creation..."<<endl;
                    cout<<"///////////////////////////////"<<endl;
                    eHp=0;
                    pHp=100;
                    wave=0;
                    break;
                }
                default:{
                    cout<<endl<<"///////////////////////////////"<<endl;
                    cout<<"Thanks for playing!"<<endl;
                    cout<<"///////////////////////////////"<<endl;
                    gamExit=true;
                }
            }
        }
    }
    //exit stage right!
    return 0;
}
void nKnight(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR){//generate stats for new knight
    HP=250;//base hp
    ATK=rand()%(26-19)+19;//generates attack from 19 to 25
    DEF=rand()%(21-15)+15;//generates defense from 15 to 20
    MATK=rand()%(16-9)+9;//generates magic defense from 9 to 15
    SPR=rand()%(11-7)+7;//generates M.defense + healing factor from 7 to 10
    //tell player stats
    cout<<"Here are your stats:"<<endl
        <<"Health: "<<HP<<endl
        <<"Attack: "<<ATK<<endl
        <<"Defense: "<<DEF<<endl
        <<"Intelligence: "<<MATK<<endl
        <<"Spirit: "<<SPR<<endl;
    cout<<"///////////////////////////////"<<endl;
}
void nWizard(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR){//generate stats for new wizard
    HP=250;//hp=250
    ATK=rand()%(11-5)+5;//generates attack
    DEF=rand()%(16-9)+9;//generates defense
    MATK=rand()%(29-25)+25;//generates magic defense
    SPR=rand()%(19-14)+14;//generates M.defense + healing factor
    cout<<"Here are your stats:"<<endl
        <<"Health: "<<HP<<endl
        <<"Attack: "<<ATK<<endl
        <<"Defense: "<<DEF<<endl
        <<"Intelligence: "<<MATK<<endl
        <<"Spirit: "<<SPR<<endl;
    cout<<"///////////////////////////////"<<endl;
}
void nGlditr(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR){//generate stats for new gladitor
    HP=300;//hp=300
    ATK=rand()%(20-17)+17;//generates attack
    DEF=rand()%(29-25)+25;//generates defense
    MATK=rand()%(16-10)+10;//generates magic defense
    SPR=rand()%(11-7)+7;//generates M.defense + healing factor
    cout<<"Here are your stats:"<<endl
        <<"Health: "<<HP<<endl
        <<"Attack: "<<ATK<<endl
        <<"Defense: "<<DEF<<endl
        <<"Intelligence: "<<MATK<<endl
        <<"Spirit: "<<SPR<<endl;
    cout<<"///////////////////////////////"<<endl;
}
void nCleric(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR){//generate stats for new rogue
    HP=250;//hp=250
    ATK=rand()%(11-5)+5;//generates attack
    DEF=rand()%(15-10)+10;//generates defense
    MATK=rand()%(23-19)+20;//generates magic defense
    SPR=rand()%(29-25)+25;//generates M.defense + healing factor
    cout<<"Here are your stats:"<<endl
        <<"Health: "<<HP<<endl
        <<"Attack: "<<ATK<<endl
        <<"Defense: "<<DEF<<endl
        <<"Intelligence: "<<MATK<<endl
        <<"Spirit: "<<SPR<<endl;
    cout<<"///////////////////////////////"<<endl;
}
void nOnKght(short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR){//generates stats for new onion knight-
                                     //random extremes are common
    HP=200;//hp=200
    //stats are extreme! Very high or low
    ATK=rand()%(29-5)+5;//generates attack
    DEF=rand()%(29-5)+5;//generates defense
    MATK=rand()%(29-5)+5;//generates magic defense
    SPR=rand()%(29-5)+5;//generates M.defense + healing factor
    cout<<"Here are your stats:"<<endl
        <<"Health: "<<HP<<endl
        <<"Attack: "<<ATK<<endl
        <<"Defense: "<<DEF<<endl
        <<"Intelligence: "<<MATK<<endl
        <<"Spirit: "<<SPR<<endl;
    cout<<"///////////////////////////////"<<endl;
}
void doBattle(short pATK, short pMATK,
              short &eHP, short eDEF,short eSPR){//calculates battle damage
    short tmpResp;
    //ask for attack type
    cout<<"What would you like to use?"<<endl
        <<"1. Sword"<<endl
        <<"2. Magic"<<endl;
    cout<<"///////////////////////////////"<<endl;
    cin>>tmpResp;
    while(tmpResp!=1&&tmpResp!=2){    
        cout<<"Please choose a proper action!"<<endl
            <<"Try again.";
        cout<<"///////////////////////////////"<<endl;
        cin>>tmpResp;
    }
    //determine damage
    if(tmpResp==1){
        //calculate physical damage
        short dmgMax=(pATK-eDEF)*3,dmgLow=(pATK-(eDEF/2))*2;
        if(dmgMax<=0||dmgLow<=0){
            if(dmgMax<=0){
                dmgMax=(pATK+eDEF)/2;
                dmgLow=(pATK+eDEF)/3;
            }else{}
        }else{}
        short totDmg=rand()%(dmgMax-dmgLow)+dmgLow;//difference*3
        if(totDmg<=0){totDmg=(dmgMax+dmgLow)/2;}//make sure to turn negatives/zero to 1
        else{}
        eHP-=totDmg;//subtract damage from enemy
        cout<<"You did "<<totDmg<<" physical damage!"<<endl;
    }
    else if(tmpResp==2){
        //calculate magic damage
        short dmgMax=(pMATK-eSPR)*3,dmgLow=(pMATK-(eSPR/2))*2;
        if(dmgMax<=0||dmgLow<=0){
            if(dmgMax<=0){
                dmgMax=(pMATK+eSPR)/2;
                dmgLow=(pMATK+eSPR)/3;
            }else{}
        }else{}
        short totDmg=rand()%(dmgMax-dmgLow)+dmgLow;//difference*3
        if(totDmg<=0){totDmg=(dmgMax+dmgLow)/2;}//make sure to turn negatives/zero to 1
        else{}
        eHP-=totDmg;//subtract damage from enemy
        cout<<"You did "<<totDmg<<" magic damage!"<<endl;
    }
    else{}
}
void recvr(short &pHP,short pSPR){//calculates unit healing
    //recover a random amount with small deviation
    short tmp,max=pSPR,low=(pSPR/2);
    tmp=(rand()%(max-low)+low)+20;
    pHP+=tmp;
    if(pHP>250){pHP=250;}//sets health to 100 if greater
    else{}
    cout<<"You recovered "<<tmp<<" HP!"<<endl
        <<"Your HP is at "<<pHP<<"."<<endl;
}
void emySpwn(string &mnstNme,short &HP,short &ATK,short &DEF,
             short &MATK,short &SPR, short WAVE){//spawn enemy - random stats
    //generate boss monster when wave is in increments of 10
    if(WAVE==10||WAVE==20||WAVE==30||WAVE==40||WAVE==50){
        //boss name
        short temp=rand()%3+1;
        if(temp==1){mnstNme="Bahamut";}
        else if(temp==2){mnstNme="Titan";}
        else if(temp==3){mnstNme="Garuda";}
        else{mnstNme="Ifrit";}
        //boss stats
        HP=250;//hp=200 b/c it is a boss
        ATK=rand()%(29-25)+25;//generates attack
        DEF=rand()%(29-25)+25;//generates defense
        MATK=rand()%(29-25)+25;//generates magic defense
        SPR=rand()%(29-25)+25;//generates M.defense + healing factor
    }
    else{
        //generate generic monster type
        short temp=rand()%5+1;
        if(temp==1){mnstNme="Goblin";}
        else if(temp==2){mnstNme="Orc";}
        else if(temp==3){mnstNme="Wolf";}
        else if(temp==4){mnstNme="Tiger";}
        else{mnstNme="Fairy";}
        //generate generic monster stats
        HP=100;//hp=100
        ATK=rand()%(25-6)+6;//generates attack
        DEF=rand()%(25-6)+6;//generates defense
        MATK=rand()%(25-6)+6;//generates magic defense
        SPR=rand()%(25-6)+6;//generates M.defense + healing factor
    }
    
}
void emyDmg(short &pHP,short pDEF, short pSPR,
            short eATK,short eMATK){//damage enemy deals
    //calculate damage reduction
    short tmpResp;
    //use rand for enemy decision
    tmpResp=rand()%2+1;
    //determine damage
    if(tmpResp==1){
        //calculate physical damage
        short dmgMax=(eATK-pDEF)*3,dmgLow=(eATK-(pDEF/2))*2;
        if(dmgMax<=0||dmgLow<=0){
            if(dmgMax<=0){
                dmgMax=(eATK+pDEF)/3;
                dmgLow=(eATK+pDEF)/4;
            }else{}
        }else{}
        short totDmg=rand()%(dmgMax-dmgLow)+dmgLow;//difference*3
        if(totDmg<=0){totDmg=(dmgMax+dmgLow)/2;}//make sure to turn negatives/zero to 1
        else{}
        pHP-=totDmg;//subtract damage from player
        cout<<"Enemy did "<<totDmg<<" physical damage!"<<endl;
    }
    else if(tmpResp==2){
        //calculate magic damage
        short dmgMax=(eMATK-pSPR)*3,dmgLow=(eMATK-(pSPR/2))*2;
        if(dmgMax<=0||dmgLow<=0){
            if(dmgMax<=0){
                dmgMax=(eMATK+pSPR)/3;
                dmgLow=(eMATK+pSPR)/4;
            }else{}
        }else{}
        short totDmg=rand()%(dmgMax-dmgLow)+dmgLow;//difference*3
        if(totDmg<=0){totDmg=(dmgMax+dmgLow)/2;}//make sure to turn negatives/zero to 1
        else{}
        pHP-=totDmg;//subtract damage from player
        cout<<"Enemy did "<<totDmg<<" magic damage!"<<endl;
    }
    else{}
}
void emyHeal(short &eHP,short eSPR, short WAVE){//amount enemy recovers
    //recover a random amount with small deviation
    short tmp,max=eSPR,low=(eSPR/2);
    tmp=(rand()%(max-low)+low)+15;
    eHP+=tmp;
    if(WAVE==10||WAVE==20||WAVE==30||WAVE==40||WAVE==50&&eHP>250){
        if(eHP>250){eHP=250;}//resets boss hp to 200 if greater
        else{}
    }
    else if(eHP>250){
        eHP=100;//resets health to 100 if greater and normal enemy
    }
    else{}
    cout<<"Enemy recovered "<<tmp<<" HP!"<<endl;
}