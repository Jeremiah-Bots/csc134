/* CSC 134
M3 Lab 1
Hart
3/9/2026
User choices
*/

#include <iostream>
using namespace std;

void Attack();
void Guard();
void Bag();



int main() {

    int choice;
    int choice1;
    int choice2;
    //ask the question
    cout << "You are on a battlefield with your enemy" << endl;
    cout << "Do you Fight (1), guard (2) or check bag (3)";
    cin >> choice;

     if (1 == choice) {
    Attack();
  }
  else if (2 == choice) {
    Guard();
  }
   else if (3 == choice) {
    Bag();
   }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }
   cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

}

void Attack() {
  // this function is called in main if the user chooses 1.
  cout << "You attack" << endl;
  cout << "You hit your opponent" << endl;
}

void Guard() {
  // this function is called in main if the user chooses 2.
  cout << "You guard" << endl;
  cout << "You block all damage." << endl;
}

void Bag() {
  // this function is called in main if the user chooses 3.
  cout << "You check your bag" << endl;
  cout << "Theres nothing in it." << endl;
}