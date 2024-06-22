#include <stdio.h>

struct complex {
    int imag;
    float real;
};

struct level5 {
    int data5;
};

struct level4 {
    struct level5 nested5;
    char data4;
};

struct level3 {
    struct level4 nested4;
    float data3;
};

struct level2 {
    struct level3 nested3;
    double data2;
};

struct level1 {
    struct level2 nested2;
    long data1;
};

struct number {
    struct complex comp;
    int integers;
    struct level1 nested1;
} num1, num2;

int main() {
    struct number num1;

    // Assigning values
    num1.comp.imag = 10;
    num1.comp.real = 3.14;
    num1.integers = 42;

    num1.nested1.data1 = 1000;
    num1.nested1.nested2.data2 = 3.14;
    num1.nested1.nested2.nested3.data3 = 2.718;
    num1.nested1.nested2.nested3.nested4.data4 = 'A';
    num1.nested1.nested2.nested3.nested4.nested5.data5 = 42;

    // Accessing values
    printf("Complex number: imag = %d, real = %.2f\n", num1.comp.imag, num1.comp.real);
    printf("Integer: %d\n", num1.integers);
    printf("Data at level 1: %ld\n", num1.nested1.data1);
    printf("Data at level 2: %.3lf\n", num1.nested1.nested2.data2);
    printf("Data at level 3: %f\n", num1.nested1.nested2.nested3.data3);
    printf("Data at level 4: %c\n", num1.nested1.nested2.nested3.nested4.data4);
    printf("Data at level 5: %d\n", num1.nested1.nested2.nested3.nested4.nested5.data5);

    return 0;
}

