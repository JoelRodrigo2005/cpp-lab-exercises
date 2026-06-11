#include <iostream>
using namespace std;

double getloan(){
    double loan;
    cout<<"Enter the loan amount: ";
    cin>>loan;
    return loan;
}
int main(){
    double loanammount=getloan();
    double monthlyamount;
    int years;
    const double interest=7.7;

    cout<<"Enter number of years: ";
    cin>>years;

    double installments=years*12;
    double monthlyinterest=((loanammount/installments)*interest/100.0);
    double monthlyinstallment=(loanammount/installments)+monthlyinterest;

    cout<<"\n\n";
    cout<<"Monthly installment amount: "<<monthlyinstallment<<endl;

    return 0;
}
