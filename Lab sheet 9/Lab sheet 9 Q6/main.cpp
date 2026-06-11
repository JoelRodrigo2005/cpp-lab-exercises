#include<iostream>

using namespace std;

int main(){
    double unit,cost;

    cout<<"Enter total number of consumed units: ";
    cin>>unit;
    while(unit>0){
        if(unit<50){
            cost=unit*0.50;
        }
        else if (unit>50){
            if ((unit>=51)&&(unit<150)){
                cost=unit*0.75;
            }
            else if(unit>=150){
                cost=unit*1.20;
            }

        }
        break;
    }
    cout<<"Total is: "<<cost<<endl;
    return 0;

}
