#include <iostream>
using namespace std;
int main() {
    // This program will simulate an apple orchard.
    //The own's name
    string name = "Joshua Noriega" ;
    // number of apples owned
    int apples = 100 ;
    // price per apple
    double pricePerApple = 0.25 ;
    // calculate the total price of the apples
    double totalPrice = (double) apples * pricePerApple ;


    // print all the information about the orchard
    // TODO
    cout << "welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have" << apples;
    cout << "apples in stock" << endl;
    cout << "Apples are currently $";
    cout << totalPrice << "eac." <<endl;
    //Finale line, to print totalPrice
    cout << "If you want them all, that will be $" << 
    totalPrice << endl;

}