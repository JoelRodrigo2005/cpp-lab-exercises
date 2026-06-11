#include <iostream>;
using namespace std;
int main() {
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
    double percentage;

    cout <<"Enter marks for subject 1: ";
    cin >> sub1;
    cout <<"Enter marks for subject 2: ";
    cin >> sub2;
    cout <<"Enter marks for subject 3: ";
    cin >> sub3;
    cout <<"Enter marks for subject 4: ";
    cin >> sub4;
    cout <<"Enter marks for subject 5: ";
    cin >> sub5;
    total = sub1+sub2+sub3+sub4+sub5;
    percentage = (total/500)*100;
    cout << "Your total marks is: " << total << endl;
    cout << "Your percentage is: " <<percentage;
    return 0;
}
