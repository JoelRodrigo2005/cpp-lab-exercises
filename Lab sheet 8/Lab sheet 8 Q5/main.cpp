#include <iostream>

using namespace std;

int main(){
    int n; //n = number of shelves in a library
    cout<<"Enter number of shelves: ";
    cin>>n;

    for (int i=1;i<=n;i++){

        if(i%7!=0){
            cout<<i<<endl;
        }
    }
}
