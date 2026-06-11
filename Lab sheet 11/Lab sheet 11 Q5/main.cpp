#include<iostream>

using namespace std;

double electricitybill(int units, double costperunit);

int main(){
    int units;
    double costperunit;

    cout<<"Enter number of units consumed: ";
    cin>>units;

    cout<<"Enter cost per unit: ";
    cin>>costperunit;

    double total=electricitybill(units, costperunit);

    cout<<"\n\n";
    cout<<"------------------------------------------------------------------------------------\n";
    cout<<"                                    Monthly Electricity Bill                        \n";
    cout<<"\n";
    cout<<"Monthly usage      : "<<units<<endl;
    cout<<"Cost per Unit      : "<<costperunit<<endl;
    cout<<"Monthly total cost : "<<total<<endl;
    return 0;

}
double electricitybill(int units, double costperunit){
    double total= units*costperunit;
    return total;
}
