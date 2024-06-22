#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void tambahAwal();
void tambahAkhir();
void hapusAwal();
void hapusAkhir();
void tampilkan();
void cari();

int main() {
    int choice = 0;
    while (choice != 7) {
        printf("\n*********Main Menu*********\n");
        printf("\nSilakan pilih salah satu dari menu berikut...\n");
        printf("\n===============================================\n");
        printf("\n1. Masukan data di awal\n2. Masukan data di akhir\n3. Hapus dari awal\n4. Hapus dari akhir\n5. Cari sebuah elemen\n6. Tampilkan\n7. Exit\n");
        printf("\nMasukan pilihanmu: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                tambahAwal();
                break;
            case 2:
                tambahAkhir();
                break;
            case 3:
                hapusAwal();
                break;
            case 4:
                hapusAkhir();
                break;
            case 5:
                cari();
                break;
            case 6:
                tampilkan();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Mohon masukan pilihan yang sesuai menu.");
        }
    }
    return 0;
}

void tambahAwal() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
    } else {
        printf("\nMasukan node data: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("\nNode telah dimasukan.\n");
    }
}

void tambahAkhir() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
    } else {
        printf("\nMasukan data: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
        printf("\nNode inserted.\n");
    }
}

void hapusAwal() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nUNDERFLOW");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\nNode dihapus.\n");
    } else {
        ptr = head;
        while (ptr->next != head) {
            ptr = ptr->next;
        }
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nNode dihapus.\n");
    }
}

void hapusAkhir() {
    struct node *ptr, *preptr;
    if (head == NULL) {
        printf("\nUNDERFLOW");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\nNode dihapus.\n");
    } else {
        ptr = head;
        while (ptr->next != head) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\nNode dihapus.\n");
    }
}

void cari() {
    struct node *ptr;
    int item, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL) {
        printf("\nList Kosong\n");
    } else {
        printf("\nMasukan item yang ingin dicari: ");
        scanf("%d", &item);
        do {
            if (ptr->data == item) {
                printf("Item ditemukan pada lokasi %d.\n", i + 1);
                flag = 1;
                break;
            }
            ptr = ptr->next;
            i++;
        } while (ptr != head);
        if (!flag) {
            printf("Item tidak ditemukan.\n");
        }
    }
}

void tampilkan() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nTidak ada sesuatu untuk ditampilkan.\n");
    } else {
        ptr = head;
        do {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
}
