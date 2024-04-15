#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    int T;

    printf("\nMasukan temperatur dalam Celcius : ");
    scanf("%d", &T);

    if (T <= 0) {
        printf("\nAir dalam keadaan padat\n");
    } else if (T<100) {
        printf("\nAir dalam keadaan cair\n");
    } else {
        printf("\nAir dalam keadaan gas\n");
    }

    printf("\n");

    return 0;

}