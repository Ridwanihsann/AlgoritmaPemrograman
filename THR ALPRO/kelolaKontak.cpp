#include <iostream>
#include <string>
using namespace std;

struct Kontak {
    string nama;
    string nomor;
};

int main() {
    // Variabel untuk menyimpan kontak
    Kontak kontak;

    int pilihan;
    do {
        printf("\nMenu:\n");
        printf("1. Lihat Kontak\n");
        printf("2. Tambah Kontak\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        // Memproses pilihan pengguna
        switch (pilihan) {
            case 1:
                // Menampilkan kontak
                if (kontak.nama.empty() && kontak.nomor.empty()) {
                    printf("\nTidak ada kontak.\n");
                } else {
                    printf("\nNama: %s, Nomor: %s\n", kontak.nama.c_str(), kontak.nomor.c_str());
                }
                break;
            case 2:
                // Menambahkan kontak baru
                printf("\nMasukkan nama kontak: ");
                cin.ignore(); // Membersihkan newline dari buffer
                getline(cin, kontak.nama);
                printf("Masukkan nomor kontak: ");
                getline(cin, kontak.nomor);
                printf("Kontak berhasil ditambahkan.\n");
                break;
            case 3:
                printf("Terima kasih, program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 3);

    return 0;
}
