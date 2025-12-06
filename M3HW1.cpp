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
void prisonbars();
void cell();
void bucket();
void Hallway();
void bars2();
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
        if (ready == 1 ) {
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
    if (ready2 == 2)
        question2a();
    else {
        cout << "Invalid input" << endl;
        main();
    }
}
void question2a() {
    string Pizza, Burger, Fries, Soda, General_Tao, Orange_Chicken;
    double gratuity;
    double item;
    double gratuuity = 0.15;
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;
    int choice;
    //Greet user and take order
    cout << "Welcome to our CSC restuarant!!" << endl;
    cout << "What would you like to order?" << endl;
    cout << "(1)Pizza($8),(2)Burger($7),(2)General Tao($11), (3)Orange_Chicken($12)" << endl;
    cin >> item;
    if (item == 1) {
        int item_price = 8.5;
        cout << "Ok one Pizza meal coming right up" << endl;
        cout << "To here (1) or to go (2)?" << endl;
        cin >> choice;
        if (choice == 1){
             //calculate meal price
    tax_amount = item_price * tax_percent;
    gratuity = item_price * gratuuity;
    total = item_price + tax_amount + gratuity;

    //print    the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "-----------------------------" << endl;
    cout << "Pizza" << "\t$" << item_price << endl;
    cout << "Gratuity" << "\t$" << gratuity << endl;
    cout << "Tax" << "\t$" << tax_amount << endl;
    cout << "-----------------------------" <<endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;
        }
    }
    else if (item == 2){
    cout << "Ok one Pizza meal coming right up" << endl;
        cout << "To here (1) or to go (2)?" << endl;
        cin >> choice;
        if (choice == 1){
             //calculate meal price
    tax_amount = item_price * tax_percent;
    gratuity = item_price * gratuuity;
    total = item_price + tax_amount + gratuity;

    //print    the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "-----------------------------" << endl;
    cout << "Pizza" << "\t$" << item_price << endl;
    cout << "Gratuity" << "\t$" << gratuity << endl;
    cout << "Tax" << "\t$" << tax_amount << endl;
    cout << "-----------------------------" <<endl;
    cout << "Total" << "\t\t$" << total << endl;
    }
    else if (item == 3){

    }
    else if (item == 4){

    }

}
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
void question3a();

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

void cell() {
  // this function is called in main if the user chooses 1.
  int choice3;
  int key;
  cout << "You explore the cell. A stone bed and a bucket not much for the decor but it is for criminals so you cant complain. A glint in the bucket catches your eye, maybe you should check it out. " << endl;
  cout << "Check the bucket (1) or Go back to the middle of the cell(2)" << endl;
  cin >> choice3;
  if (1 == choice3) {
    cout << "You look into the bucket and see a key hidden within the filth" << endl;
    cout << "Grab key (1) or ignore the key (2)" << endl;
    cin >> choice3;
    if (1 == choice3) {
      key = true;
      cout <<" You grab the key and go towards the prisonbars" << endl;
      bars2();
    }
    else if (2 == choice3) {
      cout << "You move away from the bucket in disgust " << endl;
      main();
    }
  }
  else if (2 == choice3) {
    cout << "You go back he middle of the cell" << endl;
    main();
  }
  
}

void bars2() {
    int key = 1;
    if (key == 1) {
        cout << "Open the door with the key" << endl;
        Hallway();
    } else {
        cout << "Something's wrong" << endl;
        main();
    }
}

void Hallway () {
  cout << "You managed to get out the cell it's just a matter of time before you can escape" << endl;
  cout << "Thank you for playing the demo full game out soon" << endl;

}

void question4() {
    int choice3;
    cout << "Question 4: Math tester" << endl;
    cout << "Enter 1 to begin" << endl;
    cin >> choice3;
    if (choice3 == 1){
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
if (answer1 == number1 * number2){
    int answer2;
    cout << "Congratulations that is correct!" << endl;
    cout << "Question 2" << endl;
    cout << "What is " << number3 << " /(divided) " << number4 << endl;
    cin >> answer2;
}
     if (answer2 == number3 / number4){
        int answer3;
    cout << "That is ..... CORRECT!" << endl;
    cout << "You are at $1000 the next one will bump you up to 10k" << endl;
    cout << "Question 3" << endl;
    cout << "What is ()" << number1 << "*" << number5 << ")/" << number6 << endl;
    cin >> answer3;
    }
    if (answer3 == (number1 * number5)/number6){
        int answer4;
    cout <<"Holy moly you are on a roll that's CORRECT!!" << endl;
    cout <<"OK final two questions" << endl;
    cout <<"Question 4" << endl;
    cout <<"What is " << number7 << " * " << number4 << " / " << number8 << " * " << number1 << endl;
    cin >> answer4;
    }
    if (answer4 == (number7 * number4) / number8 * number1 ) {
        int answer5;
        cout <<"CONGRATULATIONS THAT IS CORRECT!" << endl;
        cout <<"Final question now this is for all the marbles" << endl;
        cout <<"What is 2 + 2" << endl;
        cin >>answer5;
    }
    if (answer5 == 4){
        
        cout <<"YOU HAVE CONQUERED THE MATH BOWL" << endl;
        cout <<"Congratulations on winning 1 MILLION DIGITAL BUCKAROOS" << endl;
        cout <<"This is the end enter 1 to return to the main menu" <<endl;
        int menu1;
        cin >> menu1;
        if (menu1 == 1){
            main();
        }
        else {
            cout << "Wrong input buddy here ill do it for ya" << endl;
            cout << "1" << endl;
            main();
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
