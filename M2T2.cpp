/*
CSC 134
M2T2 - Receipt Calculator
Joshua Noriega
10/1/2025
*/

#include <iostream>
#include <iomanip> // for 2 decimal places
using namespace std;
int main() {
    //Create so,[;e receo[
    //use sale tax 8%
    // Declare variables
    string item ="Pizza";
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;

    //Greet user and take order
    cout << "Welcome to our CSC restuarant!!" << endl;
    cout << "You ordered one" << item << "." << endl;


    
    //calculate meal price
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    //print the receipt
    cout << setprecision(2) << fixed;
    cout << total << endl;







    return 0; // no errors
}