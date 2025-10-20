// csc 134
//M3Lab2
//Joshua Noriega
//10/19/2025
//Grade analyzer




#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numericalGrade;
    string lettergrade;
    // welcomes user to grade - tron - 3000
    cout << "Welcome user to Grade - O - tron - 3000" << endl;
    //Prompts user to enter numerical grade
    cout << "Enter your number grade below" << endl;
    cin >> numericalGrade;

    if (numericalGrade >= 90) {
        lettergrade = "A";
    }
     else if (numericalGrade >=80) {
        lettergrade = "B";
     }
     else if (numericalGrade >= 70) {
        lettergrade = "C";
     }
     else if (numericalGrade >=60){
        lettergrade = "D";
    }
     else {
        lettergrade = "F";
     }

     cout << "Your letter grade is: " << lettergrade << endl;










    return 0;
}