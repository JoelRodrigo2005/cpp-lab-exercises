#include<iostream>
#include<string>

using namespace std;

void cinema_ticket_summary(string customer_name, double price);

int main(){
    string name;
    double cost;

    cout<<"Enter customer's name: ";
    getline(cin,name);

    cout<<"Enter ticket price: ";
    cin>>cost;

    cinema_ticket_summary(name,cost);
    return 0;
}

void cinema_ticket_summary(string customer_name, double price){
    cout<<"\n";
    cout<<"-----------------------------------------------------\n";
    cout<<"                Welcome to cinema                    \n";
    cout<<"-----------------------------------------------------\n";
    cout<<"Customer's name: "<<customer_name<<endl;
    cout<<"Ticket Value   : "<<price<<endl;
    cout<<"-----------------------------------------------------\n";
}
