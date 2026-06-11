#include<iostream>

using namespace std;

void flight_departure_system(string flight_number, string departure_time);

int main(){
    string no, time;

    cout<<"Enter flight Number: ";
    cin>>no;

    cout<<"Enter the departure time: ";
    cin>>time;

    flight_departure_system(no,time);
}

void flight_departure_system(string flight_number,string departure_time){
    cout<<"\n";
    cout<<"----------------------------------------------------------\n";
    cout<<"                    Flight Departure timetable            \n";
    cout<<"----------------------------------------------------------\n";
    cout<<"Flight Number : "<<flight_number<<endl;
    cout<<"Departure Time: "<<departure_time<<endl;
    cout<<"                  Thank you!                              \n";

}
