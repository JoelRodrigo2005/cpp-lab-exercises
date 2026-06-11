#include <iostream>

using namespace std;

int main()
{
 float basic_salary, bonus_amount, gross_salary;
 const float threshold_value= 50000.00;
 cout<<"Enter your basic salary and bonus salary in order: ";
 cin>>basic_salary>>bonus_amount;

 gross_salary=basic_salary+bonus_amount;

 cout<<"------------------------------------\n";
 cout<<"Your basic salary: "<<basic_salary<<endl;
 cout<<"Your bonus salary: "<<bonus_amount<<endl;
 cout<<"Your gross salary: "<<gross_salary<<endl;
 cout<<"Is your gross salary greater than equal to the threshold value:"<<(gross_salary>=threshold_value?"true":"false");
 cout<<"\n \n";

}

