#include <iostream>
using namespace std;

void ReadNumber(int& Mark01, int& Mark02, int& Mark03)
{
    cout << "Pleas enter Mark 01: " << endl;
    cin >> Mark01;

    cout << "Pleas enter Mark 02: " << endl;
    cin >> Mark02;

    cout << "Pleas enter Mark 03: " << endl;
    cin >> Mark03;
}

int SumOf3Marks(int Mark01, int Mark02, int Mark03)
{
    return Mark01 + Mark02 + Mark03;
}

float CalculateAverage(int Mark01, int Mark02, int Mark03)
{
    return (float) SumOf3Marks(Mark01, Mark02, Mark03) / 3;
}

void PrintResult(float Average)
{
    cout << "\nThe Average is: " << Average << endl;
}

int main()
{
    int Mark01, Mark02, Mark03;

    ReadNumber(Mark01, Mark02, Mark03);
    PrintResult(CalculateAverage(Mark01, Mark02, Mark03));

    return 0;
    
}