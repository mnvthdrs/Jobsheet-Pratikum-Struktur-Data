#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
    int data;
    struct node *next;
};

// Function to print the elements of the linked list
void print(struct node *node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    // Declare pointers for the head and other nodes
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *new_node = NULL;

    // Allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    new_node = (struct node*)malloc(sizeof(struct node));

    // Assign data and next pointers for the initial nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Add a new node at the beginning of the list
    new_node->data = 4;
    new_node->next = head;
    head = new_node;

    // Print the linked list
    print(head);

    // Free allocated memory (optional but recommended)
    free(head);
    free(second);
    free(third);
    free(new_node);

    return 0;
}

