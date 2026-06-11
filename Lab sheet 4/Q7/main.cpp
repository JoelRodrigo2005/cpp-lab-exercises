#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double m, v, k_e;
    cout << "Enter the mass(kg): ";
    cin >> m;
    cout <<"Enter velocity(m/s): ";
    cin >> v;
    k_e=0.5*m*pow(v,2);
    cout <<"Kinetic energy is: "<< fixed << setprecision(2)<<k_e<<"J";
}
