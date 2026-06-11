#include<iostream>
#include<iomanip>
using namespace std;

double delivery_system(double distance,double cost_per_km);

int main(){
    double distance_traveled,cost;

    cout<<"Enter Distance traveled: ";
    cin>>distance_traveled;

    cout<<"Enter cost per kilometer: ";
    cin>>cost;

    double total_cost= delivery_system(distance_traveled,cost);

    cout<<"\n\n";
    cout<<"-----------------------------------------------------------\n";
    cout<<"                        Delivery charges                   \n";
    cout<<"-----------------------------------------------------------\n";
    cout<<"Distance traveled     : "<<distance_traveled<<endl;
    cout<<"Cost Per Kilometer    : "<<cost<<endl;
    cout<<"Total Delivery Charges: "<<fixed<<setprecision(2)<<total_cost<<endl;
}

double delivery_system(double distance,double cost_per_km){
    return distance*cost_per_km;
}
