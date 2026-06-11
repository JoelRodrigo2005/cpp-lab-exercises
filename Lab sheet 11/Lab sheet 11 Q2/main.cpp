#include<iostream>

using namespace std;

void onlineshoppinginvoice(string productname,double quantity,double unitprice);

int main(){
    string name;
    double amount,price;

    cout<<"Enter product name: ";
    cin>>name;

    cout<<"Enter quantity: ";
    cin>>amount;

    cout<<"Enter unit price: ";
    cin>>price;

    onlineshoppinginvoice(name,amount,price);
    return 0;
}

void onlineshoppinginvoice(string productname,double quantity, double unitprice){
    double totalcost=quantity*unitprice;

    cout<<"\n\n";
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"                          ONLINE SHOPPING PLATFORM                     "<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"Product Name:   "<<productname<<endl;
    cout<<"Quantity    :   "<<quantity<<endl;
    cout<<"Unit price  : Rs."<<unitprice<<endl;
    cout<<"Total price : Rs."<<totalcost<<endl;
}
