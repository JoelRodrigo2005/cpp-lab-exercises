#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

void automatic_classroom_projector(string lecturer_name, string choice);

int main(){

    string name, selection;

    cout<<"Enter Lectures name: ";
    getline(cin,name);

    cout<<"Do you want to start the lecture(yes|no): ";
    getline(cin,selection);
    transform(selection.begin(),selection.end(),selection.begin(),::tolower);

    automatic_classroom_projector(name,selection);
}

void automatic_classroom_projector(string lecturer_name,string choice){
    if (choice=="yes"){
        cout<<"\n";
        cout<<"-----------------------------------------------------\n";
        cout<<"             automatic classroom projector           \n";
        cout<<"-----------------------------------------------------\n";
        cout<<"Lecturer's Name : "<<lecturer_name<<endl;
        cout<<"Choice          : "<<choice<<endl;
        cout<<"Projector status: Turning on"<<endl;
        cout<<"           All set you can begin the lecture!        \n";
    }
    else{
        cout<<"Please Wait for a moment. The Lecture will be starting soon!";
    }
}
