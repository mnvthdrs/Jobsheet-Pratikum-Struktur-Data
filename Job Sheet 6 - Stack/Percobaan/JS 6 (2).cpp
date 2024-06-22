#include<stdio.h>
#include<stdlib.h>

#define UKURAN 5

int stack[UKURAN], atas = -1;

void push(int);
void pop();
void display();

int main() {
    int value, pilihan;

    while(1) {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Tampilkan\n4. Keluar\n");
        printf("Masukkan pilihanmu: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Masukkan nilai yang ingin dimasukkan: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nPilihan tidak valid! Silakan coba lagi.\n");
        }
    }
}

void push(int value) {
    if(atas == UKURAN - 1)
        printf("\nStack telah penuh. Tidak memungkinkan menambah item.\n");
    else {
        atas++;
        stack[atas] = value;
        printf("\nItem berhasil ditambahkan.\n");
    }
}

void pop() {
    if(atas == -1)
        printf("\nStack kosong. Tidak memungkinkan untuk menghapus item.\n");
    else {
        printf("\nItem berhasil dihapus: %d\n", stack[atas]);
        atas--;
    }
}

void display() {
    if(atas == -1)
        printf("\nStack kosong. Tidak ada item yang bisa ditampilkan.\n");
    else {
        printf("\nItem yang ada pada stack adalah:\n");
        for(int i = atas; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

