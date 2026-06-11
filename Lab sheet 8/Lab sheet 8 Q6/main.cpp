#include <iostream>

using namespace std;

int main(){
    int r,c;//r=rows and c=columns

    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<"R"<<r<<"C"<<j<<"  ";
        }
        cout<<endl;
    }
return 0;
}
