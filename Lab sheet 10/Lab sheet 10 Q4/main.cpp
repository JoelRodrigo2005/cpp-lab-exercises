#include<iostream>
#include<string>
using namespace std;

int main(){
    string one="Sprinklers Activated.";
    string two="Soil Moisture Sufficient. ";
    string three="Monitoring Conditions.";

    double temp,moisture;

    cout<<"Enter temp(C) and Moisture Level: ";
    cin>>temp>>moisture;

    if(moisture<40 && temp>30){
        cout<<one<<endl;
    }
    else if(moisture>=40){
        cout<<two<<endl;
    }
    else {
        cout<<three<<endl;
    }
    cout<<"Thank you!";
    return 0;
}
