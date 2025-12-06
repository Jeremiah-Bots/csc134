#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
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
    cout << "Congratulations that is correct!" << endl;
    cout << "Question 2" << endl;
    cout << "What is " << number3 << " /(divided) " << number4 << " Nearest whole number" << endl;
    cin >> answer2;
}
    else { 
    cout << "Unfornunately that is incorrect" << endl;
    cout << "Thank you for playing the quiz bowl" << endl;
    cout << "(1) Retry, (2) main menu" << endl;
}
if (answer2 == number3 / number4){
    cout << "That is ..... CORRECT!" << endl;
    cout << "You are at $1000 the next one will bump you up to 10k" << endl;
    cout << "Question 3" << endl;
    cout << "What is " << number1 << "*" << number5 << "/" << number6 << endl;
    cin >> answer3;
    }
    else { 
    cout << "Unfornunately that is incorrect" << endl;
    cout << "Thank you for playing the quiz bowl" << endl;
    cout << "(1) Retry, (2) main menu" << endl;
}
if (answer3 == (number1 * number5)/number6){
    cout <<"Holy moly you are on a roll that's CORRECT!!" << endl;
    }
else { 
    cout << "Unfornunately that is incorrect" << endl;
    cout << "Thank you for playing the quiz bowl" << endl;
    cout << "(1) Retry, (2) main menu" << endl;
}
}