#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Joshua Noirega

This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void kitchen();
void peakinthedoor();
void Enternoeeyes();
void note();
void blackout();
void ending();
void Frontdoor();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { 
    cout << "You sneak around towards the back of the house" << endl;
    cout << "Eery creaks and moans ring inside the house" << endl;
    cout << "The backdoor is creaked open just a peap" << endl; 
    cout << "Do you:" << endl;
    cout << "1. Peak into the door" << endl;
    cout << "2. Go into the door without looking" << endl;
    cout << "3. Remember you left the stove on and go home" << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        peakinthedoor();
    }
    else if (2 == choice) {
        Enternoeeyes();
    }
    else if (3 == choice) {
        choice_go_home();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}
void peakinthedoor(){
 cout << "You peak into the door and as you do the hallways are decayed and destroyed" << endl;
 cout << "As you continue to peak around you didn't notice but your face is directly in front of a spiderweb" << endl;
 cout << "Suddenly you are face to face with a giant huntsmen spider towering in front of you" << endl;
 cout << "You run home terrified and swiping your face clean" << endl;
 main_menu();
}
void Enternoeeyes(){
    int count = 1;
cout << "Being the brave boyscouts you are you push in destroying a cobweb on the door" << endl;
cout << "You feel something crawling on you" << endl;
cout << "At the same time you start hearing something deep within start making it's way to you" << endl;
while (count <= 5) {
        cout << "Stomp" << endl;
        cout << "You feel it start climbing up you " << endl;
        count++;
    }
    cout << "Terrified you run away whiping of the giant spider and narrowly escaping a ball bouncing towards you" << endl;
    main_menu();1
}
void choice_go_home() { 
    cout << "You remember you left the stove on and quickly run home" << endl;
    cout << "The sky darkens into a deep grey and storm clouds rush in" << endl;
    cout << "Weird the weatherman said it was clear today so you rush home quickly" << endl;
    cout << "You enter your home and take of your shoes" << endl;
    cout << "Do you:" << endl;
    cout << "1. Go to bed you are dead beat tired" << endl;
    cout << "2. Go check what's for dinner" << endl;
    int choice;
    cin >> choice;
   if (1 == choice) {
    cout << "You quickly go off to sleep missing the spooky events from that night" << endl;
    main_menu();
}
    else if (2 == choice) {
        kitchen();
        }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}
 void kitchen() {
    int choice;
    cout << "You quickly take off your shoes and go gunning for the kitchen" << endl;
        cout << "The days adventure quickly burned through the big lunch you had" << endl;
        cout << "As you enter the kitchen you notice a note on the fridge" << endl;
        cout << "Do you:" << endl;
        cout << "1. Read the note" << endl;
        cout << "2. Shrug and go find something to eat" << endl;
        cin >> choice;
        if (1 == choice) {
            note();
        }
        else if (2 == choice) {
            cout << "You rummage through the fridge and find some chinese food leftovers" << endl;
            cout << "After a while you decide to hop on the game and spend the next few hours playing" << endl;
            cout << "The power goes off and the front door creaks open echoing throughout the house" << endl;
            blackout();
        }
         else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
        
 }
 void blackout()
 {
    int choice;
    cout << "Do you" << endl;
    cout << "1. Grab your trusty bat and go find whats causing the noise" << endl;
    cout << "2. Hide and wait till your parents come" << endl;
    cin >> choice;
    if (1 == choice) {
        Frontdoor();
    }
    else if (2 == choice ) {
        ending();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
 }
 void Frontdoor(){
 cout << "You grab the bat and sneak tot he front door" << endl;
 cout << "You see a shadowy figure messing around in the kitchen" << endl;
 cout << "You ready our bat and scream at the figure" << endl;
 cout << "Readying to strike you stop last minute as you hear your mother scream" << endl;
 cout << "It wasn't a monster at all it was just your mother" << endl;
 cout << "Good thing you didn't take the meat out or else it would've spoiled" << endl;
 cout << "You both stick together until the power goes on and go to sleep" << endl;
 main_menu();
 }
 void ending() {
    cout << "You hear something coming closer" << endl;
    cout << "Heavy wet footsteps echo down the hallway" << endl;
    cout << "You hear the door to your room creak open" << endl;
    cout << "It comes closer and closer" << endl;
    cout << "It stops" << endl;
    cout << "BOOO you hear as your mother opens the closet and scares you" << endl;
    cout << "You scream and share a laugh and the power kicks on" << endl;
    main_menu();
 }
 void note()
 {
    cout << "You read the note and it tells you" << endl;
    cout << "Make sure to take the meat out of the fridge and thaw it out" << endl;
    cout << "Coming home late theirs leftovers in the fridge" << endl;
    cout << "XoXo love mom" << endl;
    cout << "You do as told and take the meat out" << endl;
    cout << "You do some homework and your mother comes home right as the power cuts off" << endl;
    cout << "You both light some candles and tell ghost stories till bed" << endl;
    main_menu();
 }
// any new choices go here