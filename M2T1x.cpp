// csc 134
// M2T1 - Product sales
// Joshua Noriega
// 9/24/2025
// We're going to make the simplest possible
// "checkout" machine
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main()  {
    

    //Variables
    string first_name, last_name, full_name; //holds customer name
    string product = "apples";
    int amount_purchase;
    double cost_each = 0.99;
    double total_cost;


    // Greatings
    cout << "welcome to our " << product << " store!" << endl;
    cout << "What's your first name?" ;
    cin >> first_name;
    cout << "What's your last name?";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;


    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like to buy today?";
    cin >> amount_purchase;

    // Calculate total price
    total_cost = amount_purchase * cost_each;
    // Formatting: Set all priuces to 2 decimal places
    cout << setprecision(2) << fixed;
    // Give the result
    cout << "For " << amount_purchase << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // No errors







}