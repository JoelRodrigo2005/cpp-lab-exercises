#include <iostream>

using namespace std;

int main(){
    double temp[3][4];
    string time[4]={"Morning","Noon","Evening","Night"};

    for(int i=0;i<3;i++){
        cout<<"Patient "<<i+1<<" details----------------------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<time[j]<<" : ";
            cin>>temp[i][j];
        }
        cout<<endl;
    }

    cout<<"\n\t\t";
    for(int i=0;i<4;i++){
        cout<<time[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"Patient "<<i+1<<"\t";
        for(int j=0;j<4;j++){
            cout<<temp[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
