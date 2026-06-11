#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 100; i++) {

        if (i % 4 == 0 && i % 6 == 0) {
            cout << i << " - Special" << endl;
        }
        else if (i % 2 == 0) {
            cout << i << " - Even" << endl;
        }
        else {
            cout << i << " - Odd" << endl;
        }
    }

    return 0;
}
