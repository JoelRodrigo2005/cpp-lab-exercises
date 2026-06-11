#include<iostream>

using namespace std;

int main(){
    int marks;
    char grade;
    for(int i=1; i<=8; i++){
        cout<<"Enter student "<<i<<" marks: ";
        cin>>marks;

        if(marks>=90&&marks<=100){
            grade='A';
        }
        else if(marks>=80&&marks<=89){
            grade='B';
        }
        else if(marks>=70&&marks<=79){
            grade='C';
        }
        else if (marks>60&&marks<=69){
            grade='D';
        }
        else if (marks<=59){
            grade='F';
        }
        switch (grade){
        case'A':cout<<grade<<endl;break;
        case'B':cout<<grade<<endl;break;
        case'C':cout<<grade<<endl;break;
        case'D':cout<<grade<<endl;break;
        case'F':cout<<grade<<endl;break;
        default:cout<<"Invalid"<<endl;break;

    }
}

}
