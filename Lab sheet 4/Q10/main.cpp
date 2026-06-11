#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cost_per_unit;
    int units_consumed;
    double total_bill;
    string month;

    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the cost per unit: ";
    cin>>cost_per_unit;
    cout<<"Enter total consumption: ";
    cin>>units_consumed;

    total_bill = cost_per_unit*units_consumed;

  cout<<"-----------------------------------------------------------\n";
  cout <<"Your monthly electricity bill for month of "<<month<<endl;
  cout<<"-----------------------------------------------------------\n";
  cout<<"Total consumption:                     "<< setw(20)<<units_consumed<<endl;
  cout<<"Cost per unit:                         "<<setw(20)<<cost_per_unit<<endl;
  cout<<"___________________________________________________________\n";
  cout<<"Your total electricity bill for "<<month<<setw(20)<<fixed<<setprecision(2)<<total_bill<<endl;
  cout<<"-----------------------------------------------------------";
}
