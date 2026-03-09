/* CSC 134
M3 Lab 2
Hart
3/9/2026
Letter Grades
*/

#include <iostream>
using namespace std;

int main()
{
    int grade;

    // Ask user for grade
    cout << "Enter a numerical grade (0 - 100): ";
    cin >> grade;

    // Determine letter grade
    if (grade >= 90 && grade <= 100)
    {
        cout << "Letter Grade: A" << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "Letter Grade: B" << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "Letter Grade: C" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Letter Grade: D" << endl;
    }
    else if (grade >= 0 && grade <= 59)
    {
        cout << "Letter Grade: F" << endl;
    }
    else
    {
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}