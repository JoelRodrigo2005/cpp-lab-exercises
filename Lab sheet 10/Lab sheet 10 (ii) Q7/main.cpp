#include<iostream>
#include<iomanip>

using namespace std;

double salary_maker();

int main(){
    double basic_salary, research_allowance, tax, final_salary;

    basic_salary=salary_maker();

    cout<<"Enter research allowance: ";
    cin>>research_allowance;

    cout<<"Enter tax amount: ";
    cin>>tax;

    final_salary=basic_salary + research_allowance - tax;

    cout<<"\n\n";
    cout<<"---------------------------------------------------------------------------\n";
    cout<<"                                  Salary calculator                        \n";
    cout<<"---------------------------------------------------------------------------\n";
    cout<<"Basic Salary      : "<<fixed<<setprecision(2)<<basic_salary<<endl;
    cout<<"Research Allowance: "<<fixed<<setprecision(2)<<research_allowance<<endl;
    cout<<"Tax Amount        : "<<fixed<<setprecision(2)<<tax<<endl;
    cout<<"Final salary      : "<<fixed<<setprecision(2)<<final_salary<<endl;
}

double salary_maker(){
    double base_salary;
    cout<<"Enter the basic salary: ";
    cin>>base_salary;
    return base_salary;
}
