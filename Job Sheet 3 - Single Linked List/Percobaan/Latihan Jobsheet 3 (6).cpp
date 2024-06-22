#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to print the elements of the linked list
void printList(struct Node* n) {
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main() {
    // Declare pointers for the head and other nodes
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory for each node
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and next pointers for each node
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; // This signifies the end of the list

    // Print the linked list
    printList(head);

    // Free allocated memory (optional but recommended)
    free(head);
    free(second);
    free(third);

    return 0;
}

