#include <iostream>;
using namespace std;
int main(){
    int days;
    double Daily_usage;
    double cost_per_GB = 100;
    double total_cost;
    cout << "Enter the days you want to recharge: ";
    cin >> days;
    cout << "Enter the daily usage: ";
    cin >> Daily_usage;
    total_cost = days*Daily_usage*cost_per_GB;
    cout << "Total recharge cost: " << total_cost;
    return 0;

}
