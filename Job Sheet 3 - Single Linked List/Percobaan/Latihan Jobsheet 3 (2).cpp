#include <stdio.h> 
#include <stdlib.h> 
 
struct node {
    int data;
    struct node *next;
};
 
int main() 
{ 
    struct node* head = NULL; 
    struct node* second = NULL; 
    struct node* third = NULL; 
 
    // Allocate memory for three nodes
    head = (struct node*)malloc(sizeof(struct node)); 
    second = (struct node*)malloc(sizeof(struct node)); 
    third = (struct node*)malloc(sizeof(struct node)); 
 
    // Assign data and next pointers for each node
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
 
    // Traverse the linked list and print each element
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
 
    // Free allocated memory for the nodes
    free(head);
    free(second);
    free(third);
 
    return 0; 
}

