#include <iostream>

using namespace std;

double sumcal(double num[5]){
    double total=0;
    for(int i=0;i<5;i++){
        total+=num[i];
    }
    return total;
}
int main(){
    double num[5];

    for(int i=0;i<5;i++){
        cout<<"Enter a number: ";
        cin>>num[i];
    }
    cout<<"\n";
    cout<<"Sum of numbers: "<<sumcal(num)<<endl;
}
