#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Pleas enter triangle base A ? " << endl;
    cin >> A;

    cout << "Pleas enter triangle hight H ?: " << endl;
    cin >> H;
}

float CalculatetriangleArea(float A, float H)
{
    float Area = (A / 2) * H;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nTriangle Area is " << Area << endl;
}

int main()
{
    float A, H;

    ReadNumbers(A, H);

    PrintResult(CalculatetriangleArea(A, H));

    return 0;
}