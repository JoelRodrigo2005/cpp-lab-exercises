#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "\n===== Initial Values =====" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    bool isEqual = (a == b);
    bool isGreater = (a > b);
    bool logicalExp = (a > 0 && b > 0);
    bool complexExp = (a > b || b % 2 == 0);

    cout

}
