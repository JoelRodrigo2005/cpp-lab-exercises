#include<iostream>
#include<string>

using namespace std;

void library_entry_system(string student_name, string student_id );

    int main(){
    string name,id;

    cout<<"Enter student name: ";
    getline(cin,name);

    cout<<"Enter your ID: ";
    getline(cin,id);

    library_entry_system(name,id);

    return 0;
    }
void library_entry_system(string student_name, string student_id ){
    cout<<"\n";
    cout<<"=============================================\n";
    cout<<"              Library Entry System             "<<endl;
    cout<<"---------------------------------------------\n";
    cout<<"Student Name: "<<student_name<<endl;
    cout<<"Student ID  : "<<student_id<<endl;
    cout<<"--------------Welcome to the library---------\n"<<endl;
}

