#include <iostream>

using namespace std;

int main(){
    int G[4][4]={{0,1,0,1},{1,0,1,0},{0,1,0,1},{1,0,1,0}};

    cout<<"Connected Rodes..."<<endl;

    for(int i=0;i<4;i++){
            cout<<i<<"-->";
        for(int j=0;j<4;j++){
            if (G[i][j]==1){
                cout<<" "<<j;
            }

        }
        cout<<endl;
    }
}
