#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    const double g = 6.674e-11;
    double m1,m2,r,f;
    cout<<"input masses in kg for m1 and m2: ";
    cin >> m1 >> m2;
    cout << "Input radius in meters: ";
    cin >> r;
    f=g*(m1*m2/r*r);
    cout << "The force of gravity between the two object is: " << scientific << setprecision(7)<<f;

}
