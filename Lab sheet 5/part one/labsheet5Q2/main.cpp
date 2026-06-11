#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string device_name;
    double v,i,p;//v=voltage,i=current,p=power

    cout<<"Device name: ";
    cin>>device_name;
    cout<<"Enter The Voltage(A) and the current(I): ";
    cin>>v >> i;

    cout<<"Electronic Device Details \n";
    cout<<"--------------------------\n";
    cout<<"Device name: "<<device_name<<endl;
    p=v*i;
    cout<<"power      : "<<scientific<<p<<"w";

}
