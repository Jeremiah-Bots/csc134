/* CSC 134
M3 Random number generator
Joshua Noriega
10/1/2025
Dice Rolling
*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "Your seed is:" << seed << endl;
    //cout <<" What's your lucky number?";
    //cin >> seed;
    //seed the RNG
    srand(seed);

    const int MAX =6;
    int roll1, roll2, total;
    roll1 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    //Craps rules
    // 7 and 11 wins
    // 2 and 12 loses
    // anytthing else later
    if (total == 7) {
        cout << "Lucky number seven! YOU WIN!" << endl;
    }

    else if (total == 11){
        cout << "Eleven is a Winner! YOU WIN!" << endl;
    }
    else if (total == 2){
        cout << "Oooh Snake eyes! You snooze you lose!" << endl;
    }
    else if (total == 3){
        cout << "Unlucky 3! You Lose!" << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! You lost!"<< endl; 
    }


    else {
        cout << "Your point is " << total << " not yet implemented" << endl;
    }
    return 0;
}