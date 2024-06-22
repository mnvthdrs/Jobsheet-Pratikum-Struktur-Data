#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Struktur untuk merepresentasikan node dalam stack
struct StackNode {
    int data;
    struct StackNode* next;
};

// Fungsi untuk membuat node baru
struct StackNode* newNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Fungsi untuk memeriksa apakah stack kosong
int isEmpty(struct StackNode* root) {
    return !root;
}

// Fungsi untuk menambahkan elemen ke stack (push)
void push(struct StackNode** root, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d ditambahkan ke stack\n", data);
}

// Fungsi untuk menghapus elemen dari stack (pop)
int pop(struct StackNode** root) {
    if (isEmpty(*root))
        return INT_MIN;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// Fungsi untuk melihat elemen teratas dari stack (peek)
int peek(struct StackNode* root) {
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

// Fungsi utama untuk mengetes fungsi-fungsi stack
int main() {
    struct StackNode* root = NULL;
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    printf("%d dilepaskan dari stack\n", pop(&root));
    printf("Elemen teratas (Top) adalah %d\n", peek(root));
    return 0;
}

