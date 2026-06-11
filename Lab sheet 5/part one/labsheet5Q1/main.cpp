#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    string name;
    int balls;
    double strike_rate,runs;
    cout<<"Player Performance Report"<<endl;
    cout<<"---------------------------\n";
    cout<<"Player Name: ";
    cin>>name;
    cout<<"Runs scored: ";
    cin>>runs;
    cout<<"Balls Faced: ";
    cin>>balls;
    strike_rate=(runs/balls)*100;
    cout<<"Strike Rate: "<<fixed<<setprecision(2)<<strike_rate;

}
