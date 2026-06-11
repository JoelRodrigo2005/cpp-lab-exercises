#include <iostream>

using namespace std;

int main(){
    int num[6];

    for(int i=0;i<6;i++){
        cout<<"Enter an integer: ";
        cin>>num[i];
    }
    for(int i=0;i<6;i++){
        cout<<num[i]<<"  ";
    }
    return 0;
}
