#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string user_role;
    double login_time;
    int role_code;

    cout<<"Enter user role(Admin|Staff|Guest): ";
    getline(cin,user_role);
    transform(user_role.begin(),user_role.end(),user_role.begin(),::tolower);

    cout<<"Enter login time: ";
    cin>>login_time;

    if (user_role=="admin"){
        role_code=0;
    }
    if (user_role=="staff"){
        role_code=1;
    }
    if (user_role=="guest"){
        role_code=2;
    }


    cout<<"\n\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<"           System access permission determination            \n";
    cout<<"-------------------------------------------------------------\n";
    cout<<"User role : "<<setw(20)<<user_role<<endl;
    cout<<"Login time: "<<setw(20)<<fixed<<setprecision(2)<<login_time<<endl;
    cout<<"\n";
    switch (role_code){
    case 0:
        cout<<"Access granted(Admins can login at any time). ";break;

    case 1:
        if (login_time>8.00 && login_time<18.00){
            cout<<"Access granted(Staff can login between 8.00 to 18.00 hours).";
        }
        else {
            cout<<"Access denied(Staff can only login between 8.00 to q8.00 hours).";
        };break;

    case 2:
        if (login_time>10.00 && login_time<16.00){
            cout<<"Access granted(Guests can login between 10.00 to 16.00 hours).";
        }
        else {
            cout<<"Access denied(Guest can only login between 10.00 to 16.00 hours).";
        };break;

    default:
        cout<<"Invalid Role. Access Denied"<<endl;

    }

    cout<<"\n\n";
    return 0;

}
