#include <iostream>

using namespace std;

int calculatetotal(int units[3][4],int houseindex){
    int sum=0;
    for(int k=0;k<4;k++){
        sum+=units[houseindex][k];
    }
    return sum;
}

float calculateaverage(int total){
    int average=0;
    return average=total/4.0;
}

int main(){
    int units[3][4];
    string topics[6]={"1st Week","2nd Week","3rd Week","4th Week","Total","Average"};

    for(int i=0;i<3;i++){
        cout<<"House "<<i+1<<" usage-----------------------------------"<<endl;
        for(int j=0;j<4;j++){
            cout<<topics[j]<<" : ";
            cin>>units[i][j];
        }
        cout<<endl;
    }

    cout<<"\n\t";
    for(int i=0;i<6;i++){
        cout<<topics[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<"House "<<i+1<<"\t";
        for(int j=0;j<4;j++){
                cout<<units[i][j]<<"\t\t";
        }
        int total=calculatetotal(units,i);
        float avg=calculateaverage(total);

        cout<<total<<"\t"<<avg<<endl;

    }
}
