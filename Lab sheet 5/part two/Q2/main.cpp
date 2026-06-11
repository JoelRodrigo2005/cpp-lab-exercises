#include <iostream>

using namespace std;

int main()
{
    int state, device, choice;

    cout<<"This is a smart home device that controls six home devices.(A/C,FAN,LIGHT,TV,SOUND SYSTEM,WIFI)\n";
    cout<<"Enter the initial state: ";
    cin>>state;

    cout<<"Select the device number to make changes: \n";
    cout<<"0=A/C \n 1=FAN \n 2=LIGHT \n 3=TV \n 4=SOUND SYSTEM \n 5=WIFI \n";
    cin>>device;

    cout<<"Enter 0 to turn off or 1 to turn on: ";
    cin>>choice;

    if (1==choice){
        state=state|(1<<device);
    }
    else{
        state=state&~(1<<device);
    }

    cout<<"Updated device control state= "<<state<<endl;
    }return 0;
}
