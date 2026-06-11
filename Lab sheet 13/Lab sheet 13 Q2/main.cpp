#include <iostream>
#include <string>

using namespace std;

void fitnesstracker(int steps[4],int calories[4],string name[4]){
    cout<<"\n\n";
    cout<<"Students who walked more than 5000 steps."<<endl;
    for(int i=0;i<4;i++){
        if(steps[i]>5000){
            cout<<name[i]<<endl;
        }
    }
    cout<<"Student who burned more than 200 calories."<<endl;
    for(int j=0;j<4;j++){
        if(calories[j]>200){
            cout<<name[j]<<endl;
        }
    }
}

int main(){
    string name[4];
    int steps[4],calories[4];

    for(int i=0;i<4;i++){

        cout<<"Student "<<i+1<<"------------------------"<<endl;
        cout<<"Enter student name    : ";
        getline(cin,name[i]);
        cout<<"Enter steps Walked    : ";
        cin>>steps[i];
        cout<<"Enter calories burned : ";
        cin>>calories[i];
        cin.ignore();
    }
    fitnesstracker(steps,calories,name);
   return 0;

}
