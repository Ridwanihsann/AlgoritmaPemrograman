#include <iostream>
#include <stdio.h>
using namespace std;
#include <unordered_map>
// #include <string>

int main() {

    printf("\nNama : Muhammad Ridwan Nur Ihsan\n");
    printf("NIM  : 1237050090\n");

    char ulangi, loop;
    int pilih, jumlahPesanan;
    double harga, totalHarga = 0.0;
    unordered_map<string, int> jumlahPesananMenu;
    unordered_map<string, double> menu;
    do{
    menu["1"] = 11000.0;
    menu["2"] = 12000.0;
    menu["3"] = 7500.0;
    menu["4"] = 15000.0;
    printf("\n1. Harga Nasi Goreng: Rp.%.2f\n", menu["1"]);
    printf("2. Harga Nasi Kuning: Rp.%.2f\n", menu["2"]);
    printf("3. Harga Nasi Uduk: Rp.%.2f\n", menu["3"]);
    printf("4. Harga Nasi Padang: Rp.%.2f\n", menu["4"]);
    printf("5. Keluar / Selesai");


        do {
            printf("\nPilih menu yang akan dipesan (1 / 2 / 3 / 4 / 5) = ");
            scanf(" %i", &pilih);

            switch (pilih) {
                case 1:
                    printf("Masukkan jumlah yang dipesan: ");
                    scanf(" %i", &jumlahPesanan);
                    if (jumlahPesanan > 0) {
                        harga = menu["1"];
                        totalHarga += harga * jumlahPesanan;
                        jumlahPesananMenu["Nasi Goreng"] += jumlahPesanan; 
                    } else {
                        printf("Jumlah pesanan tidak valid.\n");
                    }
                    break;
                case 2:
                    printf("Masukkan jumlah yang dipesan:  ");
                    scanf(" %i", &jumlahPesanan);
                    if (jumlahPesanan > 0) {
                        harga = menu["2"];
                        totalHarga += harga * jumlahPesanan;
                        jumlahPesananMenu["Nasi Kuning"] += jumlahPesanan; 
                    } else {
                        printf("Jumlah pesanan tidak valid.\n");
                    }
                    break;
                case 3:
                    printf("Masukkan jumlah yang dipesan:  ");
                    scanf(" %i", &jumlahPesanan);
                    if (jumlahPesanan > 0) {
                        harga = menu["3"];
                        totalHarga += harga * jumlahPesanan;
                        jumlahPesananMenu["Nasi Uduk"] += jumlahPesanan; 
                    } else {
                        printf("Jumlah pesanan tidak valid.\n");
                    }
                    break;
                case 4:
                    printf("Masukkan jumlah yang dipesan:  ");
                    scanf(" %i", &jumlahPesanan);
                    if (jumlahPesanan > 0) {
                        harga = menu["4"];
                        totalHarga += harga * jumlahPesanan;
                        jumlahPesananMenu["Nasi Padang"] += jumlahPesanan; 
                    } else {
                        printf("Jumlah pesanan tidak valid.\n");
                    }
                    break;
                case 5:
                    printf("Apakah Anda ingin melakukan pesanan lagi? [y/t]: ");
                    scanf(" %c", &ulangi);
                    break;
                default:
                    printf("Pilihan '%d' tidak valid\n", pilih); 
                    break;
            }
        // printf("Apakah Anda ingin melakukan pesanan lagi? [y/t]: ");
        // scanf(" %c", &ulangi);
    } while (pilih != 5 || ulangi == 'y' || ulangi == 'Y');

    printf("\n");
    printf("\n");   

    printf("===Total Pesanan Anda===\n");
    for (auto& pair : jumlahPesananMenu) {
        cout << pair.first << ": " << pair.second << endl; 
    }printf("Total harga pesanan: RP.%.2f\n", totalHarga);

    printf("\nApakah Anda ingin melakukan pesanan ulang? (y/t): ");
    scanf(" %c", &loop); 
    } while (loop == 'y' || loop == 'Y');

    printf("==TERIMAKASIH==");
    
    printf("\n");

    return 0;
}



