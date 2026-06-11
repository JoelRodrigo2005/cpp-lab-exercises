#include <iostream>
using namespace std;

int main(){
    double energy,temp;
    char x;

    do{
        cout<<"Energy usage(kwh): ";
        cin>>energy;
        cout<<"Serve temperature: ";
        cin>>temp;

        if(energy>=500){
            if (temp<=40){
                cout<<"Condition: Normal server operation. "<<endl;
            }
            else{
                cout<<"Condition: Cooling system recommended. "<<endl;
            }
        }
        else if(energy>501 && energy<=1000){
            if (temp<=45){
                cout<<"Condition: High workload. "<<endl;
            }
            else{
                cout<<"Condition: Warning overheating risk. "<<endl;
            }

        }
        else if(energy>1000){
            if(temp<=45){
                cout<<"Condition: Heavy AI processing load. "<<endl;
            }
            else{
                cout<<"Condition: Critical Shutdown required. "<<endl;
            }
        }

        cout<<"\n";
        cout<<"Do you want to enter another server report(y/n): ";
        cin>>x;

    }while (x=='y');

    cout<<"\n";
    cout<<"Thank you! "<<endl;

    return 0;
}
