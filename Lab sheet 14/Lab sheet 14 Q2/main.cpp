#include <iostream>

using namespace std;

int main(){
    int quantity[2][3]={{10,5,8},{7,6,9}};
    int price[3][1]={{2},{4},{3}};


    for(int i=0;i<2;i++){
            cout<<"Branch "<<i+1<<"  ";
        for(int j=0;j<1;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum+=quantity[i][k]*price[k][j];
            }cout<<sum<<"\t";
        }cout<<endl;

    }
}
