#include <iostream>

using namespace std;

int main(){
    double usage=0,input;

    while(usage<100){
        cout<<"Enter data used(GB): ";
        cin>>input;

        usage+=input;

        cout<<"Total usage so far: "<<usage<<"GB"<<endl;
    }
    cout<<"Monthly limit reached!"<<endl;
    return 0;
}
