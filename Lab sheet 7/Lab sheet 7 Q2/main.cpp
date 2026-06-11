#include <iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include <iomanip>

using namespace std;

int main(){
    string type;
    int credit_score;

    cout<<"Enter your employment type(permanent|contract|other): ";
    getline(cin,type);
    transform(type.begin(),type.end(),type.begin(),::tolower);

    cout<<"Enter your credit score                             : ";
    cin>>credit_score;

    cout<<"\n\n-----------------------------------------------------------------\n\n";
    cout<<"                           Loan Interest Rate                          \n";
    cout<<"------------------------------------------------------------------\n";
    cout<<"Employment type: "<<setw(30)<<type<<endl;
    cout<<"Credit score   : "<<setw(30)<<credit_score<<endl;

    if (type=="permanent"){
        if (credit_score>=750){
            cout<<"You have received 8% of interest rate";
        }
        else if (650<credit_score<746){
            cout<<"You have received 10% of interest rate";
        }
        else {
            cout<<"You have received 15% of interest rate";
        }
    }
    else if(type=="contract" && credit_score>=700){
        cout<<"You have received 12% of interest rate";
    }
    else {
        cout<<"you have received 15% of interest rate";
    }

    cout<<"\n\n\n";
    return 0;
}
