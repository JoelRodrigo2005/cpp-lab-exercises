#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int mileage, emission_level;

  cout<<"Enter vehicle's fuel efficiency(km/L): ";
  cin>>mileage;

  cout<<"Enter emission level(g/km)           : ";
  cin>>emission_level;

  cout<<"\n\n";
  cout<<"---------------------------------------------------------\n";
  cout<<"Vehicle's fuel efficiency: "<<setw(16)<<mileage<<"km/L"<<endl;
  cout<<"Emission level           : "<<setw(16)<<emission_level<<"g/km"<<endl;
  cout<<"Vehicle category         : "<<setw(20);

  if(emission_level<150){
      if (mileage>=25 && emission_level<100){
        cout<<"Eco friendly";
      }
      if (mileage>=15 && mileage<24){
        cout<<"Standard";
      }
      if (mileage<15){
        cout<<"Low efficiency";
      }
  }
  else{
    cout<<"This is a polluting vehicle!";
  }
  cout<<"\n\n";
  return 0;
}
