#include <iostream>

using namespace std;

int main(){
    int matrixA[2][3]={{1,2,3},{4,5,6}};
    int matrixB[3][2]={{7,8},{9,10},{11,12}};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int sum=0;
            for(int k=0;k<3;k++){
            sum+=matrixA[i][k]*matrixB[k][j];
        }
        cout<<sum<<"  ";
        }
        cout<<endl;
    }

}
