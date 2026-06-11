#include <iostream>

using namespace std;

int main() {

    double charging_time, cost, energy_consumption;

    cout<<"Enter charging time(24 hour format): ";
    cin>>charging_time;

    cout<<"Enter energy consumption(kwh): ";
    cin>>energy_consumption;

    cout<<"\n\n";
    cout<<"----------------------------------------------------------\n";
    cout<<"                    charging fee calculator               \n";
    cout<<"----------------------------------------------------------\n";
    cout<<"charging time     :        "<<charging_time<<endl;
    cout<<"energy consumption:        "<<energy_consumption<<"kwh"<<endl;

    if ((charging_time>=6 && charging_time<10) || (charging_time>=18 && charging_time<22)){
        cost=energy_consumption*0.30;
    }
    else {
        cost=energy_consumption*0.20;
    }

    if (energy_consumption>50){
        cost=cost*1.05;
    }
    cout<<"total cost is: Rs."<<cost<<endl;
return 0;
}
