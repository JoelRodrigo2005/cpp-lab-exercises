#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double weight, height,bmi;
    cout<<"Enter your weight(kg):";
    cin >> weight;
    cout << "Enter your height(m):";
    cin >> height;
    bmi=weight/pow(height,2);
    cout <<"your BMI level is:" << fixed << setprecision(2) << bmi << endl;
    return 0;

}
