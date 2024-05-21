#include <iostream>

using namespace std;

int main() {
    int n, i, j, s;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    // Looping untuk setiap baris
    for (i = 1; i <= n; i++) {
        // Mencetak spasi di awal setiap baris
        for (s = 1; s <= n - i; s++) {
            cout << " ";
        }
        // Mencetak bintang sejumlah i kali
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n"; // Pindah ke baris baru setelah setiap baris selesai dicetak
    }

    return 0;
}
