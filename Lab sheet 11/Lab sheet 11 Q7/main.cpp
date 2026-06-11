#include<iostream>
using namespace std;

double returnbasicsalary(){
    double basicsalary;
    cout<<"Enter basic salary: ";
    cin>>basicsalary;
    return basicsalary;
}

int main(){
    double basicsal,allowance,deductions,finalsal;

    basicsal=returnbasicsalary();

    cout<<"Enter allowance amount: ";
    cin>>allowance;

    cout<<"Enter tax deduction amount: ";
    cin>>deductions;

    finalsal=(basicsal*12)+allowance-deductions;

    cout<<"\n\n";
    cout<<"----------------------------------------------------------------------\n";
    cout<<"                               salary calculator                      \n";
    cout<<"\n";
    cout<<"Basic Salary       : "<<basicsal<<endl;
    cout<<"Allowance          : "<<allowance<<endl;
    cout<<"Deductions         : "<<deductions<<endl;
    cout<<"Final annual salary: "<<finalsal<<endl;
    cout<<"\n";

    return 0;
}
