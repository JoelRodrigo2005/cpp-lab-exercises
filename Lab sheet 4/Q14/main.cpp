#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double data_Used_MB, cost_Per_GB;

    cout << "Enter total data used (in MB): ";
    cin >> data_Used_MB;

    cout << "Enter cost per GB: ";
    cin >> cost_Per_GB;

    double data_Used_GB = data_Used_MB / 1024.0;


    double total_Cost = data_Used_GB * cost_Per_GB;
    cout<<"------------------------------------------------------\n";
    cout<< fixed << setprecision(2) << "Total monthly cost: Rs:" << total_Cost << endl;
    cout<<"------------------------------------------------------\m";
    return 0;
}
