#include<iostream>

using namespace std;

int main(){
    int mark[3][4];
    string subject[4]={"Maths","Science","English","ICT"};

    for(int i=0;i<3;i++){
        cout<<"Enter marks for Student "<<i+1<<"-----------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<subject[j]<<" : ";
            cin>>mark[i][j];
        }
        cout<<endl;
    }
    cout<<"\n\t\t";
    for(int i=0;i<4;i++){
        cout<<subject[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<"\t";
        for(int j=0;j<4;j++){
            cout<<mark[i][j]<<"\t";
        }
        cout<<endl;
    }
}
