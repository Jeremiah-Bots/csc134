#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int item, choice;
    double gratuity_rate = 0.15;
    double tax_percent = 0.08;
    double item_price = 0.0;
    string item_name;
    double tax_amount, gratuity, total;

    cout << "Welcome to our CSC restaurant!!" << endl;
    cout << "What would you like to order?" << endl;
    cout << "(1) Pizza ($8)\n(2) Burger ($7)\n(3) General Tao ($11)\n(4) Orange Chicken ($12)" << endl;
    cin >> item;

    // Assign appropriate price and name
    if (item == 1) {
        item_price = 8.0;
        item_name = "Pizza";
    } else if (item == 2) {
        item_price = 7.0;
        item_name = "Burger";
    } else if (item == 3) {
        item_price = 11.0;
        item_name = "General Tao";
    } else if (item == 4) {
        item_price = 12.0;
        item_name = "Orange Chicken";
    } else {
        cout << "Sorry, that's not a valid menu choice." << endl;
        return 0;
    }

    cout << "Ok, one " << item_name << " meal coming right up." << endl;
    cout << "To here (1) or to go (2)?" << endl;
    cin >> choice;

    // Calculate bill
    gratuity = item_price * gratuity_rate;
    tax_amount = item_price * tax_percent;
    total = item_price + gratuity + tax_amount;

    // Print receipt
    cout << setprecision(2) << fixed;
    cout << "\nThank you for shopping with us" << endl;
    cout << "-----------------------------" << endl;
    cout << item_name << "\t\t$" << item_price << endl;
    cout << "Gratuity" << "\t\t$" << gratuity << endl;
    cout << "Tax" << "\t\t$" << tax_amount << endl;
    cout << "-----------------------------" << endl;
    cout << "Total" << "\t\t$" << total << endl << endl;
}