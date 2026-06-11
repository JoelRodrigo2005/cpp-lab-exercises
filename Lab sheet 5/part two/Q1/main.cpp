#include <iostream>

using namespace std;

int main()
{
    int traffic_light, pedestrian_light;

    cout<<"Enter the corresponding traffic light signal(red=0,yellow=1,green=2) ";
    cin>>traffic_light;
    cout<<"Enter the corresponding pedestrian light signal(red=0,green=1) ";
    cin>>pedestrian_light;

    int combinestatus = traffic_light*10+pedestrian_light;

    cout<<"combined status is "<<combinestatus<<endl;

    switch (combinestatus) {
        case 0: cout<<"traffic light is red, pedestrians: Dont walk \n "; break;
        case 1: cout<<"Traffic light is red, Pedestrians: walk \n"; break;
        case 10: cout<<"Traffic light is yellow, Pedestrians: Dont walk \n"; break;
        case 11: cout<<"Traffic light is yellow, Pedestrians: walk \n"; break;
        case 20: cout<<"Traffic light is green, Pedestrian: Dont walk \n"; break;
        case 21: cout<<"Traffic light is green, Pedestrian: walk \n"; break;
        default : cout<<"Invalid please recheck the input ";
    }
    return 0;
}
