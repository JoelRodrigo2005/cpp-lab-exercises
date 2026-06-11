#include<iostream>
#include<string>

using namespace std;

int main(){
    int battery_level;
    string one="Battery level: safe.";
    string two="Battery level: Moderate.";
    string three="Battery level: Low - Prepare to Land.";
    string four="Critical Battery - Immediate Landing Required.";

    cout<<"Enter drone's battery level: ";
    cin>>battery_level;

    while(battery_level!=0){

        if (battery_level>60){
                cout<<one<<endl;
        }
        else if(battery_level>=30 && battery_level<=60){
            cout<<two<<endl;
        }
        else if(battery_level>=10 && battery_level<=29){
            cout<<three<<endl;
        }
        else {
            cout<<four<<endl;
        }

        cout<<"Enter drone's battery level: ";
        cin>>battery_level;
    }

    return 0;

}
