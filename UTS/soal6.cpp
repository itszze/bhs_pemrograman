#include <iostream>
using namespace std;

void menu() {
    cout << "Menu Operasi Matematika" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
}

void tambah() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
}

void kurang() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
}

void kali() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil perkalian: " << angka1 * angka2 << endl;
}

void bagi() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    if(angka2 != 0) {
        cout << "Hasil pembagian: " << angka1 / angka2 << endl;
    } else {
        cout << "Tidak bisa melakukan pembagian dengan angka kedua 0." << endl;
    }
}

int main() {
    menu();
    tambah();
    kurang();
    kali();
    bagi();
    return 0;
}