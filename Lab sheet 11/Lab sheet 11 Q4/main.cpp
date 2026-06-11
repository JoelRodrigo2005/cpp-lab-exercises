#include<iostream>
using namespace std;

void flightdeparturesystem(string flightnumber, string departuregate);


int main(){
    string flightno,gate;

    cout<<"Enter Flight Number: ";
    cin>>flightno;

    cout<<"Enter Departure Gate: ";
    cin>>gate;

    flightdeparturesystem(flightno,gate);
    return 0;
}

void flightdeparturesystem(string flightnumber, string departuregate){
    cout<<"\n\n";
    cout<<"--------------------------------------------------------------\n";
    cout<<"                     FLIGHT DEPATURE TIMETABLE                 \n";
    cout<<"\n";
    cout<<"Flight Number : "<<flightnumber<<endl;
    cout<<"Departure Gate: "<<departuregate<<endl;
    cout<<"=================================================================";
}
