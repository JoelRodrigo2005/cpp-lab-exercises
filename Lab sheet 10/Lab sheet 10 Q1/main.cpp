#include<iostream>
#include<string>

using namespace std;

int main(){
    double temp;
    string one="Warning:Temperature Too Low.";
    string two="System Operating Normally.";
    string three="Alert:Overheating Risk.";

    cout<<"Enter temperature in Celsius(Enter -1 to exit): ";
    cin>>temp;

    while(temp!=-1){
        if(temp<18){
            cout<<one<<endl;
        }
        else if (temp>18 && temp<27){
            cout<<two<<endl;
        }
        else if (temp>27){
            cout<<three<<endl;
        }

        cout<<"Enter temperature in Celsius(Enter -1 to exit): ";
        cin>>temp;
    }
    cout<<"Thank you!"<<endl;

    return 0;
}
