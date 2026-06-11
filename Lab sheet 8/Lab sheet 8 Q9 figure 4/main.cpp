#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; i--) {

        // Print leading spaces
        for(int s = 0; s < rows - i; s++) {
            cout << " ";
        }

        // Print stars
        for(int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
