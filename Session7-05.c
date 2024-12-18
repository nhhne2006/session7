#include <stdio.h>

int main(){
    int n, i, max, min, arr[5];
    for (i = 0 ; i <5 ; i++){
        printf("Nhap vao phan tu cua mang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = 0;
    for (i = 0 ; i <5 ; i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    min = 0;
    for (i = 0 ; i <5 ; i++){
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    printf("Phan tu nho nhat la: %d\n", min);
    printf("Phan tu lon nhat la: %d\n", max);
}
