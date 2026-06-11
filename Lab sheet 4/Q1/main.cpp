#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string temp;
    double fahrenhiet;
    cout<<"Enter temperature: " ;
    cin >> temp;
    int dec_temp = stoi(temp);

    double cal_temp = static_cast<double>(dec_temp);

    fahrenhiet = (9.0/5*cal_temp)+32;
    cout<<"Temperature in fahrenhiet is:"<< fixed << setprecision(2)<< fahrenhiet << endl;
    return 0;

}
