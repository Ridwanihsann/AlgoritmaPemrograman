#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    printf("\nNama : Muhammad Ridwan Nur Ihsan\n");
    printf("NIM  : 1237050090\n");

    int menu;

    printf("\n===SELAMAT DATANG DI RM MBAH NUR===\n");
    printf("\nMenu :");
    printf("\n1. Nasi goreng"); //11.000
    printf("\n2. Nasi kuning"); // 8.000
    printf("\n3. Nasi uduk  "); // 7.500
    printf("\n4. Nasi padang"); // 15.000
    printf("\n5. Nasi Kebuli"); // 17.000

    printf("\n\npilih menu : ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nAnda memilih Nasi goreng");
        printf("\nHarga Rp11.000\n\n");
        break;
    case 2:
        printf("\nAnda memilih Nasi kuning");
        printf("\nHarga Rp8.000\n\n");
        break;
    case 3:
        printf("\nAnda memilih Nasi uduk");
        printf("\nHarga Rp7.500\n\n");
        break;
    case 4:
        printf("\nAnda memilih Nasi padang");
        printf("\nHarga Rp15.000\n\n");
        break;
    case 5:
        printf("\nAnda memilih Nasi kebuli");
        printf("\nHarga Rp17.000\n\n");
        break;
    default:
        printf("Menu yang anda masukan tidak ada. Tolong pilih 1-5!!!");
        break;
    }

}