#include <iostream>
#include<iomanip>

using namespace std;

int main(){
  double total_actions,successful_actions,accuracy;


  cout<<"Total Action: ";
  cin>>total_actions;
  cout<<"Successful Actions: ";
  cin>>successful_actions;

  accuracy=(successful_actions/total_actions)*100.0;
  int rounded_accuracy = static_cast<int>(accuracy);

  cout<<"Game Performance Summary \n";
  cout<<"----------------------------\n";
  cout<<"Total Actions     : "<<total_actions<<endl;
  cout<<"Successful Actions: "<<successful_actions<<endl;
  cout<<"Accuracy          : "<<fixed<<setprecision(2)<<accuracy<<endl;
  cout<<"Accuracy (rounded): "<<rounded_accuracy;
}
