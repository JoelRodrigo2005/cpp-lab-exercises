#include <iostream>

using namespace std;

int main(){
    int num[5]={5,10,15,20,25};
    int searchnum;
    bool found=false;

    do{
        cout<<"Enter number to search(-0 to exit): ";
        cin>>searchnum;

        for(int i=0;i<5;i++){
            if(num[i]==searchnum){
                found=true;
                break;
            }
            else{
                found=false;
            }
        }
        if (found){
            cout<<"Number found!"<<endl;
        }
        else{
            cout<<"Number not found!"<<endl;
        }
    }
    while(searchnum!=-0);
}
