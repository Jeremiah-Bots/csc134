// CSC 134
// M5HW1 - Gold
// Hart
// 5/9/2026

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <limits>
using namespace std;
void question1();
void question2();
void question3();
void question4();
void question5();
void Circle();
void Rectangle();
void Triangle();
double getLength();
double getWidth();
double getHeight();
double getVolume(double, double, double);
void Data(double, double, double, double);
double inputValidate();
double getWidth2();
double getLength2();
double getArea2(double, double);
void rectanglearea(double);
double getBase();
double getHeight2();
double getArea3(double, double);
void Trianglearea(double);
double getTime();
double getSpeed();
void DistanceTraveled(double, double);
// main
int main() {
 int choice;
cout << "Rainfall Averager (1)" << endl;
cout << "Block volume calculator (2)" << endl;
cout << "Roman version of numbers (3)" << endl;
cout << "Simple shape Calculator (4)" << endl;
cout << "Distance traveler (5)" << endl;
cout << "Exit (0)" << endl;
cin >> choice;
if (1 == choice) {
    question1();
}
 else if (2 == choice) {
    question2();
 }
 else if (3 == choice) {
    question3();
 }
 else if (4 == choice) {
    question4();
 }
 else if (5 == choice){
   question5();
 }
 else if (0 == choice) {
    cout << "Bye!" << endl;
    return 0;
 }
 else {
    cout << "Not a valid choice." << endl;
    return 0;
 }

}
void question1()
{
   string month1, month2, month3 ;
   double rain1, rain2, rain3;
   double average;
   cout << "Rainfall Averager" << endl;
   cout << "Input name of the first month" << endl;
   cin >> month1;
   cout << "Enter the rainfall for " << month1 << endl;
   cin >> rain1;
   cout << "Input name of the second month" << endl;
   cin >> month2;
   cout << "Enter the rainfall for " << month2 << endl;
   cin >>rain2;
   cout << "Input name of the third month" << endl;
   cin >> month3;
   cout << "Enter the rainfall for " << month3 << endl;
   cin >> rain3;
   cout << setprecision(2) << fixed;
   average = (rain1 + rain2 + rain3)/3 ;
   cout << "The rainfall average for the months of " << month1 << " , " << month2 << " , " << month3 << " is " << average << endl;

}
void question2(){
 cout << "Block volume calculator" << endl;
 double volume;
 double length, height, width;
   length = getLength();
   width = getWidth();
   height = getHeight();
   volume = getVolume(height, width, length);
   Data(length, width, height, volume);
}
double inputValidate() {
    double num;
    while(!(cin >> num) || num <= 0) {
        cout << "Error. Input must be a positive number above 0." << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}

 double getLength() {
    cout << "Enter block's length:" << endl;
    return inputValidate();
}
double getWidth() {
    cout << "Enter block's width:" << endl;
    return inputValidate();
}

  double getHeight(){
    cout << "Enter block's height:" << endl;
   return inputValidate();
  }
   double getVolume(double height, double width, double length){
    return length * width * height;
   }
 void Data(double height, double width, double length, double volume){
   cout << "Analyzed data of the block" << endl;
   cout << "Length: " << length << endl;
   cout << "Width: " << width << endl;
   cout << "height: " << height << endl;
   cout << "Volume: " << volume << endl;
 }

void question3(){
   int number;
   string roman;
 cout << "Roman numeral converter" << endl;
 cout << "Enter a number from 1 to 10" << endl;
 cin >> number;
 switch(number) {
    case 1:  roman = "I";
    break;
    case 2:  roman = "II";
    break;
    case 3:  roman = "III";
   break;
   case 4:  roman = "IV";
   break;
   case 5:  roman = "V";
   break;
    case 6:  roman = "VI";
   break;
    case 7:  roman = "VII";
   break;
   case 8:  roman = "VIII";
   break;
   case 9:  roman = "IX";
   break;
    case 10: roman = "X";
   break;
   default:
   cout << "Input must be between 1 or 10" << endl;
    return;
 }
 cout << "The roman numeral for " << number << " is " << roman << endl;
}
void question4(){
   int choice;
 cout << "Simple Shape Calculator" << endl;
 cout << "Choose one: " << endl;
 cout << "1. Area of a circle calculator" << endl;
 cout << "2. Area of a rectangle calculator" << endl;
 cout << "3. Area of a Triangle calculator" << endl;
 cout << "4. Quit" <<endl;
 cin >> choice;
 if (choice == 1){
   Circle();
 }
   else if(choice == 2){
      Rectangle();
   }
   else if(choice == 3){
      Triangle();
   }
   else if (choice == 4){
      main();
   }

}
void Circle(){
   double radius;
   double area;
   cout << "enter the radius" << endl;
   cin >> radius;
   if (radius < 1){

   cout << "Input must be positve" << endl;
   Circle();
   }
   else{
   area = (radius * radius) * 3.14159;
   cout << "The area of the cirlce is " << area << endl;
   }
   
}
void Rectangle(){
double area;
double length2, width2;
length2 = getLength2();
width2 = getWidth2();
area = getArea2(length2, width2);
rectanglearea(area);
}
double getLength2(){
   cout << "Enter rectangle length: " << endl;
   return inputValidate();
}
double getWidth2(){
   cout << "Enter rectangle Width: " << endl;
   return inputValidate();
}
double getArea2(double width2, double length2){
      return width2 * length2;
   }
   void rectanglearea(double area){
      cout << "The area is " << area << endl;
   }
void Triangle(){
double area;
double base, height2;
base = getBase();
height2 = getHeight2();
area = getArea3(base, height2);
Trianglearea(area);

}
double getBase(){
   cout << "Enter Triangles base: " << endl;
   return inputValidate();
}
double getHeight2(){
   cout << "Enter Triangles height: " << endl;
   return inputValidate();
}
double getArea3(double base, double height2){
   return (base * height2) / 2;
   

}
void Trianglearea(double area){
cout << "The area is " << area << endl;
}
void question5(){
 cout << " Distance travel simulator" << endl;
 double speed, hour;
  speed = getSpeed();
  hour =getTime(); 
  DistanceTraveled(speed, hour);
}
double getSpeed() {
   cout << "Enter speed in miles per hour" << endl;
    return inputValidate();
}
double getTime(){
   cout << "Enter how many hours it traveled" << endl;
   return inputValidate();
}
void DistanceTraveled(double speed, double hour)
{
  cout << fixed << setprecision(2);
    cout << "Hour\tDistance Traveled\n";
    cout << "-----------------------\n";
    for (int count = 1; count <= hour; count++) {
        double distance = speed * count;
        cout << count << "\t" << distance << endl;
}

}
