/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 * Created on March 29, 2014, 6:31 pM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
//Function Prototypes
//Executioner 
int main(int argc, char** argv) {
    //Variables
    unsigned short int bDay, month, julian;
    string Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio,
            Sagittarius, Capricorn, Aquarius, Pisces;
    Aries = "You're an Aries!\n"
            "A keen ability on your part to blend the worlds of intellect\n"
            "and intuition could well surface today, Aries. The ability to\n"
            "focus both these methods of perception into material reality\n"
            "is apt to give a boost to your career and educational efforts.\n"
            "It also could enhance your romantic life. Anything begun or \n"
            "completed today has an advantage. Try to look closely at this\n"
            "new tendency and make it last. It's definitely a plus!";
    Taurus = "You're a Taurus!\n"
             "Relationships of all kinds become stronger and more enduring\n"
             "today, Taurus. Successes boost the strength of business\n"
             "partnerships; love relationships advance to the next level of\n"
             "commitment. Bonds of any kind formed now are likely to be strong\n"
             "ones, marked by honesty, loyalty, and affection. This is a great\n"
             "day to get together with anyone close to you; your relationship\n"
             "is very likely to grow because of it. Enjoy your day.";
    Gemini = "You're a Gemini!\n"
             "An interest in health and nutrition could come to the surface \n"
             "for you, Gemini. New discoveries regarding the benefits of certai\n"
             "nutrients, exercise programs, or other forms of alternative \n"
             "could attract your attention. You might want to attend a lecture\n"
             "of some kind in order to learn more about it. You'll probably\n"
             "stick with any new program begun now, so go for it. Dare to\n"
             "strive for optimal health";
    Cancer = "You're a Cancer!\n"
             "Have you been thinking about taking a course in one of the arts,\n"
             "Cancer? Whether your preference is painting, music, drama, dance,\n"
             "or creative writing, if you commit now, you'll probably continue\n"
             "with it. The practical arts of cooking, building, or interior\n"
             "decoration are also possibilities. Whatever it is, it won't be\n"
             "quickly abandoned. If you begin with the idea of eventually doing\n"
             "it professionally, chances are you will. Good luck!";
    Leo =   "You're a Leo!\n"
            "If you own your own home, Leo, you may learn today that its value\n"
            "has increased substantially. If you don't own a home but want to\n"
            "buy one, this is the time to start looking. Any investments made\n"
            "now, particularly in land, will probably be solid and apt to gain\n"
            "in value, although results might take some time to materialize.\n"
            "Carefully consider all contingencies before committing, however.\n"
            "This isn't the time to act impulsively.";
    Virgo = "You're a Virgo!\n"
            "Some down-to-Earth conversations with a love partner could result\n"
            "in advancing the relationship to the next level of commitment,\n"
            "Virgo. The communication should be loving and supportive, but\n"
            "practical matters like money, work, and personal habits could be\n"
            "discussed. You'll probably find that you and your partner are more\n"
            "compatible than you thought. Move ahead, but with caution. Love is\n"
            "the beacon guiding most of us through life.";
    Libra = "You're a Libra!\n"
            "The desire to make a particular purchase could have you reworking\n"
            "your budget today, Libra. This is a good time to do this, as your\n"
            "business and money sense are operating at a high level, and you're\n"
            "likely to be savvier about finance than usual.";
    Scorpio = "You're a Scorpio!\n"
            "Suddenly you seem more glamorous than usual, Scorpio. You may exert\n"
            "a mysterious appeal that in the 1920s was called \"it.\"Current and\n"
            "potential love partners may take a second look and be intrigued.";
    Sagittarius = "You're a Sagittarius!\n" 
            "Your visionary tendencies are in the ascendant today, Sagittarius,\n"
            "although they take more of a practical than mystical bent. You \n"
            "might look at your living room or backyard and suddenly find\n"
            "yourself redecorating it in your mind's eye.";
    Capricorn = "You're a Capricorn!\n"
            "As a person who enjoys being gregarious and outgoing, days like\n"
            "this provide a wonderful outlet for your energy. You might spend\n"
            "a lot of time with your family today, Capricorn, but you'll also\n"
            "probably touch base with many others.";
    Aquarius = "You're an Aquarius!\n"
            "Corporate kudos and increased income that you may have been \n" 
            "working toward for a long time may finally manifest today, \n"
            "Aquarius. Your effort and energy haven't gone unnoticed.";
    Pisces =  "You're a Pisces!\n"
            "This is a great day to deal with legal matters of any kind, \n"
            "Pisces, including plans for a wedding, if one is in the offing!\n"
            "Your financial situation should be thriving and stable, and \n"
            "long-term educational goals may come to the forefront.";
    //man this stuff is dumb
    //Prompt for input
    cout<<"Please enter just the Month of your birthday."<<endl;
    cout<<"Numbers 1-12 will suffice for the month: "<<endl;
    cin>>month;
    switch (month) {
        case 1: month=1;break;
        case 2: month=32;break;
        case 3: month=60;break;
        case 4: month=91;break;
        case 5: month=121;break;
        case 6: month=152;break;
        case 7: month=182;break;
        case 8: month=213;break;
        case 9: month=244;break;
        case 10: month=274;break;
        case 11: month=305;break;
        case 12: month=355;break;
    }
    cout<<"NOTE: Non-Leap year"<<endl;
    cout<<"Please enter the day of the month for your birthday: "<<endl;
    cin>>bDay;
    julian=month+bDay;
    cout<<"Julian date: "<<julian<<endl;
    //Aries
    if ((julian>=80)&&(julian<=109)) {
        cout<<Aries<<endl;
        if ((julian==80)||(julian==81)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
        else if ((julian==108)||(julian==109)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
    }
    //Taurus
    else if ((julian>=110)&&(julian<=140)) {
        cout<<Taurus<<endl;
        if ((julian==110)||(julian==111)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
        else if ((julian==139)||(julian==140)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
    }
    //Gemini
    else if ((julian>=141)&&(julian<=172)) {
        cout<<Gemini<<endl;
        if ((julian==141)||(julian==142)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Taurus<<endl;
        }
        else if ((julian==171)||(julian==172)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
    }
    //Cancer
    else if ((julian>=173)&&(julian<=203)) {
        cout<<Cancer<<endl;
        if ((julian==173)||(julian==174)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Gemini<<endl;
        }
        else if ((julian==202)||(julian==203)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
    }
    //Leo
    else if ((julian>=204)&&(julian<=234)) {
        cout<<Leo<<endl;
        if ((julian==204)||(julian==205)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Cancer<<endl;
        }
        else if ((julian==233)||(julian==234)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
    }
    else if ((julian>=235)&&(julian<=265)) {
        cout<<Virgo<<endl;
        if ((julian==235)||(julian==236)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Leo<<endl;
        }
        else if ((julian==264)||(julian==265)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
    }
    else if ((julian>=266)&&(julian<=295)) {
        cout<<Libra<<endl;
        if ((julian==266)||(julian==267)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Virgo<<endl;
        }
        else if ((julian==294)||(julian==295)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
    }
    //Scorpio
    else if ((julian>=296)&&(julian<=325)) {
        cout<<Scorpio<<endl;
        if ((julian==296)||(julian==297)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Libra<<endl;
        }
        else if ((julian==324)||(julian==325)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
    }
    else if ((julian>=326)&&(julian<=355)) {
        cout<<Sagittarius<<endl;
        if ((julian==326)||(julian==327)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Scorpio<<endl;
        }
        else if ((julian==354)||(julian==355)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
    }
    else if (((julian>=356)&&(julian<=365))||((julian>=1)&&(julian<=19))) {
        cout<<Capricorn<<endl;
        if ((julian==356)||(julian==357)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Sagittarius<<endl;
        }
        else if ((julian==18)||(julian==19)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
    }
    else if ((julian>=20)&&(julian<=49)) {
        cout<<Aquarius<<endl;
        if ((julian==20)||(julian==21)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Capricorn<<endl;
        }
        else if ((julian==48)||(julian==49)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Pisces<<endl;
        }
    }
    else if ((julian>=50)&&(julian<=79)) {
        cout<<Pisces<<endl;
        if ((julian==50)||(julian==51)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aquarius<<endl;
        }
        else if ((julian==78)||(julian==79)) {
            cout<<"You're on the \"CUSP\"."<<endl;
            cout<<"Here's the other closest horoscope to you"<<endl;
            cout<<Aries<<endl;
        }
    }
    return 0;
}

