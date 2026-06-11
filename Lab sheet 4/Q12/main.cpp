#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double working_days, attendance,attendance_percentage;
    cout<<"Enter total working days: ";
    cin>>working_days;
    cout<<"Enter total attendance: ";
    cin>>attendance;
    attendance_percentage=(attendance/working_days)*100.0;

    cout << "--------------------------------------- \n";
    cout << "your university attendance percentage \n";
    cout<< "--------------------------------------------"<<endl;
    cout<<"Total working days   :"<<setw(20)<<working_days<<endl;
    cout<<"Total attendance     :"<<setw(20)<<attendance<<endl;
    cout<<"Attendance percentage:"<<setw(20)<<fixed<<setprecision(2)<<attendance_percentage<<"%"<<endl;
    cout<<"----------------------------------------------";
    return 0;
}
