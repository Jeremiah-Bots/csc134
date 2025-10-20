// if statement example3
// standard header


#include <iostream>
using namespace std;

void prisonbars();
void cell();
void bucket();
void Hallway();
void prisonbars2();



int main() {
  
  int choice; 
  int choice2;
  // ask the question
  cout << "You awake in a gloomy prison cell. With nothing on you but the rags on your back. " << endl;
  cout << "(Move to the prison bars(1) or Explore the cell(2): "; 
  cin >> choice;

  if (1 == choice) {
    prisonbars();
  }
  else if (2 == choice) {
    cell();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} 

void prisonbars() {
  // this function is called in main if the user chooses 1.
  int key;
  int choice2;
  cout << "You move towards the prison cell. The bars barely wide enough to fit your head through with some force. Nobody is around, not even a guard or other prisoners. There is a lock on the cell. Maybe if you find the key you can get out." << endl;
  cout << "Move back to the middle of the cell(1) " << endl;
  cin >> choice2;
  if (1 == choice2) {
    main();
  }
  else if (0 == choice2) {
    cout << "You should focus on escaping right now." << endl;
  }
}

void cell(){
  // this function is called in main if the user chooses 1.
  int choice3;
  int key;
  cout << "You explore the cell. A stone bed and a bucket not much for the decor but it is for criminals so you cant complain. A glint in the bucket catches your eye, maybe you should check it out. " << endl;
  cout << "Check the bucket (1) or Go to the prison cell (2)" << endl;
  cin >> choice3;
  if (1 == choice3) {
    cout << "You look into the bucket and see a key hidden within the filth" << endl;
    cout << "Grab key (1) or ignore the key (2)" << endl;
    cin >> choice3;
    if (1 == choice3) {
      key = true;
      cout <<" You grab the key and go towards the prisonbars" << endl;
      prisonbars2();
    }
      else if  (2 == choice3) {
      cout << "You go back the middle of the cell" << endl;
      main();
     }
  }
}

void prisonbars2() {
int key = 1;
if (1 == key); {
    cout << "Open the door with the key" << endl;
    Hallway ();
  }
}