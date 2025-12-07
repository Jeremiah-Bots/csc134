/*
CSC 134
M6T1 - Loops and Arrays
Noriega
11/10/25

Do the same thing with while and for loops, for reference.
*/

#include <iostream>
using namespace std;


void part1();
void part2();

// main
int main() {

   part1();
   part2();

    return 0;
}


void part1() {
    // Method one - no arrays
    cout << "Enter each car passed per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int car_today;   
    int car_total = 0; 
    double car_avg = 0;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> car_today;
        car_total += car_today;
        count++; 
    }
    cout << "Total = " << car_total << endl;
    car_avg = (double) car_total / SIZE;
    cout << "Average = " << car_avg << endl;
}

void part2() {


    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; 
    int car[SIZE];
    int car_total = 0;
    double car_avg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> car[i];
    }

    cout << "Day\t|\tCars" << endl;
    cout << "--------------------"<< endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t|\t" << car[i] << endl;
        car_total += car[i];
    }
   
    car_avg = (double) car_total / SIZE;
    cout << "Total = " << car_total << endl;
    cout << "Average = " << car_avg << endl;
}