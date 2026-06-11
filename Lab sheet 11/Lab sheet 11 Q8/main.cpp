#include <iostream>

using namespace std;

double gettemp(){
    double temp;

    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>temp;

    return temp;
}
int main(){
    double celtemp=(gettemp()-32)*5.0/9.0;

    cout<<"\n\n";
    cout<<"------------------------------------------------------\n";
    cout<<"     TEMPERATURE IN CELSIUS: "<<celtemp<<endl;
    cout<<"------------------------------------------------------\n";

    return 0;


}
