#include <stdio.h>
#include <stdlib.h>

// Structure of the node
struct Node
{
    int data;
    struct Node *next; // Pointer to next node
    struct Node *prev; // Pointer to previous node
};

// Function to add a new node at the beginning of the list
void push(struct Node** head_ref, int new_data)
{
    // Allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Put in the data
    new_node->data = new_data;

    // Make next of new node as head and previous as NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // Change prev of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to print the doubly linked list in both forward and reverse directions
void printList(struct Node* node)
{
    struct Node* last;

    // Traversal in forward direction
    printf("\nTraversal in forward direction:\n");
    while (node != NULL)
    {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }

    // Traversal in reverse direction
    printf("\nTraversal in reverse direction:\n");
    while (last != NULL)
    {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

int main()
{
    // Start with the empty list
    struct Node* head = NULL;

    // Add nodes to the doubly linked list
    push(&head, 6);
    push(&head, 5);
    push(&head, 2);

    // Print the doubly linked list
    printf("Created DLL is: ");
    printList(head);

    getchar();
    return 0;
}

