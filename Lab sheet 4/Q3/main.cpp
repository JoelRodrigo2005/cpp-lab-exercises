#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double speed, distance, time;
    cout << "Input the distance: ";
    cin>>distance;
    cout << "Input the time: ";
    cin >> time;
    speed=distance/time;
    cout<< "speed is: "<<fixed<< setprecision(1)<<speed<< "ms⁻²";

}
