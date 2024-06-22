#include<stdio.h>
#include<stdlib.h>

#define ukuran 5 // Define the size of the queue

// Function prototypes
void tambah();
void hapus();
void display();

// Global variables for front and rear pointers
int front = -1, rear = -1;
int queue[ukuran]; // Array to store queue elements

int main() {
    int pilihan;
    
    // Main menu loop
    while(pilihan != 4) {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n==============================================================\n");
        printf("\n1. Tambah sebuah elemen\n2. Hapus sebuah elemen\n3. Tampilkan antrian\n4. Keluar\n");
        printf("\nMasukan pilihanmu ?");
        scanf("%d", &pilihan);
        
        // Switch statement to perform different operations based on user input
        switch(pilihan) {
            case 1:
                tambah();
                break;
            case 2:
                hapus();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0); // Exit the program
                break;
            default:
                printf("\nMasukan pilihan yang sesuai?\n");
        }
    }
    return 0;
}

// Function to add an element to the queue
void tambah() {
    int item;
    if (rear == ukuran - 1) { // Check if queue is full
        printf("\nOVERFLOW\n");
        return;
    }
    if (front == -1) { // If queue is initially empty
        front = 0;
    }
    printf("\nMasukan elemen yang ingin ditambahkan: ");
    scanf("%d", &item);
    rear = rear + 1;
    queue[rear] = item; // Add item to the rear of the queue
    printf("\nNilai berhasil ditambahkan ");
}

// Function to remove an element from the queue
void hapus() {
    int item;
    if (front == -1 || front > rear) {
        printf("\nUNDERFLOW\n"); // Check if queue is empty
        return;
    }
    item = queue[front]; // Remove element from the front of the queue
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = front + 1;
    }
    printf("\nNilai berhasil dihapus ");
}

// Function to display the elements of the queue
void display() {
    int i;
    if (rear == -1) {
        printf("\nAntrian kosong\n"); // Check if the queue is empty
        return;
    }
    printf("\nMenampilkan nilai .....\n");
    for (i = front; i <= rear; i++) {
        printf("%d\n", queue[i]); // Print elements from front to rear
    }
}

