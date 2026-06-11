#include <iostream>
#include<iomanip>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    string room_type, season;
    int stayed_days;
    double cost;
    cout<<"Enter room type(Deluxe|standard): ";
    getline(cin,room_type);
    transform(room_type.begin(),room_type.end(),room_type.begin(),::tolower);

    cout<<"Enter season type(peak|off peak): ";
    getline(cin,season);
    transform(season.begin(),season.end(),season.begin(),::tolower);

    cout<<"Enter number of days stayed: ";
    cin>>stayed_days;

    cout<<"\n\n";
    cout<<"---------------------------------------------------------\n";
    cout<<"                         Hotel bill                      \n";
    cout<<"---------------------------------------------------------\n";
    cout<<"~Room type  : "<<setw(20)<<room_type<<endl;
    cout<<"~Season type: "<<setw(20)<<season<<endl;


    if (room_type=="deluxe"){
        if (season=="peak"){
            cost=stayed_days*200.00;
        }
        else {
            cost=stayed_days*150.00;
        }

    }
    if (room_type=="standard"){
        if (season=="peak"){
            cost=stayed_days*120.00;
        }
        else {
            cost=stayed_days*90.00;
        }
    }

    if (stayed_days>5){
        cost=cost*0.9;
    }

    cout<<"TOTAL BILL: Rs"<<setw(20)<<cost<<"\n\n"<<endl;

    return 0;
}
