/* CSC 134
M2 LAB
Hart
3/9/2026
Crates Business
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables
    double length, width, height;
    double volume;
    double cost, charge, profit;

    // Constants
    const double costPerCubicFoot = 0.23;
    const double chargePerCubicFoot = 0.50;

    // Get dimensions
    cout << "Enter the crate length: ";
    cin >> length;

    cout << "Enter the crate width: ";
    cin >> width;

    cout << "Enter the crate height: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Calculate cost and charge
    cost = volume * costPerCubicFoot;
    charge = volume * chargePerCubicFoot;

    // Calculate profit
    profit = charge - cost;

    // Display results
    cout << "Volume: " << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Customer charge: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}