#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    double usage_bytes,kb,mb,gb;

    cout<<"user data usage in bytes: ";
    cin>>usage_bytes;

    kb=usage_bytes/1024;
    mb=kb/1024;
    gb=mb/1024;

    cout<<"Internet usage report \n";
    cout<<"----------------------- \n";
    cout<<"Data used (kb): "<<fixed<<kb<<"KB"<<endl;
    cout<<"Data used (mb): "<<fixed<<mb<<"MB"<<endl;
    cout<<"Data used (gb): "<<fixed<<gb<<"GB"<<endl;
}
