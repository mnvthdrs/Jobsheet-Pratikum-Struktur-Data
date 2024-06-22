#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
struct doublelinkedlist {
    int data;
    struct doublelinkedlist *next;
    struct doublelinkedlist *prev;
};

// Declare global pointers to maintain the head and tail of the list
struct doublelinkedlist *head = NULL;
struct doublelinkedlist *tail = NULL;

// Function to insert a new node at the end of the list
void insertlast(int data) {
    // Allocate memory for the new node
    struct doublelinkedlist *current = (struct doublelinkedlist*)malloc(sizeof(struct doublelinkedlist));
    current->data = data;
    current->next = NULL;

    if (head == NULL) {
        // If the list is empty, set both head and tail to the new node
        head = tail = current;
        current->prev = NULL;
    } else {
        // Otherwise, add the new node after the current tail
        current->prev = tail;
        tail->next = current;
        tail = current;
    }
}

// Function to insert a new node at the beginning of the list
void insertfirst(int data) {
    struct doublelinkedlist *current = (struct doublelinkedlist*)malloc(sizeof(struct doublelinkedlist));
    current->data = data;
    current->prev = NULL;

    if (head == NULL) {
        // If the list is empty, set both head and tail to the new node
        head = tail = current;
        current->next = NULL;
    } else {
        // Otherwise, add the new node before the current head
        current->next = head;
        head->prev = current;
        head = current;
    }
}

// Function to insert a new node in sorted order
void insertmid(int data) {
    struct doublelinkedlist *current = (struct doublelinkedlist*)malloc(sizeof(struct doublelinkedlist));
    current->data = data;

    if (head == NULL || data <= head->data) {
        // If the list is empty or new data is smaller than the head, insert at the beginning
        insertfirst(data);
        return;
    }

    if (data >= tail->data) {
        // If the new data is greater than or equal to the tail, insert at the end
        insertlast(data);
        return;
    }

    // Find the position to insert the new node
    struct doublelinkedlist *temp = head;
    while (temp->data < data) {
        temp = temp->next;
    }

    // Insert the new node before the node pointed by temp
    current->next = temp;
    current->prev = temp->prev;
    temp->prev->next = current;
    temp->prev = current;
}

// Function to delete the first node of the list
void deletefirst() {
    if (head == NULL) {
        printf("No Data\n");
        return;
    }

    struct doublelinkedlist *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL; // If the list becomes empty after deletion
    }
    free(temp);
}

// Function to delete the last node of the list
void deletelast() {
    if (head == NULL) {
        printf("No Data\n");
        return;
    }

    struct doublelinkedlist *temp = tail;
    tail = tail->prev;
    if (tail != NULL) {
        tail->next = NULL;
    } else {
        head = NULL; // If the list becomes empty after deletion
    }
    free(temp);
}

// Function to delete a node with a given value from the list
void deletemid(int data) {
    if (head == NULL) {
        printf("No Data\n");
        return;
    }

    struct doublelinkedlist *current = head;
    while (current != NULL && current->data != data) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Data Not Found\n");
        return;
    }

    if (current == head) {
        deletefirst();
    } else if (current == tail) {
        deletelast();
    } else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        free(current);
    }
}

// Function to delete all nodes from the list
void deleteall() {
    while (head != NULL) {
        deletefirst();
    }
}

// Function to print all elements of the list
void print() {
    struct doublelinkedlist *current = head;
    if (current == NULL) {
        printf("No Data\n");
    } else {
        while (current != NULL) {
            printf("Data %d\n", current->data);
            current = current->next;
        }
    }
}

int main() {
    insertfirst(2);
    insertfirst(3);
    insertfirst(4);
    insertfirst(5);
    insertlast(6);
    insertmid(7);
    deletemid(7);
    print();
    return 0;
}

