#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double gpa,income;

    cout<<"Enter you GPA points: ";
    cin>>gpa;

    cout<<"Enter your family income: ";
    cin>>income;

    cout<<"\n==================scholarship type=====================\n\n";
    cout<<"GPA points   : "<<setw(34)<<gpa<<endl;
    cout<<"Family income:"<<setw(35)<<income<<endl;
    cout<<"\n\n";

    if (gpa>=3.7 && income<2000){
        cout<<setw(52)<<"**********************************************\n";
        cout<<setw(52)<<"*  you have been awarded a full scholarship  *\n";
        cout<<setw(52)<<"**********************************************\n";
    }
    else if (gpa>=3.5 && income<4000){
        cout<<setw(52)<<"**********************************************\n";
        cout<<setw(52)<<"* you have been awarded a partial scholarship*\n";
        cout<<setw(52)<<"**********************************************\n";
    }
    else if(gpa>=3.0){
        cout<<setw(52)<<"********************************************\n";
        cout<<setw(52)<<"* you have been awarded a merit certificate*\n";
        cout<<setw(52)<<"********************************************\n";
    }
    else {
        cout<<setw(52)<<"********************************************\n";
        cout<<setw(52)<<"*      NOT ELIGIBLE FOR ANY SCHOLARSHIP    *\n";
        cout<<setw(52)<<"********************************************\n";
    }
return 0;
}
