#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
}; 

int main(void) {
    struct Mahasiswa mhs01;
    
    strcpy(mhs01.nama, "_______________");
    strcpy(mhs01.jurusan, "_______________");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s\n", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n", mhs01.nilai);

    return 0;
}

