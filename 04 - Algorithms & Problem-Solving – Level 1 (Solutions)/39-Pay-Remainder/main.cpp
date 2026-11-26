#include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float Number = 0;

    cout << message;
    cin >> Number;

    return Number;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

int main()
{
    
    float TotalBill = ReadNumber("Please enter TotalBill ?");

    float TotalCashPaid = ReadNumber("Please enter TotalCashPaid ?");

    cout << "\nTotal bill is: " << TotalBill << endl;

    cout << "Total cash paid is: " << TotalCashPaid << endl;

    cout << "\n***********************\n";

    cout << "\nRemainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
    

    return 0;
}