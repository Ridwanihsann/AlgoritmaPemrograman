#include <iostream>
using namespace std;

double celciusToKelvin(double celcius) {
    return celcius + 273.15;
}

double celciusToFahrenheit(double celcius) {
    return (celcius * 9/5) + 32;
}

double kelvinToCelcius(double kelvin) {
    return kelvin - 273.15;
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvinToCelcius(kelvin) * 9/5 + 32;
}

double fahrenheitToKelvin(double fahrenheit) {
    return celciusToKelvin(fahrenheitToCelcius(fahrenheit));
}

int main() {
    int pilihan;
    double temperature;

    printf("Pilih jenis yang akan di konversi :\n");
    printf("1. Celcius\n");
    printf("2. Kelvin\n");
    printf("3. Fahrenheit\n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan suhu dalam Celcius: ");
            scanf("%lf", &temperature);
            printf("Hasil konversi ke Kelvin: %.2f K\n", celciusToKelvin(temperature));
            printf("Hasil konversi ke Fahrenheit: %.2f F\n", celciusToFahrenheit(temperature));
            break;
        case 2:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%lf", &temperature);
            printf("Hasil konversi ke Celcius: %.2f C\n", kelvinToCelcius(temperature));
            printf("Hasil konversi ke Fahrenheit: %.2f F\n", kelvinToFahrenheit(temperature));
            break;
        case 3:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%lf", &temperature);
            printf("Hasil konversi ke Celcius: %.2f C\n", fahrenheitToCelcius(temperature));
            printf("Hasil konversi ke Kelvin: %.2f K\n", fahrenheitToKelvin(temperature));
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
