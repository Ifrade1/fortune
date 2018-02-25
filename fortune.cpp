/*
 * fortunecookiegenerator.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: warri
 */
#include <iostream>
using namespace std;

int main(){
    string ad1= " ";
    string ad2= " ";
    string ad3= " ";
    string verb1 = " ";
    string verb2 = " ";
    string verb3 = " ";
    string noun1 = " ";
    string noun2 = " ";
    string noun3 = " ";
    string noun4 = " ";
    string rhy1 = " ";
    string rhy2 = " ";
    string color1 = " ";
    string bodypart1 = " ";
    string pnoun = " ";
    string adverb1 = " ";
    string place1;
    cout<<"Welcome to fortune cookie generator!"  << endl;
    cout<< "Pick a random number between 1 and 60! ";
//exception catch
    int input;
    cin >> input;
    switch(input){
    case 1:
        cout<< "Give me 3 adjectives and a noun: ";
        cin >> ad1 >> ad2 >> ad3 >> noun1;
        cout << "A " <<ad1 << " " << ad2 <<  " and " <<ad3 << noun1 << " will be coming into your life." << endl;;
        break;
    case 2:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout << "A dubious " <<noun2 << " may be an " << noun1 <<" in camouflage." << endl;
        break;
    case 3:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout << "A faithful " << noun1 << " is a strong " <<noun2 << "."  << endl;
        break;
    case 4:
       cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout << "A feather in the "<< noun1<<" is better than a "<< noun1 <<" in the air." << endl;
        break;
    case 5:
        cout << "Give me a noun." << endl;
        cin >> noun1;
        cout<< "A fresh " << noun1 << " will put you on your way." << endl;
        break;
    case 6:
        cout << "Give me 3 nouns." << endl;
        cin >> noun1 >> noun2 >> noun3;
        cout<< "A "<< noun1 << " asks only for your " << noun2 << "not your " << noun3 << "." <<endl;
        break;
    case 7:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout<< "A " << noun1 << " is a " << noun2 << " you give yourself." << endl;
        break;
    case 8:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout << "A " << noun1 <<  " not only will lose what he has, but also will lose" << noun2 << endl;
        break;
    case 9:
        cout << "Give me a color, a noun and a body part.";
        cin >> color1 >> noun1 >> bodypart1;
        cout<< "A " << color1 << " egg of " << noun1 << " will fall into your " << bodypart1 <<" this month." << endl;
        break;
    case 10:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout<< "A good "<< noun1 <<" is often more important than a passionate " << noun2 << "." << endl;
        break;
    case 11:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout << "A good time to finish up old "<< noun1 << ". " << endl;
        break;
    case 12:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout<< "A " << noun2 << " is " << noun1 << " trying to tell you something." << endl;
        break;
    case 13:
        cout << "Give me a noun." << endl;
        cin >> noun1;
        cout<< "A lifetime " << noun1 <<" shall soon be made." << endl;
        break;
    case 14:
          cout << "Give me a noun." << endl;
        cin >> noun1;
        cout<< "A lifetime of "<< noun1 <<" lies ahead of you." << endl;
        break;
    case 15:
        cout << "Give me 2 nouns and a adjective, in that order" << endl;
        cin >> noun1 >> noun2 >> ad1;
        cout<< "A light " <<noun1 <<" carries you through all the hard "<<noun2 <<"." << endl;
        break;
    case 16:
        cout << "Give me a noun." << endl;
        cin >> noun1;
        cout<< "A new "<<noun1 <<" will come with the new year." << endl;
        break;
    case 17:
         cout << "Give me a noun, and a verb in that order." << endl;
         cin >> noun1 >> verb1;
        cout<< "A " <<noun1 <<" is never too old to  "<< verb1 << ". " << endl;
        break;
    case 18:
         cout << "Give me 2 nouns, and two rhyming nouns, in that order." << endl;
        cin >> noun1 >> noun2 >> rhy1 >> rhy2;
        cout<< "A person of " << noun1 << " and not "<<rhy1<<" is like a " << noun2 <<" full of rhy1" << endl;
        break;
    case 19:
        cout << "Give me a noun." << endl;
        cout<< "A pleasant surprise is waiting for you." << endl;
        break;
    case 20:
         cout << "Give me 2 nouns." << endl;
         cin >> noun1 >> noun2;
        cout<< "A short "<< noun1 <<" is usually better than a long "<< noun2 <<" any day." << endl;
        break;
    case 21:
         cout << "Give me 2 nouns" << endl;
         cin >> noun1 >> noun2;
        cout<< "A "<< noun1 <<" is your personal "<< noun2 <<"." << endl;
        break;
    case 22:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout<< "A smooth long "<< noun1 <<"! Great "<< noun2 <<"." << endl;
        break;
    case 23:
         cout << "Give me a noun and an adjective" << endl;
         cin >> noun1 >> ad1;
        cout<< "A soft "<< noun1 <<" may be awfully "<< ad1 <<"." << endl;
        break;
    case 24:
         cout << "Give me 3 nouns" << endl;
        cout<< "A truly rich "<< noun1 <<" contains "<< noun2 <<" and "<< noun3 <<" in abundance." << endl;
        break;
    case 25:
         cout << "Give me a noun and a verb, in that order." << endl;
         cin >> noun1 >> verb1;
        cout<< "25.	Accept something "<< noun1 <<" that you cannot "<< verb1 <<", and you will feel better." << endl;
        break;
    case 26:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< noun1 <<" can be real happiness" << endl;
        break;
    case 27:
        cout << "Give me a noun and an adjective" << endl;
        cin >> noun1 >> ad1;
        cout << noun1 <<" is like kissing. It costs nothing and is a "<< ad1 <<" thing to do. " << endl;
        break;
    case 28:
         cout << "Give me a noun and two verbs in the past tense (in that order)." << endl;
         cout << noun1 << verb1 << verb2;
        cout<<  noun1 <<" when most "<< verb1 <<", is least "<< verb2 <<"." << endl;
        break;
    case 29:
         cout << "Give me a noun" << endl;
         cin >> noun1;
         cout<< noun1 <<" lights up the world." << endl;
        break;
    case 30:
         cout << "Give me a plural noun, and a adverb" << endl;
        cout<< "All the "<<pnoun <<" you have will pass away very  "<< adverb1 <<" ." << endl;
        break;
    case 31:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "All will go well with your new  "<<noun1 <<" ." << endl;
        break;
    case 32:
        cout<< "All your hard work will soon pay off." << endl;
        break;
    case 33:
         cout << "Give me a name or a plural noun" << endl;
         cin >> noun1;
        cout<< "Allow  "<<noun1 <<"  to guide your decisions." << endl;
        break;
    case 34:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "An "<<noun1 <<" of the past will affect you in the near future." << endl;
        break;
    case 35:
         cout << "Give me" << endl;
        cout<< "35.	An agreeable "<<noun1 <<" might begin to take on the appearance." << endl;
        break;
    case 36:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2;
        cout<< "36.	An important "<<noun1 <<" will offer you "<<noun1 <<"." << endl;
        break;
    case 37:
         cout << "Give me 2 nouns" << endl;
         cin >> noun1 >> noun2;
        cout<< "An inch of "<<noun1 <<" is an inch of "<<noun2 <<"." << endl;
        break;
    case 38:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "Any "<<noun1 <<" you have to make tomorrow is a good "<<noun1 <<"." << endl;
        break;
    case 39:
         cout << "Give me 2 nouns." << endl;
         cin >> noun1 >> noun2;
        cout<< "At the touch of "<<noun1 <<", everyone becomes a "<<noun2 <<"." << endl;
        break;
    case 40:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "40.	Be careful or you could fall for some "<<noun1 <<" today." << endl;
        break;
    case 41:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout << noun1 <<" in its various forms appeals to you." << endl;
        break;
    case 42:
         cout<< "Because you demand more from yourself, others respect you deeply." << endl;
        break;
    case 43:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "Believe in "<<noun1 <<" and others will too." << endl;
        break;
    case 44:
         cout << "Give me a verb in the past tense" << endl;
         cin >> verb1;
        cout<< "44.	Believe it can be "<<noun1 <<"." << endl;
        break;
    case 45:
        cout << "Give me two verbs" << endl;
        cin >> verb1 >> verb2;
        cout<< "Better "<<verb1 <<" twice than "<<noun1 <<" yourself once." << endl;
        break;
    case 46:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "Bide your time, for "<<noun1 <<" is near." << endl;
        break;
    case 47:
         cout << "Give me a noun, a body part, and a type of stone" << endl;
         cin >> noun1 >> bodypart1 >> noun2;
        cout<< "Carve your name on your heart and not on marble." << endl;
        break;
    case 48:
         cout << "Give me a noun" << endl;
         cin >> noun1;
        cout<< "48.	"<<noun1 <<" is happening in your life, so go with the flow!" << endl;
        break;
    case 49:
         cout << "Give me a descriptive noun" << endl;
         cin >> noun1;
        cout<< noun1 <<" like yours is underrated." << endl;
        break;
    case 50:
         cout << "Give me" << endl;
         cin >> noun1;
        cout<< "Congratulations! "<<noun1 <<" is on your way." << endl;
        break;
    case 51:
         cout << "Give me a bodypart" << endl;
         cin >> bodypart1;
        cout<< "Could I get some directions to your "<<noun1 <<"? " << endl;
        break;
     case 52:
        cout << "Give me a noun and a place" << endl;
        cin >> noun1 >> place1;
        cout<<noun1 <<" begins in the "<<place1 <<"." << endl;
        break;
    case 53:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< noun1 <<" is contagious." << endl;
        break;
    case 54:
        cout << "Give me 2 nouns." << endl;
        cin >> noun1 >> noun2 >> noun3;
        cout<< noun1 <<" kills "<<noun1 <<". "<<noun3 <<" can kill "<<noun1 <<"." << endl;
        break;
    case 55:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "Dedicate yourself with a calm mind to "<<noun1 <<"." << endl;
        break;
    case 56:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "Depart not from the path which "<<noun1 <<" has you assigned." << endl;
        break;
    case 57:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< noun1 <<" is what you need now." << endl;
        break;
    case 58:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "58.	Disbelief destroys the "<<noun1 <<"." << endl;
        break;
    case 59:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "59.	Distance yourself from the "<<noun1 <<"." << endl;
        break;
    case 60:
        cout << "Give me a ability" << endl;
        cin >> noun1;
        cout<< "60.	Do not be intimidated by the  "<<noun1 <<" of others." << endl;
        break;
    /* case 61:
        cout << "Give me" << endl;
        cin >> noun1;
        cout<< "" << endl;
        break; */
    default:
        cout <<"Number is out of bounds. Exiting program";
        cin >> input;
        break;
    }
}

