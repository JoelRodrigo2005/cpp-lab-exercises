#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    int x1,x2,y1,y2;
    double d;
    cout << "input values for x1 , x2, y1, y2: ";
    cin >> x1 >>x2>>y1>>y2;
    d =sqrt(pow(x2 - x1,2) + pow(y2-y1,2));
    cout << "The distance between the two point is: " << fixed<< setprecision(3) << d;

}
