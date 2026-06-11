#include <iostream>

using namespace std;

int main(){
    double sales[3][4];
    string product[4]={"Rice","Sugar","Milk","Bread"};

    for(int i=0;i<3;i++){
        cout<<"Day "<<i+1<<" Sales-----------------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<product[j]<<" : ";
            cin>>sales[i][j];
        }
        cout<<endl;
    }
    cout<<"\n\t";
    for(int i=0;i<4;i++){
        cout<<product[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"Day "<<i+1<<"\t";
        for(int j=0;j<4;j++){
            cout<<sales[i][j]<<"\t";
        }
        cout<<endl;
    }
}
