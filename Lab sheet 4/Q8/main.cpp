#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string n;
    int total, m, s, e;
    double average;
    cout << "Enter student name: ";
    cin >> n;
    cout << "Enter marks for maths, science and english: ";
    cin >> m>>s>>e;
    total=m+s+e;
    average = total/3.0;

    cout << "Student: " << n<< endl;
    cout << "Math: "<< m<<endl;
    cout << "Science: "<<s<<"\n"
            "English: "<<e<<"\n"
            "--------------------\n"
            "total: "<< total<< "\n"
            "average: "<<fixed<< setprecision(2)<<average<<"\n";

}
