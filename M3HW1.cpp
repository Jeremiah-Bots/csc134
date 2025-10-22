// csc 134
//M3Hw
// Noriega
// 10/22/25
//Gold 

#include <iostream>
using namespace std;

void question1();
void question1a();
void question2();
void question3();
void question4();




// main
int main() {
 int choice;
cout << "Gold tier attempt for M3HW" << endl;
cout << "Question 1 (1)" << endl;
cout << "Question 2 (2)" << endl;
cout << "Question 3 (3)" << endl;
cout << "Question 4 (4)" << endl;
cout << "Exit (0)" << endl;
cin >> choice;
if (1 == choice) {
    question1();
}
 else if (2 == choice) {
    question2();
 }
 else if (3 == choice) {
    question3();
 }
 else if (4 == choice) {
    question4();
 }
 else if (0 == choice) {
    cout << "Cya!" << endl;
    return 0;
 }
 else {
    cout << "Not a valid choice." << endl;
    return 0;
 }

}

void question1() {
    int ready;
    cout << "Question 1: Chatbot" << endl;
    cout << "Enter 1 to begin" << endl;
    cin >> ready;
        if (ready = 1 ) {
            question1a();
        }
        else {
            cout << "invalid entry" << endl;
           
        }
}
void question1a() {
    string name;
    string day;
    cout << "Insert name" << endl;
    cin >> name;
    cout << "Welcome " << name << " I am Totally human bot" << endl;
    cout << "How was your day?" << endl;
    cin >> day;
    if (day == "good" || day == "Good") {
        cout << "I am glad you had a good day" << endl;
        }
     else if (day == "bad" || day == "Bad") {
        cout << "I hope tomorrow is better for you" << endl;
     }
     else {
        cout << "I hope your day gets better" << endl;
     }
    cout << "My day was pretty good now that you are here" << endl;
    cout << "I know days might get hard but you just gotta keep on going" << endl;
    cout << "Anyways what do you enjoy doing on your free time?" << endl;
    }
void question2() {
    cout << "Question 2: Resturaunt Receipt" << endl;
}

void question3() {
cout << "Question 3:Choose your own adventure" << endl;

}

void question4() {
    cout << "Question 4: Math tester" << endl;
}