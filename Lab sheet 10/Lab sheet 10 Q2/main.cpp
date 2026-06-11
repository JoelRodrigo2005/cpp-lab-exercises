#include<iostream>
using namespace std;

int main(){
    double total=0,usage;
    string option;

    do{
        cout<<"Enter monthly GB usage: ";
        cin>>usage;

        if(usage<=100){
            total=500;
        }
        else if(usage>=101 && usage<=300){
            total=800;
        }
        else if(usage>=301 && usage<=500){
            total=1200;
        }
        else{
            total=1600;
        }

        cout<<"Your total bill is: Rs."<<total<<endl;
        cout<<"Do you want to enter another customers usage(y/n): ";
        cin>>option;
    }
    while(option=="Y"||option=="y");
    cout<<"Thank you!";
    return 0;
}
