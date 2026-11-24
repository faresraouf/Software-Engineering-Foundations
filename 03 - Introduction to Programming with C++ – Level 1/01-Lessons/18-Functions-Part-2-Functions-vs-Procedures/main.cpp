#include <iostream>
#include <string>

using namespace std;

void myFunction()
{
    cout << "This is my first function, it got executed :-)" << endl;
}

string myFunction2()
{
    return "This is my first returning value function, this is the value";
}

int main()
{
    myFunction();
    cout << myFunction2() << endl;

    return 0;
}