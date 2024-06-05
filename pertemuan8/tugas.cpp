#include <string>
#include <vector>

using namespace std;

// Deklarasi kelas untuk menyimpan ide bisnis tote bag
class ToteBagBusiness {
private:
    string ideaName;
    vector<string> strategies;

public:
    // Konstruktor untuk inisialisasi nama ide bisnis
    ToteBagBusiness(string name) {
        ideaName = name;
    }

    // Fungsi untuk menambahkan strategi ke dalam vektor
    void addStrategy(string strategy) {
        strategies.push_back(strategy);
    }

    // Fungsi untuk menampilkan ide bisnis tote bag beserta strategi-strateginya
    void display() {
        cout << "Ide Bisnis Tote Bag: " << ideaName << endl;
        cout << "Strategi-strategi:" << endl;
        for (int i = 0; i < strategies.size(); ++i) {
            cout << "- " << strategies[i] << endl;
        }
    }
};

int main() {
    // Memasukkan ide bisnis tote bag
    string ideaName = "Produksi dan penjualan tote bag berbagai desain";

    // Membuat objek ToteBagBusiness dengan ide bisnis yang dimasukkan
    ToteBagBusiness toteBagBusiness(ideaName);

    // Memasukkan beberapa strategi awal untuk bisnis tote bag
    toteBagBusiness.addStrategy("Memilih bahan berkualitas untuk tote bag");
    toteBagBusiness.addStrategy("Merancang desain yang menarik dan fungsional");
    toteBagBusiness.addStrategy("Menyasar pasar niche atau spesifik (misalnya, eco-friendly, fashion, dll.)");
    toteBagBusiness.addStrategy("Menggunakan platform online untuk penjualan");

    // Menampilkan ide bisnis tote bag beserta strategi-strateginya
    cout << "\n*** Pemahaman Bisnis Tote Bag ***\n";
    toteBagBusiness.display();

    return 0;
}
