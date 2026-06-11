#include <iostream>

using namespace std;

int main(){
    int steps,input;

    while(steps<=10000){
        cout<<"Enter steps taken: ";
        cin>>input;
        steps+=input;

        cout<<"Total steps so far: "<<steps<<endl;
    }
    cout<<"Congratulations!"<<endl;

    return 0;
}
