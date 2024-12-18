#include <stdio.h>

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: "); 
    scanf("%d", &n);
    int i, arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhap vao tung phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
