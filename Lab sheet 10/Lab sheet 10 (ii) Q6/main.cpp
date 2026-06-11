#include<iostream>
#include<iomanip>

using namespace std;

double coffee_billing_system(double cost, double service_charge);

int main(){
    double amount, service_percentage;

    cout<<"Enter the bill amount: ";
    cin>>amount;

    cout <<"Enter the service charge: ";
    cin>>service_percentage;

    double total_bill= coffee_billing_system(amount,service_percentage);

    cout<<"\n\n";
    cout<<"------------------------------------------------------------\n";
    cout<<"                     coffee billing system                  \n";
    cout<<"------------------------------------------------------------\n";
    cout<<"Bill Amount       : "<<amount<<endl;
    cout<<"Service Percentage: "<<service_percentage<<endl;
    cout<<"Final Bill Amount : "<<total_bill<<endl;
    cout<<"\n";
    cout<<"                      Thank you! come again!                 \n";

    return 0;
}

double coffee_billing_system(double cost, double service_charge){
    double servicecharge= (cost*service_charge)/100.0;
    double total=cost+servicecharge;
    return total;
}
