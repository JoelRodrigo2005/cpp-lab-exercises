#include<iostream>

using namespace std;

void smartfan(double temperature);

int main(){
    double temp;

    cout<<"Enter room temperature: ";
    cin>>temp;

    smartfan(temp);
    return 0;
}
void smartfan(double temperature){
    string status;

    if (temperature>=28){
        status="ON";
    }
    else{
        status="OFF";
    }

    cout<<"\n\n";
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"                       SMART FAN SYSTEM                     "<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Temperature : "<<temperature<<endl;
    cout<<"Fan status  : "<<status<<endl;
    cout<<"============================================================"<<endl;
}
