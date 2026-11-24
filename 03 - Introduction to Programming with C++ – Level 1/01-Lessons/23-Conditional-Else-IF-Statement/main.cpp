#include <iostream>
using namespace std;

int main()
{
    int Temperature = 28;

    if (Temperature > 35)
    {
        cout << "It is hot outside." << endl;
    }
    else if (Temperature >= 20)
    {
        cout << "The weather is pleasant." << endl;
    }
    else
    {
        cout << "It is cold outside." << endl;
    }

    cout << "Weather check completed." << endl;

    return 0;
}