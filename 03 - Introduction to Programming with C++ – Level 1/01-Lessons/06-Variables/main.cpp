#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNumber = 52;                  // Integer (whole number without decimals)
    float myFloatNumber = 7.84;        // Floating point number (with decimals)
    double myDoubleNumber = 21.89822;   // Large Floating point number
    char myLetter = 'F';                // Character
    string myText = "FARES";    // String (text)
    bool myBoolean = true;              // Boolean (true or false)

    cout << "Integer: " << myNumber << '\n';
    cout << "Float: " << myFloatNumber << '\n';
    cout << "Double: " << myDoubleNumber << '\n';
    cout << "Char: " << myLetter << '\n';
    cout << "String: " << myText << '\n';
    cout << "Bool: " << myBoolean << '\n';

    return 0;
}