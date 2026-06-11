#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int Levels_completed, points_per_level;
    double bonus_multiplier;

    cout<<"Enter no. of levels you completed: ";
    cin>>Levels_completed;

    cout<<"Enter Point per level: ";
    cin>>points_per_level;

    cout<<"Enter bonus multiplier: ";
    cin>>bonus_multiplier;

    double total=static_cast<double>(Levels_completed)*static_cast<double>(points_per_level)*bonus_multiplier;

    double total_bonus_point=static_cast<double>(Levels_completed)*bonus_multiplier;

    cout<<"---------------------------------------------\n";
    cout<<"Levels completed: "<<setw(20)<<Levels_completed<<endl;
    cout<<"Point Per level : "<<setw(20)<<points_per_level<<endl;
    cout<<"Total points    : "<<setw(20)<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Bonus points    : "<<setw(20)<<scientific<<bonus_multiplier<<endl;

    return 0;
}
