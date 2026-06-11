#include <iostream>
using namespace std;

int main() {
    int G[4][4] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {0,1,0,0}
    };

    char nodes[] = {'A','B','C','D'};

    for(int i=0;i<4;i++){
        int count = 0;
        cout<<nodes[i]<<" connected to: ";

        for(int j=0;j<4;j++){
            if(G[i][j] == 1){
                cout<<nodes[j]<<" ";
                count++;
            }
        }

        cout<<" | Total: "<<count<<endl;
    }
}
