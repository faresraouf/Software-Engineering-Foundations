#include <iostream>
using namespace std;

void AddTen(int &Num)
{
    Num += 10; 
}

int main()
{
    int Number = 5;

    AddTen(Number);

    cout << "Value after function call: " << Number << endl;

    return 0;
}