#include <iostream>
using namespace std;

int main() {
    int total, hours, minutes, seconds;

    cout << "Input bilangan >1 (satuan detik): ";
    cin >> total;

    hours = total / 3600;              
    
    minutes = (total % 3600) / 60;     
    
    // sisa detik terakhir
    seconds = total % 60;              

    cout << "\nOutput Konversi:" << endl;
    cout << total << " detik = " 
         << hours << " Jam, " 
         << minutes << " Menit, " 
         << seconds << " Detik." << endl;

    return 0;
}
