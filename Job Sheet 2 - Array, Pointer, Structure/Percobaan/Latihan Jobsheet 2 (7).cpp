#include <stdio.h>
#include <string.h>

typedef struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
} data;

int main(void) {
    data mhs01;

    strcpy(mhs01.nama, "_____________");
    strcpy(mhs01.jurusan, "__________");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s\n", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n", mhs01.nilai);

    return 0;
}

