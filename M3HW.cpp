/* CSC 134
M3 HW
Hart - Gold
3/9/2026
*/

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;


void chatBot();
void receiptCalculator();
void chooseYourOwnAdventure();
void mathPractice();

int main() {
    srand(time(0));  // Seed random number generator

    // Questions
    chatBot();
    receiptCalculator();
    chooseYourOwnAdventure();
    mathPractice();

    return 0;
}

void chatBot() {
    cout << "Question 1: Chat Bot" << endl;
    cout << "Hello, I am Super ChatBot 3!" << endl;
    cout << "Hows the weather today?." << endl;
    string weather;
    cin >> weather;

    if (weather == "good") {
        cout << "That’s great! Go enjoy the weather!" << endl;
    }
    else if (weather == "bad") {
        cout << "Maybe it will be good another day." << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }
    cout << endl;
}

void receiptCalculator() {
    cout << "Question 2: Receipt Calculator" << endl;
    double mealPrice, tax, tip = 0.0, total;
    int orderType;

    cout << "Enter the price of your meal: ";
    cin >> mealPrice;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    tax = mealPrice * 0.07;  // 7% tax

    if (orderType == 1) {
        tip = mealPrice * 0.15;  // 15% tip for dine in
    }

    total = mealPrice + tax + tip;

    cout << "----- Receipt -----" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    if (tip > 0)
        cout << "Tip: $" << tip << endl;
    cout << "Total Amount Due: $" << total << endl;
    cout << endl;
}

void chooseYourOwnAdventure() {
    cout << "Question 3: Choose Your Own Adventure" << endl;
    cout << "You are in the ruins of a castle. Theres a hallway with displays of armor to the left and a door to the right. Do you go left or right? ";
    string choice1;
    cin >> choice1;

    if (choice1 == "left") {
        cout << "The suits of armor come to life!  ";
        cout <<" Do you fight or run? ";
        string choice2;
        cin >> choice2;

        if (choice2 == "fight") {
            cout << "The suits of armor overwhelm you. Game over!" << endl;
        } else if (choice2 == "run") {
            cout << "You run past the armor and into a safe room. You win!" << endl;
        } else {
            cout << "The suits of armor attack you while you think. Game over!" << endl;
        }
    } else if (choice1 == "right") {
        cout << "The door opens up to a treasure chest. You found the treasure!" << endl;
    } else {
        cout << "You leave the ruins. Game over!" << endl;
    }
    cout << endl;
}

void mathPractice() {
    cout << "Question 4: Math Practice" << endl;
    int num1 = rand() % 10;  // 0-9
    int num2 = rand() % 10;  // 0-9
    int answer;

    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> answer;

    if (answer == (num1 + num2)) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << (num1 + num2) << "." << endl;
    }
    cout << endl;
}