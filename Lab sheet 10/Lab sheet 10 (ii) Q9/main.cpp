#include <iostream>
#include <iomanip>
using namespace std;


double Initial_Deposit_system();

int main() {
    double initial_Deposit, annual_Interest_Rate, maturity_Amount, years;


    initial_Deposit = Initial_Deposit_system();


    cout << "Enter annual interest rate (in %): ";
    cin >> annual_Interest_Rate;

    cout << "Enter number of years: ";
    cin >> years;

    maturity_Amount = initial_Deposit + (initial_Deposit * annual_Interest_Rate * years) / 100.0;


    cout << fixed << setprecision(2);

    cout << "\n--------------------------------------\n";
    cout << "         Fixed Deposit Summary         \n";
    cout << "--------------------------------------\n";
    cout << "Initial Deposit     : Rs. " << initial_Deposit << endl;
    cout << "Annual Interest (%) : " << annual_Interest_Rate << "%" << endl;
    cout << "Number of Years     : " << years << endl;
    cout << "Maturity Amount     : Rs. " << maturity_Amount << endl;
    cout << "--------------------------------------\n";

    return 0;
}


double Initial_Deposit_system() {
    double deposit;
    cout << "Enter initial deposit amount: Rs. ";
    cin >> deposit;
    return deposit;
}
