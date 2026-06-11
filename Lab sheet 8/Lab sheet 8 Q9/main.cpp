#include <iostream>

using namespace std;

int main(){
    int n=0;//n= number of even numbers

    for(int i=1; i<=200; i++){
        if (i%2==0){
            cout<<i<<endl;
            n++;
        }
    }
    cout<<"Number of even numbers between 1 to 200: "<<n<<endl;

    return 0;
}
