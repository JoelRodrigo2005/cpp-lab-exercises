#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double file_SizeMB, download_Speed_Mbps;

    cout << "Enter file size (in MB)       : ";
    cin >> file_SizeMB;

    cout << "Enter download speed (in Mbps): ";
    cin >> download_Speed_Mbps;


    double file_Size_Megabits = file_SizeMB * 8.0;

    double download_Time_Seconds = file_Size_Megabits / download_Speed_Mbps;
    cout<<"--------------------------------------------------------------\n";
    cout <<fixed<<setprecision(2)<< "Estimated download time: " << download_Time_Seconds << " seconds" << endl;
    cout<<"--------------------------------------------------------------";
    return 0;
}
