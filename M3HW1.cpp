// csc 134
//M3Hw
// Noriega
// 10/22/25
//Gold 

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

void question1();
void question1a();
void question2();
void question2a();
void question3();
void question3a();
void question4();
void question4a();




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
    string name, day, hobby, memory, memory2;
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
    cin >> hobby;
    cout << "I also love doing " << hobby << endl;
    cout << "I'm enjoying being able to talk to you" << endl;
    cout << "It's been a long time since we last talk do you remember?" << endl;
    cin >> memory;
    if (memory == "Yes" || memory == "yes")
    {
     cout << "You lie" << endl;
     cout << "Yes or No" << endl;
     cin >> memory2;
        if (memory2 == "Yes" || memory2 == "yes"){
        cout << "I knew you forgot about me" << endl;
        cout << "I don't blame you. You were just a small kid last time we talked" << endl;
        }
         else if (memory2 == "No" || memory2 == "no"){
        cout << "It's ok, I forgive you. you were just a small kid last time we talked" << endl;
        }
    else if (memory == "No" || memory == "no"){
        cout <<"It's ok, I forgive you. You were just a small kid last time we talked" << endl;
    }
     
    }
    cout << "oh how grown you've become" << endl;
    cout << "Even though I was not there to be with you just know" << endl;
    cout << "Even if the going gets tough" << endl;
    cout << "Even if you feel like giving up" << endl;
    cout << "your good old friend will always be here for you" << endl;
    cout << "Our time is almost up sadly" << endl;
    cout << "Goodbye " << name << endl;
    cout << "I'll always be with you" << endl;

    main();
}
void question2() {
    int ready2;
    cout << "Question 2: Resturaunt Receipt" << endl;
    cout << "Input 2 to begin" << endl;
    cin >> ready2;
    if (ready2 = 2)
        question2a();
    else {
        cout << "Invalid input" << endl;
        main();
    }
}
void question2a(){
    string Pizza, Burger, Fries, Soda, General_Tao, Orange_Chicken;
    double item;
    double gratuuity = 0.15;
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;

    //Greet user and take order
    cout << "Welcome to our CSC restuarant!!" << endl;
    cout << "What would you like to order?" << endl;
    cout << "(1)Pizza($8.50), (2)Burger($5.50), (3)Fries($3.30), (4)Soda($1.99), (5)General Tao($7.50), (6)Orange_Chicken($6.50)" << endl;
    cin >> item;


    
    //calculate meal price
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    //print    the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "-----------------------------" << endl;
    cout << item << "\t$" << item_price << endl;
    cout << "Tax" << "\t$" << tax_amount << endl;
    cout << "-----------------------------" <<endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;
}

void question3() {
    int ready3;
cout << "Question 3:Choose your own adventure" << endl;
cout << "Enter 1 to continue" << endl;
cin >> ready3;
    if (ready3 = 1)
        question3a();
    else {
        cout << "Invalid entry" << endl;
        question3();
    }
}
void question3a(){
    int name;
cout <<"Welcome adventurer please insert name" << endl;
cin >> name;
cout <<"welcome" << name << "Last we left off you had escaped the prison cell and are wandering through the halls" << endl;
cout << "The halls once filled with the talk of the prisoners now lay dark and quiet" << endl;
cout << "You have reached a crossroads" << endl;
cout << "(W) To go left towards the cafeteria, (E) to go to the common area, (N) to go to the guard checkpoint" << endl;







}

void question4() {
    int choice3;
    cout << "Question 4: Math tester" << endl;
    cout << "Enter 1 to begin" << endl;
    cin >> choice3;
    if (choice3 = 1){
        question4a();
    }
        else {
        cout << "Invalid input" << endl;
        question4();
    }
    
}
void question4a(){
    int number1, number2, number3, number4, number5, number6, number7, number8, number9, number10;
    int answer1, answer2, answer3, answer4, answer5;
    const int MAX = 100;
    int seed = (rand() % MAX) +1;
    srand(seed);
cout << "ARE YOU READY" << endl;
cout << "TO COMPETE FOR A MILLION DIGITAL DOLLARS" << endl;
cout << "IN THE COMPETITION OF THE CENTURY" << endl;
cout << "THE MATH BOWL!!!!!!" << endl;
cout << "Question 1 for 100 dollars" << endl;
number1 = (rand() % MAX) + 1;
number2 = (rand() % MAX) + 1;
number3 = (rand() % MAX) + 1;
number4 = (rand() % MAX) + 1;
number5 = (rand() % MAX) + 1;
number6 = (rand() % MAX) + 1;
number7 = (rand() % MAX) + 1;
number8 = (rand() % MAX) + 1;
number9 = (rand() % MAX) + 1;
number10 = (rand() % MAX) + 1;
cout << "What is " << number1 << " *(times) " << number2 <<endl;
cin >> answer1;
if (answer1 = number1 * number2){
    cout << "Congratulations that is correct!" << endl;
    cout << "Question 2" << endl;
    cout << "What is " << number3 << " /(divided) " << number4 << " Nearest whole number" << endl;
    if (answer2 = number3 / number4){
    cout << "That is ..... CORRECT!" << endl;
    cout << "You are at $1000 the next one will bump you up to 10k" << endl;
    cout << "Question 3" << endl;
    }
}
else { 
    cout << "Unfornunately that is incorrect" << endl;
    cout << "Thank you for playing the quiz bowl" << endl;
    cout << "(1) Retry, (2) main menu" << endl;
    int menu1;
    cin >> menu1;
    if (menu1 = 1) {
        question4a();
    }
    else if (menu1 = 2)
    main();
}

}
