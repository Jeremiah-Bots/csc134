// CSC 134
// M4T1 - While
// Noriega
// 3/10/2025


#include <iostream>
using namespace std;

int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    int num = 1;
    int maximum = 10;

    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count++;
    }
    cout << "That's all folks!" << endl;

    while (num <= maximum)
    {
    
        cout << num << "\t\t" << (num * num) << endl;
        num++;
     }


    return 0; // done
}