#include <iostream>

using namespace std;

int main(){
    int y;

    cout<<"Enter a time block: ";
    cin>>y;

    for(int t=1;t<=30;t++){
        if ((t/y)%2==0){
            cout<<"sec "<<t<<" : Walk!"<<endl;
        }
        else{
            cout<<"sec "<<t<<" : Dont walk!"<<endl;
        }

    }return 0;
}
