#include <iostream>

using namespace std;

int calculateattendance(int attendance[3][4],int studentindex){
    int total=0;
    for(int k=0;k<4;k++){
        total+=attendance[studentindex][k];
    }
    return total;
}

void checkeligibility(int total){
    if (total>=3){
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
}

int main(){
    int attendance[3][4];
    string topic[6]={"lecture 1","lecture 2","lecture 3","lecture 4","Total    ","Eligibility"};

    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<" Attendance details(0-absent|1-present)-------------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<topic[j]<<" : ";
            cin>>attendance[i][j];
        }
        cout<<endl;
    }

    cout<<"\n\t\t";
    for(int i=0;i<6;i++){
        cout<<topic[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<"\t";
        for(int j=0;j<4;j++){
            cout<<attendance[i][j]<<"\t\t";
        }
        int total=calculateattendance(attendance,i);

        cout<<total<<"\t\t";
        checkeligibility(total);
        cout<<endl;
    }
}
