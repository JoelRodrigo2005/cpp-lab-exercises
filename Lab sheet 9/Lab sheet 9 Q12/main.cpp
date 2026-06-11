#include <iostream>
using namespace std;

int main() {
    double temp;

    cout << "Weather Monitoring System\n";
    cout << "Enter temperature (-100 to stop):\n";

    cout << "\nEnter temperature: ";
    cin >> temp;

    while (temp != -100) {
        if (temp > 32) {
            cout << "Stay hydrated.\n";
        }
        else if (temp >= 20 && temp <= 32) {
            cout << "Good weather for outdoor activities.\n";
        }
        else {
            cout << "Wear warm clothes.\n";
        }

        cout << "\nEnter temperature: ";
        cin >> temp;
    }

    cout << "\nSystem stopped.\n";
    return 0;
}
