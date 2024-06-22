#include <stdio.h>

int main() {
    int n;
    
    printf("Masukkan banyaknya bilangan: ");
    scanf("%d", &n); // Corrected scanf
    
    int angka[n]; // Declaring array angka with size n
    int i;
    
    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke %d: ", i + 1);
        scanf("%d", &angka[i]); // Corrected scanf
    }
    
    for (i = 0; i < n; i++) {
        printf("Angka ke %d: %d\n", i + 1, angka[i]);
    }
    
    getchar(); // It's unclear why getchar() is used here, but I'll leave it as is
    return 0;
}

