/*
 * fortunecookiegenerator.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: Isabel Frade
  original fortune cookies from https://joshmadison.com/2008/04/20/fortune-cookie-fortunes/
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
    string adverb2 = " ";
    string place1;
    string n = "Give me a noun";
    string n2 = "Give me 2 nouns";
    string Gad1 = "Give me an adjective";
    string Gad2 = "Give me 2 adjectives";
    cout<<"Welcome to fortune cookie generator!"  << endl;
    cout<< "Pick a random number from 1 to 125! ";
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
        cout<< "Disbelief destroys the "<<noun1 <<"." << endl;
        break;
    case 59:
        cout << "Give me a noun" << endl;
        cin >> noun1;
        cout<< "Distance yourself from the "<<noun1 <<"." << endl;
        break;
    case 60:
        cout << "Give me a ability" << endl;
        cin >> noun1;
        cout<< "Do not be intimidated by the  "<<noun1 <<" of others." << endl;
        break;
    case 61:
        cout << "Give me a noun and a bodypart" << endl;
        cin >> noun1 >> bodypart1;
        cout<< "Do not demand for "<<noun1 <<"’s soul if you already got their "<<bodypart1 <<"." << endl;
        break;
    case 62:
        cout << n << endl;
        cin >> noun1;
        cout<< "62.	Do not let ambitions overshadow small "<<noun1 <<"." << endl;
        break;
    case 63:
        cout << n << endl;
        cin >> noun1;
        cout<< "63.	Do not make extra work for "<<noun1 <<"." << endl;
        break;
    case 64:
        cout << "Give me 2 nouns" << endl;
        cin >> noun1 >> noun2;
        cout<< "64.	Do not underestimate "<<noun1 <<". "<<noun1 <<" have unlimited potentials." << endl;
        break;
    case 65:
        cout << "Give me a verb and a noun" << endl;
        cin >> verb1 >>noun1;
        cout<< "Don’t be "<<verb1 <<", because every wrong "<<noun1 <<" discarded is another step forward." << endl;
        break;
    case 66:
        cout << "Give me 2 nouns" << endl;
        cin >> noun1 >> noun2;
        cout<< "Don’t confuse "<<noun1 <<" with "<<noun2 <<". " << endl;
        break;
    case 67:
        cout << n << endl;
        cin >> noun1;
        cout<< "Do not just spend "<<noun1 <<" Invest it." << endl;
        break;
    case 68:
        cout << "Give me verb" << endl;
        cin >> verb1;
        cout<< "68.	Do not just think, "<<verb1 <<"!" << endl;
        break;
    case 69:
        cout << "Give me a plural noun and two adverbs" << endl;
        cin >> pnoun >> adverb1 >> adverb2;
        cout<< "Do not let "<<pnoun <<" impose on you, work "<<adverb1 <<" and "<<adverb2 <<"." << endl;
        break;
    case 70:
        cout << "Give me two nouns" << endl;
        cin >> noun1 >> noun2;
        cout<< "70.	Don’t let the "<<noun1 <<" and useless detail choke your "<<noun1 <<"." << endl;
        break;
    case 71:
        cout << "Give me two plural nouns" << endl;
        cin >> pnoun >> noun1;
        cout<< "71.	Don’t let your "<<pnoun <<" overshadow your "<<noun1 <<"." << endl;
        break;
    case 72:
        cout << n << endl;
        cin >> noun1;
        cout<< "Don’t worry; "<<noun1 <<" will knock on your door soon." << endl;
        break;
    case 73:
        cout << "Give me a verb" << endl;
        cin >> verb1;
        cout<< "Each day, compel yourself to "<<verb1 <<" something you would rather not "<<verb1 <<"." << endl;
        break;
    case 74:
        cout <<  n2 << endl;
        cin >> noun1 >> noun2;
        cout<< noun1 <<" is the ability to meet life’s "<<noun2 <<"." << endl;
        break;
    case 75:
        cout << "Give me an adjective" << endl;
        cin >> noun1;
        cout<< "Embrace this "<< ad1 <<"relationship you have!" << endl;
        break;
    case 76:
        cout << "Give me a plural noun" << endl;
        cin >> pnoun;
        cout<< "Emulate what you admire in your "<< noun1 <<"." << endl;
        break;
    case 77:
        cout << "Give me" << endl;
        cin >> noun1;
        cout<< "Emulate what you respect in your "<< noun1 <<"." << endl;
        break;
    case 78:
        cout << n2 << endl;
        cin >> noun1 >> noun2;
        cout<< "Every "<< noun1 <<" blooms in its own sweet "<< noun2 <<"." << endl;
        break;
    case 79:
        cout << n << endl;
        cin >> noun1;
        cout<< "Every wise "<< noun1 <<" started out by asking many questions." << endl;
        break;
    case 80:
        cout << "Give me an event" << endl;
        cin >> noun1;
        cout<< "80.	Everyday in your life is a special "<< noun1 <<"." << endl;
        break;
    case 81:
        cout << "Give me a noun  -er adjective";
        cin >> noun1 >> ad1;
        cout<< noun1 <<" is the chance to do "<< ad1 <<" next time." << endl;
        break;
    case 82:
        cout << n2 << endl;
        cin >> noun1 >> noun2;
        cout<< noun1 <<" is the path of least "<< noun2 <<"." << endl;
        break;
    case 83:
        cout << "Give me three nouns" << endl;
        cin >> noun1 >> noun2 >> noun3;
        cout<< noun1 <<" and "<< noun2 <<" are two sides of the same "<< noun3 <<"." << endl;
        break;
    case 84:
        cout << "Give me two nouns" << endl;
        cin >> noun1 >> noun2;
        cout<< "Fearless "<< noun1 <<" is the foundation of "<< noun2 <<"." << endl;
        break;
    case 85:
        cout << "Give me a animal and an edible object" << endl;
        cin >> noun1 >>noun2;
        cout<< "Feeding a "<< noun1 <<" with "<< noun2 <<" does not get extra appreciation." << endl;
        break;
    case 86:
        cout << "Give me" << endl;
        cin >> noun1;
        cout<< "86.	First think of what you want to do; then do what you have to do." << endl;
        break;
     case 87:
        cout << "Give me two nouns and a verb in the past tense, in that order." << endl;
        cin >> noun1 >>noun2 >>verb1;
        cout<< "For "<< noun1 <<" is never "<< verb1 <<" by "<< noun1 <<". "<< noun1 <<" is "<< verb1 <<" by "<< noun2 <<"." << endl;
        break;
     case 88:
        cout << "Give me a verb." << endl;
        cin >> verb1;
        cout<< "For the things we have to "<< verb1 <<" before we can do them, we "<< verb1 <<" by doing them." << endl;
        break;
     case 89:
        cout << n << endl;
        cin >> noun1;
        cout<< noun1 <<"e Not Found: Abort, Retry, Ignore?" << endl;
        break;
     case 90:
        cout << "Give me two nouns" << endl;
        cin >> noun1 >>noun2;
        cout<< "From listening comes "<< noun1 <<" and from speaking "<< noun2 <<"." << endl;
        break;
     case 91:
        cout << "Give me a personality trait" << endl;
        cin >> noun1;
        cout<< "From now on your "<< noun1 <<" will lead you to success." << endl;
        break;
     case 92:
        cout << n << endl;
        cin >> noun1;
        cout<< noun1 <<" rules the world.." << endl;
        break;
     case 93:
        cout << "Give me a noun and a body part, in that order."<< endl;
        cin >> noun1 >> bodypart1;
        cout<< "Get your "<< bodypart1 <<" set…"<< noun1 <<" will lead you on." << endl;
        break;
     case 94:
        cout<< "Go take a rest; you deserve it." << endl;
        break;
     case 95:
        cout << "Give me a noun and a plural noun, in that order." << endl;
        cin >> noun1 >>pnoun;
        cout<< "Good "<< pnoun <<" will come to you by "<< noun1 <<"." << endl;
        break;
     case 96:
        cout << "Give me a verb" << endl;
        cin >> verb1;
        cout<< "Good to begin "<< verb1 <<", better to end "<< verb1 <<"." << endl;
        break;
     case 97:
        cout << "Give me an action." << endl;
        cin >>verb1;
        cout<< "Happiness begins with facing life with a smile and a "<< verb1 <<"." << endl;
        break;
    case 98:
        cout << n << endl;
        cin >> noun1;
        cout<< ""<< noun1 <<" will bring you good luck." << endl;
        break;
    case 99:
        cout << n << endl;
        cin >> noun1;
        cout<< "Happy "<< noun1 <<" is just in front of you." << endl;
        break;
    case 100:
        cout << "Give me three nouns." << endl;
        cin >> noun1 >>noun2 >>noun3;
        cout<< "Hard "<< noun1 <<" break no "<< noun2 <<", fine "<< noun1 <<" butter no "<< noun3 <<"." << endl;
        break;
    case 101:
        cout << "Give me an adjective" << endl;
        cin >> ad1;
        cout<< "Have a "<< ad1 <<" day." << endl;
        break;
    case 102:
        cout << "Give me a noun and a verb in the past tense, in that order." << endl;
        cin >> noun1 >> verb1;
        cout<< "He who expects no "<< noun1 <<" shall never be "<< verb1 <<". " << endl;
        break;
    case 103:
        cout << "Give me a person and a noun" << endl;
        cin >> noun1>> noun2;
        cout<< noun1 <<" who knows he has "<< noun2 <<" is rich." << endl;
        break;
    case 104:
        cout << "Give me a place and  an adjective, in that order." << endl;
        cin >> noun1 >> ad1;
        cout<< "Help! I’m being held prisoner in a "<< ad1 <<" "<< noun1 <<"!" << endl;
        break;
    case 105:
        cout << "Give me a bodypart." << endl;
        cin >> bodypart1;
        cout<< "How many of you believe in psycho-kinesis? Raise my "<< bodypart1 <<"." << endl;
        break;
    case 106:
        cout << "Give me a verb" << endl;
        cin >> verb1;
        cout<< "How you "<< verb1 <<" depends on where you go." << endl;
        break;
    case 107:
        cout << "Give me a verb" << endl;
        cin >> verb1;
        cout<< "I learn by "<< verb1 <<" where I have to go." << endl;
        break;
    case 108:
        cout << "Give me a possessive noun." << endl;
        cin >> noun1;
        cout<< "If a true sense of value is to be "<< noun1 <<" it must come through service." << endl;
        break;
    case 109:
        cout << n << endl;
        cin >> noun1;
        cout<< "If "<< noun1 <<" were truth, we would never be wrong." << endl;
        break;
    case 110:
        cout << "Give me 2 verbs." << endl;
        cin >> verb1 >> verb2;
        cout<< "If you continually "<< verb1 <<", you will continually "<< verb2 <<"." << endl;
        break;
    case 111:
        cout << "Give me a noun and a verb, in that order." << endl;
        cin >> noun1 >> verb1;
        cout<< "If you "<< verb1<<" in the right places, you can find some good "<< noun1 <<"." << endl;
        break;
    case 112:
        cout << "Give me a verb." << endl;
        cin >> verb1;
        cout<< "If you think you can "<< verb1 <<" a thing or think you can’t "<< verb1 <<" a thing, you’re right." << endl;
        break;
    case 113:
        cout <<  Gad1 << endl;
        cin >> ad1;
        cout<< "If you wish to see the "<< ad1 <<" in others, show the "<< ad1 <<" of yourself." << endl;
        break;
    case 114:
        cout << "Give me a plural noun, an adjective, and a verb in the past tense, in that order." << endl;
        cin >> pnoun>> ad1 >> verb1;
        cout<< "If your "<< noun1 <<" are not "<< ad1 <<", they will be "<< verb1 <<"." << endl;
        break;
    case 115:
        cout << "Give me a feeling and a noun" << endl;
        cin >> ad1 >> noun1;
        cout<< "If you’re feeling "<< ad1 <<", try throwing "<< noun1 <<" into your work." << endl;
        break;
    case 116:
        cout << "Give me 2 verbs." << endl;
        cin >> verb1;
        cout<< "In order to "<< verb1 <<", one must first "<< verb2 <<"." << endl;
        break;
    case 117:
        cout << "Give me a plural noun and a verb, in that order" << endl;
        cin >> pnoun >> verb1;
        cout<< "In the end all "<< pnoun <<" will be "<< verb1 <<"." << endl;
        break;
    case 118:
        cout << "Give me two adjectives" << endl;
        cin >> ad1 >> ad2;
        cout<< "In this world of contradiction, It’s better to be "<< ad1 <<" than "<< ad2 <<"." << endl;
        break;
    case 119:
        cout << Gad1 << endl;
        cin >> ad1;
        cout<< "It could be better, but its "<< ad1 <<" enough." << endl;
        break;
    case 120:
        cout << "Give me a noun and its opposite." << endl;
        cin >> noun1 >> noun2;
        cout<< "It is better to be an "<< noun1 <<" and proven a fool than to be a "<< noun2 <<" and be proven right." << endl;
        break;
    case 121:
        cout << "Give me a plural noun" << endl;
        cin >> pnoun;
        cout<< "It is better to deal with "<< pnoun <<" before they arise" << endl;
        break;
    case 122:
        cout << Gad2 << endl;
        cin >> ad1 >> ad2;
        cout<< "It is "<< ad1 <<" to stand up for what is right, however "<< ad2 <<" it seems." << endl;
        break;
    case 123:
        cout << "Give me" << endl;
        cin >> noun1;
        cout<< "It is worth reviewing some old "<< pnoun <<"." << endl;
        break;
    case 124:
        cout << "Give me a verb" << endl;
        cin >> verb1;
        cout<< "It takes courage to "<< verb1 <<" fault." << endl;
        break;
    case 125:
        cout << "Give me a noun and a verb" << endl;
        cin >> noun1 >> verb1;
        cout<< "It’s not the amount of "<< noun1 <<" you "<< verb1 <<", but what you "<< verb1 <<" to the "<< noun1 <<" that counts." << endl;
        break;
  /*  case 117:
        cout << "Give me" << endl;
        cin >> noun1;
        cout<< "" << endl;
        break; */
    default:
        cout <<"Input is out of bounds. Exiting program";
        cin >> input;
        break;
    }
}

