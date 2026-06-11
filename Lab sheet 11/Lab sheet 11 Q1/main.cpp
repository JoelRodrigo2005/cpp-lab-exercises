#include <iostream>
#include <string>
using namespace std;

void onlinebankingwelcome(string username);

int main(){
    string name;

    cout<<"Enter user name: ";
    getline(cin,name);

    onlinebankingwelcome(name);
    return 0;
}

void onlinebankingwelcome(string username){
    cout<<"\n\n";
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"               HNB ONLINE BANKING PLATFROM             "<<endl;
    cout<<"           Welcome "<<username<<" to online banking    "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}

