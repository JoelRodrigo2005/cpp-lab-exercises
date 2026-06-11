#include <iostream>

using namespace std;

int main(){
    int num[5];

    for(int i=0;i<5;i++){
        cout<<"Please enter an integer number: ";
        cin>>num[i];
    }
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;
    cout<<num[4]<<endl;

    return 0;
}
