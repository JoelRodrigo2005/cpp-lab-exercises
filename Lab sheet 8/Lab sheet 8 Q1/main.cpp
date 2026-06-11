#include <iostream>

using namespace std;

int main(){
    double monthly_savings,total_savings;
    int n;

    cout<<"Enter a fixed monthly saving amount: ";
    cin>>monthly_savings;
    cout<<"Enter number of months: ";
    cin>>n;

    for(int i=1;i<=n;i++){
             total_savings=monthly_savings*n;
    }


    cout<<"\n\n";
    cout<<"================================================================\n";
    cout<<"                          Money saving tracker                  \n";
    cout<<"================================================================\n";
    cout<<"Savings per month: "<<monthly_savings<<endl;
    cout<<"Number of months : "<<n<<endl;
    cout<<"Total savings    : "<<total_savings<<endl;

    return 0;

}
