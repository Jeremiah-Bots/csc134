/* CSC 134
M2 HW
Hart - Gold
3/9/2026
Banking transaction 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << "Question 1: Banking Transaction\n";

    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = 123456;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter starting account balance: ";
    cin >> startingBalance;

    cout << "Enter deposit amount: ";
    cin >> deposit;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    finalBalance = startingBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);

    cout << "\nName on account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;

    return 0;
}