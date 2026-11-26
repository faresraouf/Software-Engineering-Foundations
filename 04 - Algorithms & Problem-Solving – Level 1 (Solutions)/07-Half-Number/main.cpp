#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number = 0;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}

int CalculateHalfNumber(int Number)
{
    return (float) Number / 2;
}

void PrintResult(int Number)
{
    cout << "Half of " << Number << " is " << CalculateHalfNumber(Number) << endl;
}

int main()
{
    PrintResult(ReadNumber());
}