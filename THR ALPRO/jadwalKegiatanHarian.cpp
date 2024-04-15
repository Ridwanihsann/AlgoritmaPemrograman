#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Kegiatan {
    string waktu;
    string kegiatan;
};

int main() {
    int jumlahKegiatan;

    // Meminta pengguna untuk memasukkan jumlah kegiatan
    printf("Masukkan jumlah kegiatan hari ini: ");
    scanf("%d", &jumlahKegiatan);

    // Membuat vektor untuk menyimpan jadwal kegiatan
    vector<Kegiatan> jadwal(jumlahKegiatan);

    // Meminta pengguna untuk memasukkan detail kegiatan-kegiatan
    printf("Masukkan detail kegiatan:\n");
    for (int i = 0; i < jumlahKegiatan; ++i) {
        printf("Waktu kegiatan %d: ", i + 1);
        cin >> jadwal[i].waktu;
        cin.ignore(); // Membersihkan newline dari buffer
        printf("Nama kegiatan %d: ", i + 1);
        getline(cin, jadwal[i].kegiatan);
    }

    // Menampilkan jadwal harian
    printf("\nJadwal Harian Anda:\n");
    for (int i = 0; i < jumlahKegiatan; ++i) {
        printf("%s: %s\n", jadwal[i].waktu.c_str(), jadwal[i].kegiatan.c_str());
    }

    return 0;
}
