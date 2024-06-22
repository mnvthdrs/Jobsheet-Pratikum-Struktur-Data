#include <stdio.h>

int main() {
    int nil[3]; // Declare an array to store the grades
    int rr;

    nil[0] = 90;
    nil[1] = 85; // Assuming you have grades for nil[0], nil[1], and nil[2]
    nil[2] = 95;

    rr = (nil[0] + nil[1] + nil[2]) / 3;
    printf("The average of the 3 grades is: %d", rr);

    return 0;
}

