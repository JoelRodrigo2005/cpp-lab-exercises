#include <iostream>

using namespace std;

int main(){
    int num[5];
    int maxnum,minnum;

    for(int i=0;i<5;i++){
        cout<<"Enter an integer: ";
        cin>>num[i];
    }
    maxnum=num[0];
    minnum=num[0];
    for(int i=0;i<5;i++){
       if(maxnum<num[i]){
            maxnum=num[i];
       }
       if(minnum>num[i]){
            minnum=num[i];
       }
    }
    cout<<"Maximum number: "<<maxnum<<endl;
    cout<<"Minimum number: "<<minnum<<endl;
}
