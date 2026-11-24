#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Print numbers from 1 to 5
    cout << "=== Counting 1 to 5 ===" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Number: " << i << endl;
    }

    // 2. Loop through an array of strings
    string Languages[3] = { "C++", "Python", "JavaScript" };
    cout << "\n=== Programming Languages ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << Languages[i] << endl;
    }

    return 0;
}