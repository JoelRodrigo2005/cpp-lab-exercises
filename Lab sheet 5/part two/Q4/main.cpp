#include <iostream>

using namespace std;

int main()
{
    int ip1, ip2, ip3, ip4, mask1, mask2, mask3, mask4, net1, net2, net3, net4;

    cout << "Enter IP address: ";
    cin>>ip1>>ip2>>ip3>>ip4;

    cout<<"Enter subnet mask: ";
    cin>>mask1>>mask2>>mask3>>mask4;

    net1=ip1&mask1;
    net2=ip2&mask2;
    net3=ip3&mask3;
    net4=ip4&mask4;

    cout<<"The corresponding Network address is: "<<net1<<"."<<net2<<"."<<net3<<"."<<net4<<endl;

    return 0;
}
