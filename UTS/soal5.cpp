#include <iostream>
using namespace std;

int main() {
    int angka_pertama, angka_kedua;
    
    // Meminta pengguna untuk memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> angka_pertama;
    
    cout << "Masukkan angka kedua: ";
    cin >> angka_kedua;
    
    // Melakukan operasi aritmatika
    int penjumlahan = angka_pertama + angka_kedua;
    int pengurangan = angka_pertama - angka_kedua;
    int perkalian = angka_pertama * angka_kedua;
    int pembagian = angka_pertama / angka_kedua;
    
    // Menampilkan hasil
    cout << "Penjumlahan: " << penjumlahan << endl;
    cout << "Pengurangan: " << pengurangan << endl;
    cout << "Perkalian: " << perkalian << endl;
    cout << "Pembagian: " << pembagian << endl;
    
    return 0;
}