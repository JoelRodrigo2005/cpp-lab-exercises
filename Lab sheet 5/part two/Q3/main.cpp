#include <iostream>

using namespace std;

int main()
{
    double salary,increment;
    int number_of_incrementations;

    cout<<"Enter the initial salary amount: ";
    cin>>salary;

    cout<<"Enter the number of updates you want to increment: ";
    cin>>number_of_incrementations;

    for(int i=1; i<=number_of_incrementations; i++){
        cout<< "Enter incrementation: ";
        cin>>increment;

        salary +=increment;
        cout<<"Salary after update no. "<<i<<"="<<salary<<endl;
    }

    cout<< "Final salary: "<< salary <<endl;

    return 0;
}
