#include<iostream>

using namespace std;

int main(){
    int membership_fee=500,i=0;

    while(membership_fee!=0){
        membership_fee-=50;
        ++i;
        cout<<"Remaining Membership fee after "<<i<<" month: "<<membership_fee<<endl;
    }
    return 0;

}
