#include <iostream>
#include <iomanip>
using namespace std;

double Distance_Traveled();

int main() {
    double distance, fuel_economy, fuel_price_per_litre, fuel_consumed, total_expense;


    distance = Distance_Traveled();


    cout << "Enter fuel consumption rate (litres per km): ";
    cin >> fuel_economy;

    cout << "Enter fuel price per litre (Rs.): ";
    cin >> fuel_price_per_litre;

    fuel_consumed = distance /  fuel_economy;


     total_expense= fuel_consumed * fuel_price_per_litre;


    cout << fixed << setprecision(2);

    cout << "\n--------------------------------------\n";
    cout << "        Delivery Vehicle Cost          \n";
    cout << "--------------------------------------\n";
    cout << "Distance Traveled      : " << distance << " km" << endl;
    cout << "Fuel Consumption Rate  : " <<  fuel_economy << " L/km" << endl;
    cout << "Fuel Consumed          : " << fuel_consumed << " litres" << endl;
    cout << "Total Travel Expense   : Rs. " << total_expense << endl;
    cout << "--------------------------------------\n";

    return 0;
}

// Function definition
double Distance_Traveled() {
    double distance_km;
    cout << "Enter distance traveled by the vehicle (km): ";
    cin >> distance_km;
    return distance_km;
}
