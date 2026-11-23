#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Pleas enter rectangle width A ? " << endl;
    cin >> A;

    cout << "Pleas enter rectangle length B ?: " << endl;
    cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;
}

void PrintResult(float Area)
{
    cout << "\nRectange Area is " << Area << endl;
}

int main()
{
    float A, B;

    ReadNumbers(A, B);

    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}