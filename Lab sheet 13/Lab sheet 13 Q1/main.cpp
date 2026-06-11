#include <iostream>

using namespace std;

void billcalculator(int price[5],int quantity[5],int total[5]){
    for(int i=0;i<5;i++){
        total[i]=price[i]*quantity[i];
    }
}

int main(){
    int orderid[5],price[5],quantity[5],total[5];

    for(int i=0;i<5;i++){
        cout<<"Customer "<<i+1<<"-------------------------------"<<endl;
        cout<<"Please enter Order ID: ";
        cin>>orderid[i];

        cout<<"Please enter Item Price: ";
        cin>>price[i];

        cout<<"Please enter quantity: ";
        cin>>quantity[i];
    }
    billcalculator(price,quantity,total);

    for(int m=0;m<5;m++){
        cout<<"----------------------"<<endl;
        cout<<"Order ID: "<<orderid[m]<<endl;
        cout<<"Total   : "<<total[m]<<endl;
    }


}
