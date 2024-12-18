#include <stdio.h>

int main(){
    int arr[5], i;
    for (i = 0 ; i <5 ; i++){
        printf("Nhap lan luot phan tu trong mang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0 ; i < 5 ; i++){
        printf("%d\n", arr[i]);
    }
}
