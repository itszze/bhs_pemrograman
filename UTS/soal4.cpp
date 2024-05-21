#include <iostream>
using namespace std;

int main() {
    int tahun_lahir, tahun_sekarang, usia;

    cout << "Masukkan tahun lahir Anda: ";
    cin >> tahun_lahir;

    cout << "Masukkan tahun sekarang: ";
    cin >> tahun_sekarang;

    usia = tahun_sekarang - tahun_lahir;

    cout << "Berarti usia kalian sekarang adalah" << usia << " Tahun." << endl;

    return 0;
}