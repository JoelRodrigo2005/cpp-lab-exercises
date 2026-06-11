#include <iostream>
using namespace std;

int main() {
    int battery;
    double weight;
    char choice;

    do {
        cout << "\n--- Drone Delivery Monitoring ---\n";

        cout << "Enter drone battery level (%): ";
        cin >> battery;

        cout << "Enter package weight (kg): ";
        cin >> weight;


        if (battery >= 70) {
            if (weight <= 3) {
                cout << "Status: Safe for long-distance delivery\n";
            } else {
                cout << "Status: Heavy load – reduce delivery distance\n";
            }
        }
        else if (battery >= 40 && battery <= 69) {
            if (weight <= 3) {
                cout << "Status: Medium distance delivery allowed\n";
            } else {
                cout << "Status: Risky delivery – battery may drain\n";
            }
        }
        else {
            if (weight <= 2) {
                cout << "Status: Short distance delivery only\n";
            } else {
                cout << "Status: Delivery not recommended\n";
            }
        }

        cout << "\nDo you want to monitor another drone? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nSystem stopped. All drones processed.\n";
    return 0;
}
