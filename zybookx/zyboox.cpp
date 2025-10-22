#include <iostream>
using namespace std;



int main()
{
string input;
cin >> input;
do
{
    
    cin >> input;
} 
while (input.substr(0, 1) == "e"); {
 cout << "PLease enter a word starting with e:" << endl;
} 

return 0;
}
