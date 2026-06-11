#include <iostream>
using namespace std;

int main(){
    int matrix[2][2];
    int transposemat[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter number for ["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    for(int j=0;j<2;j++){
        for(int i=0;i<2;i++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
}
