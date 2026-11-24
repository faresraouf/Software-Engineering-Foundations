#include <iostream>
using namespace std;

 struct stPiggyBankContent
 {
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
 };
 

stPiggyBankContent ReadTriangleData()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter how many pennys ? " << endl;
    cin >> PiggyBankContent.Penny;

    cout << "Please enter how many nickel ? " << endl;
    cin >> PiggyBankContent.Nickel;

    cout << "Please enter how many dime ? " << endl;
    cin >> PiggyBankContent.Dime;

    cout << "Please enter how many quarter ? " << endl;
    cin >> PiggyBankContent.Quarter;

    cout << "Please enter how many dollar ? " << endl;
    cin >> PiggyBankContent.Dollar;

    return PiggyBankContent;
}

int CalculateTotalPennys(stPiggyBankContent PiggyBankContent)
{
    int TotalPennys = PiggyBankContent.Penny + PiggyBankContent.Nickel * 5 + PiggyBankContent.Dime * 10 + PiggyBankContent.Quarter * 25 + PiggyBankContent.Dollar * 100;

    return TotalPennys;
}


int main()
{
    

    

    int TotalPennies  = CalculateTotalPennys(ReadTriangleData());

    cout << endl << "Total Pennies = " << TotalPennies << endl;

    cout << endl << "Total Dollars = $" << (float)TotalPennies / 100 << endl;

    return 0;
}