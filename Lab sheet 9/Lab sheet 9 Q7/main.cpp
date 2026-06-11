#include<iostream>

using namespace std;

int main(){
    double price,discount,total;

    cout<<"Enter item price: ";
    cin>>price;

    while(price!=0){

        if(price>400){
            discount=price*0.15;
        }
        else{
            if(price>=200&&price<=400){
                discount=price*0.08;
            }
            else {
                discount=0;
            }
        }
    total=price-discount;
    cout<<"Item price: "<<price<<endl;
    cout<<"Discount  : "<<discount<<endl;
    cout<<"Total     : "<<total<<endl;

    cout<<"\n";
    cout<<"Enter item price: ";
    cin>>price;
    }

return 0;


}
