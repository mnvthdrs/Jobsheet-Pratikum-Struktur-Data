#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} node;

int main() {
    // Declare pointers for the head and other nodes
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    // Allocate memory for each node
    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    // Assign data and next pointers for each node
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; // This signifies the end of the list

    // Print the data of the first node (head)
    printf("%d", head->data);

    // Free allocated memory (optional but recommended)
    free(head);
    free(second);
    free(third);

    return 0;
}

