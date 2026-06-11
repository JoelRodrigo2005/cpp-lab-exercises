#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total_distance,fuel_consumption,fuel_economy;
    cout<<"Enter the total distance your traveled: ";
    cin>>total_distance;
    cout <<"Enter total fuel consumption: ";
    cin>>fuel_consumption;
    fuel_economy=total_distance/fuel_consumption;

    cout<<"--------------------------------------------------\n";
    cout<<setw(10)<<"Your vehicle Fuel economy KM/L \n";
    cout<<"--------------------------------------------------\n";
    cout<<"Total distance:         "<<setw(20)<<total_distance<<endl;
    cout<<"Total fuel consumption: "<<setw(20)<<fuel_consumption<<endl;
    cout<<"---------------------------------------------------\n";
    cout<<"Fuel economy KM/L:      "<<setw(20)<<fuel_economy<<endl;
    cout<<"_______________________________________________________";
}
