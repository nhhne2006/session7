#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);

    int i; // Khai b�o bi?n i ? d�y
    for (i = 1; i <= length; i++) {
        printf("%d ", array[i]);
    }
    printf("\nDo dai cua mang: %d\n", length);

    return 0;
}
