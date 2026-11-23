#include <iostream>
using namespace std;

 

float ReadSquereSide()
{
    float A;
    cout << "Pleas enter Squere Side A ? " << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;

    float Area = (PI * A * A) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCricle Area is " << Area << endl;
}

int main()
{

    PrintResult(CircleAreaInscribedInSquare(ReadSquereSide()));

    return 0;
}