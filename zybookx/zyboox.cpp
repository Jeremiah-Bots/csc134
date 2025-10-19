#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;



int main()
{
double income;
string marital_status;
double tax;
income =70000;
marital_status = "m";
if (marital_status == "s")
{
   if (income <= 32000)
   {
      tax = 0.10 * income;
   }
   else
   {
      tax = 3200 + 0.25 * (income - 32000);
   }
}
else
{  
   if (income <= 64000)
   {
      tax = 0.10 * income;
   }
   else 
   {
      tax = 6400 + 0.25 * (income - 64000);
   }
}
cout << tax;
}