#include <iostream>

using namespace std;

int main(){
    int n,m; //n=number of customer| m=number of items

    cout<<"Enter number of customers: ";
    cin>>n;

    cout<<"Enter of items purchased by each customer: ";
    cin>>m;

    cout<<"\n\n";

    for(int i=1; i<=n; i++){
        double price,total =0;
        cout<<"Customer "<<i<<": "<<endl;
        for(int j=1; j<=m; j++){
            cout<<"Enter price of item "<<j<<": ";
            cin>>price;

            total+=price;
        }
        double average=total/m;

        cout<<"Total bill for customer "<<i<<"= "<<total<<endl;
        cout<<"Average item price "<<average<<endl;
        cout<<"\n";

    }

    return 0;
}
