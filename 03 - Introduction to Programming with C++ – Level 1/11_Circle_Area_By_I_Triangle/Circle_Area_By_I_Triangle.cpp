#include <iostream>
using namespace std;

 

void ReadTriangleData(float& A, float& B)
{

    cout << "Pleas enter triangle side A ? " << endl;
    cin >> A;

    cout << "Pleas enter triangle base B ? " << endl;
    cin >> B;
}

float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;

    float Area = PI * ((B * B) / 4) * ((2 * A - B) / (2 * A + B));

    return Area ;
}

void PrintResult(float Area)
{
    cout << "\nCricle Area is " << Area << endl;
}

int main()
{
    float A, B;

    ReadTriangleData(A, B);

    PrintResult(CircleAreaByITriangle(A, B));

    return 0;
}