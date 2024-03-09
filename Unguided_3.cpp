#include <map>

int main() {

    // Membuat map untuk menyimpan nilai mahasiswa

    map<string, int> nilai;

    // Menambahkan nilai mahasiswa ke dalam map
    nilai["rizky"] = 85;
    nilai["santoso"] = 70;
    nilai["shiba inu"] = 90;

    // untuk Menampilkan nilai mahasiswa
    cout << "Nilai Mahasiswa: " << endl;
    for (const auto& pair : nilai) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Menambahkan nilai mahasiswa lainnya
    nilai["bimbim"] = 95;
    nilai["mamang"] = 80;

    // untul Mengakses nilai mahasiswa
    string nama;
    cout << "\nMasukkan nama mahasiswa: ";
    cin >> nama;

    if (nilai.find(nama) != nilai.end()) {
        cout << "Nilai " << nama << ": " << nilai[nama] << endl;
    } else {
        cout << "Mahasiswa dengan nama " << nama << " tidak ditemukan." << endl;
    }

    return 0;
}