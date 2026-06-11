#include <iostream>

using namespace std;

int main()
{
   int pin;

   for(int i=1;i<4;i++){
    cout<<"Enter the 4-digit pin: ";
    cin>>pin;

    if(pin==2500){
        cout<<"access granted"<<endl;
    }
    else{
        cout<<"Incorrect password. please re-enter! ";
    }
    if(i==3){
        cout<<"max attempts reached! "<<endl;
    }
    }
    return 0;
}
