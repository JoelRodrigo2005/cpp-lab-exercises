#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int mark_1,mark_2,mark_3,total;
    double average;

    cout<<"Enter marks for subject 1 | subject 2 | subject 3 |: ";
    cin>>mark_1>>mark_2>>mark_3;

    cout<<"\n\n";
    cout<<"---------------------------------------------\n";
    cout<<"Subject 1: "<<setw(20)<<mark_1<<endl;
    cout<<"Subject 2: "<<setw(20)<<mark_2<<endl;
    cout<<"Subject 3: "<<setw(20)<<mark_3<<endl;

    if(mark_1>=50 && mark_2>=50 && mark_3>=50){
        total=mark_1+mark_2+mark_3;
        average=total/3.0;

        if (average>=85){
            cout <<"Congratulations! You obtain a Distinction"<<endl;
        }
        else if (average>=75){
            cout<<"Excellent! You obtain a First class"<<endl;
        }
        else if (average>=65){
            cout<<"Good! You obtain a second class"<<endl;
        }
        else {
            cout<<"niceee! you are passed"<<endl;
        }
    }
    else{
        cout<<"Bad Luck! you are failed"<<endl;
    }
    return 0;

}
