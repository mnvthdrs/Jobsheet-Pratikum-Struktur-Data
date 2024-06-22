#include <stdio.h>
#include <conio.h>

int main() {
    int usia1 = 50;
    int usia2 = 18;

    // Menciptakan sebuah pointer
    int *ptr;

    // Mengasign pointer tersebut kepada usia1
    ptr = &usia1; // & adalah operator alamat

    printf("\nUsia saya (usia1): %d", usia1); // Menampilkan 50
    printf("\nUsia saya (*ptr): %d", *ptr); // Menampilkan 50
    printf("\nAlamat(usia1) & (ptr): %x", &usia1, ptr);

    // ptr adalah alamat dari usia1 jadi juga merupakan usia1. Keduanya sama.

    // Sekarang Anda akan mengasignkannya kepada usia2
    ptr = &usia2;

    printf("\nUsia Anda (*ptr): %d", *ptr); // Menampilkan 18
    // ptr merupakan nilai yang disimpan ptr, yaitu 18
    printf("\nAlamat(usia2) & (ptr): %x", &usia2, ptr);

    // ptr adalah alamat dari usia2 jadi juga merupakan usia2. Keduanya sama.

    // Menampilkan alamat dari variabel ptr. Anda tidak memerlukan alamat ini.
    printf("\nAlamat(ptr): %x", &ptr);

    getch();
    return 0;
}

