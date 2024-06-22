#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList node;

node *head = NULL;
node *second = NULL;
node *third = NULL;

int main() {
    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Traverse the linked list and print each element
    node *current = head;
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

