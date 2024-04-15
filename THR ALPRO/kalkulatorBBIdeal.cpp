#include <iostream>
using namespace std;

double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

void tampilkanKategoriBMI(double bmi) {
    if (bmi < 18.5) {
        printf("Kategori: Kurang berat badan\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Kategori: Berat badan normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Kategori: Kelebihan berat badan\n");
    } else {
        printf("Kategori: Obesitas\n");
    }
}

int main() {
    double berat, tinggi;
    
    printf("Masukkan berat (kg): ");
    scanf("%lf", &berat);
    printf("Masukkan tinggi (m): ");
    scanf("%lf", &tinggi);

    double bmi = hitungBMI(berat, tinggi);

    printf("BMI Anda: %.2f\n", bmi);
    tampilkanKategoriBMI(bmi);

    return 0;
}
