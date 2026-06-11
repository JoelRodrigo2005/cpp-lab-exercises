#include <iostream>

using namespace std;

int main()
{
    int num1, num2,num3;

    cout<<"Enter three larger integers: ";
    cin>>num1>>num2>>num3;
    cout<<"----------------------------\n";
    cout<<"Is the first number greater than the second and third:  "<<(num1>num2 && num1>num3?1:0);
    cout<<"\n \n";
}
