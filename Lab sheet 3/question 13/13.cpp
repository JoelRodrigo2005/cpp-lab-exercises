#include <iostream>;
using namespace std;
int main(){
    double distance ;
    double fuel_consumption;
    double price_per_liter;
    cout << "Distance of the trip in kilometers: " ;
    cin >> distance ;
    cout << "Car's fuel consumption per 100km: " ;
    cin >> fuel_consumption ;
    cout << "Fuel price per liter: ";
    cin>> price_per_liter ;
    cout << "Total fuel cost is Rs." << (distance*fuel_consumption/100)*price_per_liter;
    return 0;
}
