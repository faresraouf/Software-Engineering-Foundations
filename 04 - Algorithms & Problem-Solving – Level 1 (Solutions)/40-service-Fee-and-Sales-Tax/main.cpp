#include <iostream>
using namespace std;


float ReadNumber(string message)
{
    float Number = 0;

    cout << message;
    cin >> Number;

    return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;   // Add 10% service charge.
    TotalBill = TotalBill * 1.16;  // Add 16% tax.

    return TotalBill;  
}


int main()
{
    
    float TotalBill = ReadNumber("Please Enter Total Bill?");
  
    cout << endl;  

    // Display the initial total bill.
    cout << "Total Bill = " << TotalBill << endl;

    // Compute and display the final bill after service and tax.
    cout << "Total Bill After Service and Tax = " 
         << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;  
}