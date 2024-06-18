#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struktur untuk menyimpan informasi tentang totebag
struct Totebag {
    string nama;
    string bahan;
    double harga;
    int stok;
};

// Fungsi untuk menampilkan informasi tentang totebag
void displayTotebagInfo(const Totebag& totebag) {
    cout << "\nInformasi Totebag:\n";
    cout << "Nama: " << totebag.nama << endl;
    cout << "Bahan: " << totebag.bahan << endl;
    cout << fixed << setprecision(0); // Mengatur format harga tanpa desimal
    cout << "Harga: Rp " << totebag.harga << endl;
    cout << "Stok: " << totebag.stok << endl;
}

int main() {
    // Inisialisasi objek totebag dengan nilai yang sudah ditentukan
    Totebag totebag1 = {"Totebag A", "Kanvas", 100000.0, 50};

    // Menampilkan informasi totebag
    displayTotebagInfo(totebag1);

    // Simulasi analisis bisnis sederhana
    cout << "\nAnalisis Bisnis Totebag:\n";
    cout << "1. Analisis Pasar:\n";
    cout << "   - Identifikasi Target Pasar: Mahasiswa, profesional muda, dll.\n";
    cout << "   - Tren dan Permintaan: Tren fashion atau kesadaran lingkungan.\n";
    cout << "   - Penelitian Kompetitif: Menilai kekuatan dan kelemahan pesaing.\n";

    cout << "\n2. Analisis Produk:\n";
    cout << "   - Deskripsi Produk: " << totebag1.nama << " dari " << totebag1.bahan << ", harga Rp " << fixed << setprecision(0) << totebag1.harga << ", stok " << totebag1.stok << " unit.\n";
    cout << "   - Manfaat untuk Pelanggan: Memenuhi kebutuhan fashion dan kepraktisan sehari-hari.\n";

    cout << "\n3. Analisis Pesaing:\n";
    cout << "   - Pesaing Langsung: Produk sejenis dengan fitur serupa.\n";
    cout << "   - Pesaing Tidak Langsung: Produk substitusi yang mempengaruhi pilihan konsumen.\n";

    cout << "\n4. Rencana Operasional:\n";
    cout << "   - Rantai Pasokan: Memastikan bahan baku dan produksi tepat waktu.\n";
    cout << "   - Produksi: Menyesuaikan kapasitas untuk memenuhi permintaan.\n";

    // Menu beli
    cout << "\nMenu Beli:\n";
    int jumlahBeli;
    cout << "Masukkan jumlah totebag yang ingin dibeli: ";
    cin >> jumlahBeli;

    // Validasi stok yang tersedia
    if (jumlahBeli > totebag1.stok) {
        cout << "Maaf, stok tidak mencukupi untuk pembelian ini.\n";
    } else {
        // Menghitung total harga
        double totalHarga = jumlahBeli * totebag1.harga;
        cout << "Total harga untuk " << jumlahBeli << " totebag adalah Rp " << fixed << setprecision(0) << totalHarga << endl;

        // Mengurangi stok totebag yang dibeli dari stok yang tersedia
        totebag1.stok -= jumlahBeli;
        cout << "Stok totebag tersisa: " << totebag1.stok << endl;
    }

    return 0;
}
