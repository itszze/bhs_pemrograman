/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int pilihan;

    do {
        cout << "=== MENU ===" << endl;
        cout << "Makanan:" << endl;
        cout << "1. Pecel Lele" << endl;
        cout << "2. Nasgor" << endl;
        cout << "Minuman:" << endl;
        cout << "3. Air Mineral" << endl;
        cout << "4. Teh" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "kamu memilih Pecel Lele" << endl;
                break;
            case 2:
                cout << "kamu memilih Nasgor" << endl;
                break;
            case 3:
                cout << "kamu memilih Air Mineral" << endl;
                break;
            case 4:
                cout << "kamu memilih Teh" << endl;
                break;
            case 5:
                cout << "Terima kasih !" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
                break;
        }
    } while (pilihan != 5);

    return 0;
}
