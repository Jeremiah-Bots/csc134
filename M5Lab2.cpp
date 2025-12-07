// M5LAB2
// Header goes here

#include <iostream>
#include <string>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(double);
double getWidth();
double getArea();
void displayData();
int main()
{
  
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length , width, area;     // The rectangle's width     // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea( width, length);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//****************************************
double getLength()
{
    double length;
      cout << "Enter length:"<< endl;
      cin >> length;
      return length;
}
double getWidth()
{
    double width;
    cout << "Enter Width" << endl;
    cin >> width;
    return width;
}
double getArea(double width, double length)
{
    double area;
    area = length * width;
    return area;
}
void displayData(double length, double width, double area)
{
cout << "Rectangle Data" << endl;
cout << "Length: " << length << endl;
cout << "Width: " << width << endl;
cout << "Area: " << area << endl;
}