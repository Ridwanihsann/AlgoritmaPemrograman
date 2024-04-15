#include <iostream>
using namespace std;

struct Motor {
    string noPol;
    string merek;
    bool tersedia;
};

int main() {
    // Inisialisasi motor
    Motor motor1 = {"D 5555 KKK", "Honda Vario", true};
    Motor motor2 = {"D 6666 LLL", "Honda Beat", true};

    // Menampilkan menu motor yang tersedia
    printf("Motor yang tersedia:\n");
    printf("1. %s - %s\n", motor1.noPol.c_str(), motor1.merek.c_str());
    printf("2. %s - %s\n", motor2.noPol.c_str(), motor2.merek.c_str());

    // Meminta input dari penyewa
    int pilihan;
    printf("Pilih motor yang ingin dipinjam (1 atau 2): ");
    scanf("%d", &pilihan);

    // Memproses pilihan penyewa
    if (pilihan == 1) {
        if (motor1.tersedia) {
            motor1.tersedia = false;
            printf("Motor dengan nomor polisi %s berhasil dipinjam.\n", motor1.noPol.c_str());
        } else {
            printf("Maaf, motor dengan nomor polisi %s sedang tidak tersedia.\n", motor1.noPol.c_str());
        }
    } else if (pilihan == 2) {
        if (motor2.tersedia) {
            motor2.tersedia = false;
            printf("Motor dengan nomor polisi %s berhasil dipinjam.\n", motor2.noPol.c_str());
        } else {
            printf("Maaf, motor dengan nomor polisi %s sedang tidak tersedia.\n", motor2.noPol.c_str());
        }
    } else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}
