#include <iostream>

using namespace std;

int main(){
    int vehicle_type,total;

    for(int i=1;i<=15;i++){
        cout<<"Enter vehicle type(car=1|truck=2|motorcycle=3): ";
        cin>>vehicle_type;

        switch(vehicle_type){
            case 1:total+=2;break;
            case 2:total+=5;break;
            case 3:total+=1;break;
            default:cout<<"Invalid type! No fee added.\n";break;
        }

    }
    cout<<"Total toll collected: $"<<total<<endl;

    return 0;

}
