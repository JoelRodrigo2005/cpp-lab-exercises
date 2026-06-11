#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double area, base, height;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    int b = static_cast<int>(base);
    int h = static_cast<int>(height);

    area=0.5*b*h;
    cout <<"The area of the triangle is: "<<fixed << setprecision(2)<< area <<"m^2";
}
