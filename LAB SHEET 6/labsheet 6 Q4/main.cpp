#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    double quot = static_cast <double>(a / b);
    int rem = a % b;

    a++;
    a--;

    cout << "-----------------------------\n";
    cout << "       RESULTS\n";
    cout << "-----------------------------\n";

    cout << (cout<<"Sum:", sum) << endl;
    cout << (cout << "Difference:", diff) << endl;
    cout << (cout << "Product:   ", prod) << endl;
    cout << (cout << "Quotient:  ", quot) << endl;
    cout << (cout << "Remainder: ", rem) << endl;

    cout << "Final value of first number (after ++ and --): " << a << endl;

    return 0;

}
