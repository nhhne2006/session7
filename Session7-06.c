#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5}, i;
    printf ("Phan tu da nhap vao la:   1 2 3 4 5 \n");
    printf ("Mang sau khi thay doi la: ");
    for (i = 0 ; i < 5 ; i++)
    {
        if (arr[i] % 2 == 0){
            arr[i] += 3;
        }
        else {
            arr[i] +=2;
        }
    }
    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d ", arr[i]);
    }
}
