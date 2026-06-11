#include<iostream>

using namespace std;

int main(){
     int batch,product,total=0;

     cout<<"Enter the number of defects products in batch(or -1 to exit):";
     cin>>product;

     while(product!=-1){
        total+=product;
        batch++;
        cout<<"Total number batches: "<<batch<<endl;
        cout<<"Total number of defects "<<total<<endl;
        cout<<"\n";
        cout<<"Enter the number of defects products in batch "<<batch<<" (or -1 to exit) :";
        cin>>product;
     }
     cout<<"Thank you!";
     return 0;

}
