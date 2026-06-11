#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    string product;
    double quantity, total_cost,unit_price;

    cout<<"product name: ";
    cin>>product;
    cout<<"quantity: ";
    cin>>quantity;
    cout<<"unit price: ";
    cin>>unit_price;
    total_cost=quantity*unit_price;
    int stored_cost=static_cast<int>(total_cost);

    cout<<"online shopping invoice \n";
    cout<<"---------------------------\n";
    cout<<"product name      : "<<product<<endl;
    cout<<"quantity purchased: "<<quantity<<endl;
    cout<<"Total cost        : "<<fixed<<setprecision(2)<<total_cost<<endl;
    cout<<"Stored cost value : "<<stored_cost;

}
