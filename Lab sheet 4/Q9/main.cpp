#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    char gender;
    int age;
    double height, weight, x, y, z, q, bmi, bfp;
    x=1.20;
    y=0.23;
    z=16.2;
    q=5.4;

    cout << "Enter your gender(m or f): ";
    cin >> gender;
    if(gender=='m'||gender=='M'){
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your height(m): ";
        cin >> height;
        cout << "Enter your weight: ";
        cin >> weight;
        bmi=weight/pow(height,2);
        bfp=(x*bmi)+(y*age)-z;
        cout << "Your BFP level is: "<< fixed << setprecision(2)<< bfp;

    }else if(gender=='f'||gender=='F'){
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your height(m): ";
        cin >> height;
        cout << "Enter your weight: ";
        cin >> weight;
        bmi=weight/pow(height,2);
        bfp=(x*bmi)+(y*age)-q;
        cout << "Your BFP level is: "<< fixed << setprecision(2)<< bfp;
    }
}
