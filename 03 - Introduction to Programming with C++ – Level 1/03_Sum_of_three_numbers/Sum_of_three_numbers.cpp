#include <iostream>
using namespace std;

void ReadNumber(int& Number01, int& Number02, int& Number03)
{
    cout << "Pleas enter number 01: " << endl;
    cin >> Number01;

    cout << "Pleas enter number 02: " << endl;
    cin >> Number02;

    cout << "Pleas enter number 03: " << endl;
    cin >> Number03;
}

int SumOf3Numbers(int Number01, int Number02, int Number03)
{
    return Number01 + Number02 + Number03;
}

void PrintResult(int total)
{
    cout << "\nThe total sum of numbers is: " << total << endl;
}

int main()
{
    int Number01, Number02, Number03;

    ReadNumber(Number01, Number02, Number03);
    PrintResult(SumOf3Numbers(Number01, Number02, Number03));

    return 0;
    
}