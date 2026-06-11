#include <iostream>
using namespace std;

double monthlymembership(double monthlyprice, double discount);


int main(){

    double monthlyprice, discount;

    cout<<"Enter Monthly Membership cost: ";
    cin>>monthlyprice;
    cout<<"Enter discount percentage:  ";
    cin>>discount;

    double amount=monthlymembership(monthlyprice,discount);

    cout<<"\n\n";
    cout<<"----------------------------------------------------------------------\n";
    cout<<"                              GYM MEMBERSHIP FEE                      \n";
    cout<<"\n";
    cout<<"Monthly membership price: "<<monthlyprice<<endl;
    cout<<"Discount percentage     : "<<discount<<"%"<<endl;
    cout<<"Total payment           : "<<amount<<endl;
    return 0;

}
double monthlymembership(double monthlyprice, double discount){
    double finalpayment=monthlyprice-(monthlyprice*discount/100.0);
    return finalpayment;
}
