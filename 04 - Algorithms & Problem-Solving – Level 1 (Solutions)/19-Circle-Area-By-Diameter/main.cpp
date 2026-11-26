#include <iostream>
using namespace std;

 

float ReadDiameter()
{
    float D;
    cout << "Pleas enter circle diameter D ? " << endl;
    cin >> D;

    return D;
}

float CalculateCircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;

    float Area = (PI * D * D) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCricle Area is " << Area << endl;
}

int main()
{

    PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));

    return 0;
}