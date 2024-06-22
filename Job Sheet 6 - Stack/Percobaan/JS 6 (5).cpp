#include<stdio.h>
#include<stdbool.h>

#define MAX 5

typedef struct {
    int atas1;
    int atas2;
    int ele[MAX];
} DoubleStack;

void init(DoubleStack *s) {
    s->atas1 = -1;
    s->atas2 = MAX;
}

void pushA(DoubleStack *s, int item) {
    if (s->atas2 == s->atas1 + 1) {
        printf("\nStack Overflow Stack1");
        return;
    }
    s->atas1++;
    s->ele[s->atas1] = item;
    printf("\nItem ditambah pada Stack1 : %d", item);
}

void pushB(DoubleStack *s, int item) {
    if (s->atas2 == s->atas1 + 1) {
        printf("\nStack Overflow Stack2");
        return;
    }
    s->atas2--;
    s->ele[s->atas2] = item;
    printf("\nItem ditambah pada Stack2 : %d", item);
}

bool popA(DoubleStack *s, int *item) {
    if (s->atas1 == -1) {
        printf("\nStack Underflow Stack1");
        return false;
    }
    *item = s->ele[s->atas1--];
    return true;
}

bool popB(DoubleStack *s, int *item) {
    if (s->atas2 == MAX) {
        printf("\nStack Underflow Stack2");
        return false;
    }
    *item = s->ele[s->atas2++];
    return true;
}

int main() {
    int item = 0;
    DoubleStack s;
    init(&s);
    pushB(&s, 10);
    pushA(&s, 20);
    pushA(&s, 30);
    pushB(&s, 40);
    pushB(&s, 50);
    pushB(&s, 60);
    
    if (popA(&s, &item))
        printf("\nItem dihapus dari Stack1 : %d", item);
    if (popA(&s, &item))
        printf("\nItem dihapus dari Stack1 : %d", item);
    if (popA(&s, &item))
        printf("\nItem dihapus dari Stack1 : %d", item);
    if (popB(&s, &item))
        printf("\nItem dihapus dari Stack2 : %d", item);
    if (popB(&s, &item))
        printf("\nItem dihapus dari Stack2 : %d", item);
    if (popB(&s, &item))
        printf("\nItem dihapus dari Stack2 : %d", item);
    printf("\n");
    return 0;
}

