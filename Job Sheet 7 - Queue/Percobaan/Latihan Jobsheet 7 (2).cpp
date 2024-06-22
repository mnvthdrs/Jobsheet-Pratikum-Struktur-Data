#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
 	struct node *next; 
};

// Global pointers for front and rear of the queue
struct node *front = NULL;
struct node *rear = NULL;

// Function prototypes
void tambah();
void hapus();
void display();

int main() {
    int menu;
    
    // Main menu loop
    while(menu != 4) {
        printf("\n****************Queue Menggunakan Linked List********************\n");
        printf("\n===============================================================\n");
        printf("\n1. Tambah sebuah elemen\n2. Hapus sebuah elemen\n3. Tampilkan Antrian\n4. Keluar\n");
        printf("\nMasukan pilihanmu ?");
        scanf("%d", &menu);
        
        // Switch statement to perform different operations based on user input
        switch(menu) {
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
                printf("\nMasukan pilihan menu yang sesuai?\n");
        }
    }
    return 0;
}

void tambah() {
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW: Antrian penuh\n");
        return;
    }
    else {
    printf("\nSilakan masukan elemen yang kamu inginkan: ");
    scanf("%d", &item);
    ptr->data = item; // Assuming 'data' is the member of the node structure to store the element
    ptr->next = NULL; // Initialize the 'next' pointer of the new node
    ptr->data = item; // Set the data of the new node to the input item

	// Check if the queue is empty
	if (front == NULL) {
	    front = ptr; // If the queue is empty, set both front and rear to the new node
	    rear = ptr;
	    front->next = NULL; // Initialize the next pointer of the new node to NULL
	    rear->next = NULL; // In this case, front and rear point to the same node, so its next pointer should be NULL
	} else {
	    rear->next = ptr; // If the queue is not empty, add the new node to the end of the queue
	    rear = ptr; // Update the rear pointer to point to the new node
	    rear->next = NULL; // Set the next pointer of the new node to NULL as it is now the last node in the queue
	}

	}
}

void hapus() {
    struct node *ptr;

    if (front == NULL) {
        printf("\nUNDERFLOW\n"); // Check if the queue is empty
        return;
    } else {
        ptr = front; // Store the front node in ptr
        front = front->next; // Move the front pointer to the next node
        free(ptr); // Free the memory of the node that was removed
    }
}

void display() {
    struct node *ptr;
    ptr = front;

    if (front == NULL) {
        printf("\nAntrian kosong\n"); // Check if the queue is empty
    } else {
        printf("\nMenampilkan antrian .....\n");
        while (ptr != NULL) {
            printf("\n%d\n", ptr->data); // Print the data of each node in the queue
            ptr = ptr->next; // Move to the next node
        }
    }
}


