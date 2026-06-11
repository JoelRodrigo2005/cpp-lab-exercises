#include<iostream>
using namespace std;

int main(){
    int password;

    cout<<"please enter the pin:";
    cin>>password;

    while(password!=2580){
        cout<<"Password is incorrect! try again"<<endl;
        cin>>password;
    }
    cout<<"Password correct"<<endl;
    return 0;

}
