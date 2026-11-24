#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 1. sqrt
    double x = 64;
    cout << "=== sqrt ===" << endl;
    cout << sqrt(x) << endl;        // gives 8
    cout << sqrt(50) << endl;       // gives 7.07107

    // 2. round
    cout << "\n=== round ===" << endl;
    cout << round(2.4) << endl;     // gives 2
    cout << round(2.5) << endl;     // gives 3
    cout << round(2.7) << endl;     // gives 3
    cout << round(sqrt(50)) << endl;// gives 3

    // 3. pow
    int base = 2, exp = 4;
    cout << "\n=== pow ===" << endl;
    cout << pow(base, exp) << endl; // gives 16
    cout << pow(4, 3) << endl;      // gives 64

    // 4. ceil & floor
    cout << "\n=== ceil & floor ===" << endl;
    cout << ceil(2.9) << endl;      // gives 3
    cout << floor(2.9) << endl;     // gives 2
    cout << ceil(-2.9) << endl;     // gives -2
    cout << floor(-2.9) << endl;    // gives -3

    // 5. abs
    cout << "\n=== abs ===" << endl;
    cout << abs(-10) << endl;       // gives 10
    cout << abs(10) << endl;        // gives 10

    return 0;
}