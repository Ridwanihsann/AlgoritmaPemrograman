#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    printf("\nNama : Muhammad Ridwan Nur Ihsan\n");
    printf("NIM  : 1237050090\n");

    int jumBil;
    double total = 0.0;
    double bil;

    printf("\nMasukkan jumlah bilangan yang akan di hitung rata-rata: ");
    scanf("%d", &jumBil);

    for (int i = 0; i < jumBil; ++i) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        scanf("%lf", &bil);
        total += bil;
    } 

    double rataRata = total / jumBil;

    printf("\nRata-rata dari seluruh bilangan adalah: %.2lf\n", rataRata);


    printf("\n");

    return 0;
}