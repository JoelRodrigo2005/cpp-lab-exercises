#include <iostream>

using namespace std;

int main(){
    float fuel_efficiency;

    cout<<"Enter vehicle's fuel efficiency(km/L): ";
    cin>>fuel_efficiency;

    cout<<"\n\n";
    cout<<"==========================================================================\n";
    cout<<"                   Fuel efficiency for the next 8 years!                  \n";
    cout<<"==========================================================================\n";
    cout<<"current fuel efficiency: "<<fuel_efficiency<<endl;

    for(int i=1;i<=8;i++){
        fuel_efficiency=fuel_efficiency-(fuel_efficiency*0.03);
        cout<<"Fuel efficiency after "<<i<<" years: "<<fuel_efficiency<<endl;
    }return 0;
}
