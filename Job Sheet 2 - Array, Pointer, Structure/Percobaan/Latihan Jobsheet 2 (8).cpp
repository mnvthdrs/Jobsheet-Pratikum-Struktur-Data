#include <stdio.h>

typedef int angka;
typedef char huruf;

int main() {
    angka umur;
    huruf h;
    char nama[10];

    printf("Masukkan umur anda : ");
    scanf("%d", &umur);
    printf("Umur anda adalah %d\n", umur);

    printf("Masukkan huruf : ");
    scanf(" %c", &h); 
    printf("Huruf anda %c\n", h);

    printf("Masukkan nama : ");
    scanf("%s", nama);
    printf("Nama anda %s\n", nama);

    return 0;
}

