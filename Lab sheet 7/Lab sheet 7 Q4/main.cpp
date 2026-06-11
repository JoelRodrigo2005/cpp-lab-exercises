#include <iostream>

using namespace std;

int main(){
    int programming_marks, maths_marks, attendance;

    cout<<"Enter marks for programming: ";
    cin>>programming_marks;

    cout<<"Enter marks for attendance: ";
    cin>>maths_marks;

    cout<<"Enter total attendance percentage: ";
    cin>>attendance;

    bool eligibilty = true;

    cout<<"\n\nEligibility check \n";
    if (programming_marks<70){
        cout<<"- Your programming marks are lower than 70 "<<endl;
        eligibilty=false;
    }
    if(maths_marks<65){
        cout<<"-Your mathematics marks are lower then 65 "<<endl;
        eligibilty=false;
    }
    if (attendance<80){
        cout<<"-Your attendance is below than 80% "<<endl;
        eligibilty=false;
    }

    cout<<"\n";
    if (eligibilty==true){
        cout<<"Congratulations! Your eligible to register for the advance programming course. ";
    }
    else {
        cout<<"Sorry your are not eligible. ";
    }
    return 0;
}
