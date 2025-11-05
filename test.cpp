#include <iostream>
using namespace std;

int main() {
    int totalDetik, jam, menit, detik;

    cout << "Masukkan bilangan >1 (satuan detik): ";
    cin >> totalDetik;

    jam = totalDetik / 3600;              // 1 jam = 3600 detik
    menit = (totalDetik % 3600) / 60;     // sisa detik dibagi 60 untuk dapat menit
    detik = totalDetik % 60;              // sisa detik terakhir

    cout << "\nHasil Konversi:" << endl;
    cout << totalDetik << " detik = " 
         << jam << " Jam, " 
         << menit << " Menit, " 
         << detik << " Detik." << endl;

    return 0;
}
