#include <iostream>
using namespace std;

void ReadNumber(int& Number01, int& Number02)
{
    cout << "Pleas enter Mark 01: " << endl;
    cin >> Number01;

    cout << "Pleas enter Mark 02: " << endl;
    cin >> Number02;
}

void SwapeNumbers(int& Number01, int& Number02)
{
    int temp = Number01;
    Number01 = Number02;
    Number02 = temp;

    cout << Number01 << " " << Number02;
}

void PrintNumbersBeforSwap(int Number01, int Number02)
{
    cout << "\nNumbers befor swapping: " << Number01 << " " << Number02 << endl;
}

void PrintnumbersAfterSwap(int Number01, int Number02)
{
    cout << "\nNumbers after swapping: ";
}

int main()
{
    int Number01, Number02;

    ReadNumber(Number01, Number02);

    PrintNumbersBeforSwap(Number01, Number02);

    PrintnumbersAfterSwap(Number01, Number02);

    SwapeNumbers(Number01, Number02);

    return 0;
}