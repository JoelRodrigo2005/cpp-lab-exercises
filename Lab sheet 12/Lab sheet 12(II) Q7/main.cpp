#include <iostream>
using namespace std;

int main(){
    int matrix[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter a number for ["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
