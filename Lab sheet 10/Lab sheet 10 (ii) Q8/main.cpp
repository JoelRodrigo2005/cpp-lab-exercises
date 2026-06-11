#include<iostream>
#include<iomanip>

using namespace std;

double rainfall_system();

int main(){

    double rainfall_millimeters=rainfall_system();

    double rainfaill_centimeters=rainfall_millimeters/10.0;

    cout<<"\n\n";
    cout<<"-----------------------------------------------------------------------\n";
    cout<<"                             rainfall measurement                      \n";
    cout<<"-----------------------------------------------------------------------\n";
    cout<<"Rainfall in millimeters : "<<rainfall_millimeters<<endl;
    cout<<"Rainfall in centimeters : "<<rainfaill_centimeters<<endl;
    cout<<"------------------------------------------------------------------------\n";

    return 0;

}

double rainfall_system(){
    double rainfall_amount_millimeters;
    cout<<"Enter rainfall amount in millimeters: ";
    cin>>rainfall_amount_millimeters;

    return rainfall_amount_millimeters;
}

