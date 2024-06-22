#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the elements of the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    // Declare a pointer for the head of the list
    struct Node* head = NULL;

    // Add some nodes to the list using the push function
    push(&head, 7);
    push(&head, 1);

    printf("\nCreated Linked list is: ");
    // Print the linked list
    printList(head);

    return 0;
}

