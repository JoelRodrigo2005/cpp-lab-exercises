#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>

using namespace std;

int main(){
    string type;

    for(int i=0;i<=10;i++){
        cout<<"Enter ticket type(Regular|Premium|VIP): ";
        getline(cin,type);
        transform(type.begin(),type.end(),type.begin(),::toupper);

        int price;
        if(type=="REGULAR"){
            cout<<"Ticket type: "<<type<<endl;
            price=10;
            cout<<"Price is: $"<<price<<endl;
        }
        else if(type=="PREMIUM"){
            cout<<"Ticket type: "<<type<<endl;
            price=15;
            cout<<"Price is: $"<<price<<endl;
        }
        else if(type=="VIP"){
            cout<<"Ticket type: "<<type<<endl;
            price=25;
            cout<<"Price is: $"<<price<<endl;
        }
    }

    return 0;
}

