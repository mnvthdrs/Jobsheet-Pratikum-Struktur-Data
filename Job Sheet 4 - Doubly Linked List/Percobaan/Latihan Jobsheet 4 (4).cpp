#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to insert a new node at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // Assign data to the new node
    new_node->data = new_data;
    // Set the next of the new node to the current head
    new_node->next = (*head_ref);
    // Set the previous of the new node to NULL since it's the new head
    new_node->prev = NULL;
    // If the list is not empty, set the previous of the current head to the new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    // Update the head to point to the new node
    (*head_ref) = new_node;
}

/* Given a node as next_node, insert a new node before the given node */
void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data) {
    // Check if the given next_node is NULL
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // Assign data to the new node
    new_node->data = new_data;
    // Set the previous of the new node to the previous of next_node
    new_node->prev = next_node->prev;
    // Set the next of the new node to next_node
    new_node->next = next_node;
    // Set the next of next_node to the new node
    next_node->prev = new_node;
    // If the previous of the new node is not NULL, set its next to the new node
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    // If the previous of the new node is NULL, update the head to point to the new node
    else
        (*head_ref) = new_node;
}

// Function to print the doubly linked list in both forward and reverse directions
void printList(struct Node* node) {
    struct Node* last;
    printf("\nTraversal in forward direction:\n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\nTraversal in reverse direction:\n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

// Driver program to test above functions
int main() {
    // Start with the empty list
    struct Node* head = NULL;
    // Insert elements at the beginning of the list
    push(&head, 7);
    push(&head, 1);
    push(&head, 4);
    // Insert 8 before the second node
    insertBefore(&head, head->next, 8);
    printf("Created DLL is: ");
    printList(head);
    getchar();
    return 0;
}

