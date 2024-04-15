#include <iostream>
#include <stdio.h>
// #include <string>
using namespace std;

main()
{
    
    int nilai;
    char selec;
    printf("PEROGRAM PENGELOMPOKAN NILAI \n");
    printf("---------------------------- \n");
    printf("Masukan nilai (0-100) : ");
    scanf("%i", &nilai);
    
    
    if (nilai >=90)
        printf("Nilai = A");
    else if(nilai >=80)
        printf("Nilai = B");
    else if(nilai >=70)
        printf("Nilai = C");
    else if(nilai >=60)
        printf("Nilai = D");
    else
        printf("Nilai = E");
    

}