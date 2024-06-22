#include <stdio.h>
#include <stdlib.h>

// Define the Employee struct
typedef struct employee_st {
    char name[40];
    int id;
} Employee; // Add a semicolon here

int main() { // Specify the return type of main
    int myInt;
    Employee john; // Define a variable of type Employee
    printf("Size of int is %lu\n", sizeof(myInt)); // Use %lu for size_t
    printf("Size of Employee is %lu\n", sizeof(Employee)); // Use %lu for size_t
    printf("Size of john is %lu\n", sizeof(john)); // Use %lu for size_t
    printf("Size of char is %lu\n", sizeof(char)); // Use %lu for size_t
    printf("Size of short is %lu\n", sizeof(short)); // Use %lu for size_t
    printf("Size of int is %lu\n", sizeof(int)); // Use %lu for size_t
    printf("Size of long is %lu\n", sizeof(long)); // Use %lu for size_t
    printf("Size of float is %lu\n", sizeof(float)); // Use %lu for size_t
    printf("Size of double is %lu\n", sizeof(double)); // Use %lu for size_t

    return 0;
}

