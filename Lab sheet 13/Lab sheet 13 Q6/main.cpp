#include <iostream>

using namespace std;

int main(){
    int passengers[3][4];
    string time[5]{"08.00 a.m","10.00 a.m","12.30 p.m","2.00 p.m","Total"};

    for(int i=0;i<3;i++){
        cout<<"Route No."<<i+1<<" ---------------------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<time[j]<<" : ";
            cin>>passengers[i][j];
        }
        cout<<endl;
    }
    cout<<"\n\t";
    for(int i=0;i<5;i++){
        cout<<time[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"Route "<<i+1<<"\t";
        int total=0;
        for(int j=0;j<4;j++){
           cout<<passengers[i][j]<<" \t\t";
           total+=passengers[i][j];
        }
        cout<<total<<endl;

    }
}
