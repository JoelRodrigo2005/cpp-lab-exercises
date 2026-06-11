#include <iostream>

using namespace std;

int main(){
    double daily_rainfall,average;
    double total=0;

    for(int i=1;i<=5;i++){

        cout<<"Enter day "<<i<<" rainfall value(mm): ";
        cin>>daily_rainfall;
        total=total+daily_rainfall;
    }
    average = total/5.0;

    cout<<"\n\n";
    cout<<"=========================================================================="<<endl;
    cout<<"                           Rainfall report for 5 days                     "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<"Total  : "<<total<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}
