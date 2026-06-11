#include <iostream>

using namespace std;

int main(){
    int matrix1[2][2],matrix2[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter a number for ["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>matrix1[i][j];
        }
    }
 cout<<endl;
    for(int k=0;k<2;k++){
        for(int n=0;n<2;n++){
            cout<<"Enter a number for ["<<k+1<<"] ["<<n+1<<"] : ";
            cin>>matrix2[k][n];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int sum=0;
            for(int k=0;k<2;k++){
                sum+=matrix1[i][k]*matrix2[k][j];
            }
        cout<<sum<<"  ";
        }
     cout<<endl;
    }
    return 0;

}
