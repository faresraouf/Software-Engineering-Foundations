#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. String Array
    string Names[3] = { "Ali", "Sara", "Omar" };
    cout << "=== String Array ===" << endl;
    cout << Names[0] << endl;
    cout << Names[1] << endl;
    cout << Names[2] << endl;

    // 2. Numbers Array
    int Numbers[4] = { 10, 20, 30, 40 };
    cout << "\n=== Numbers Array ===" << endl;
    cout << Numbers[0] << endl;
    cout << Numbers[1] << endl;
    cout << Numbers[2] << endl;
    cout << Numbers[3] << endl;

    return 0;
}