#include <stdio.h>

int main(){
    int arr[5], i, kiemtra = 0;
    for (i = 0 ; i < 5 ; i++){
        printf("Nhap vao phan tu trong mang %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("So chan chua trong mang la \n");  
    for (i = 0 ; i < 5 ; i++){
        if (arr[i] % 2 ==0)
        {
            printf("%d\n", arr[i]);
            kiemtra++;
        }
        
    }
    if (kiemtra == 0){  
    }
}
