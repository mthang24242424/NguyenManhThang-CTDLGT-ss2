#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n,num;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("ko the cap phat bo nho");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("nhap so nguyen bat ky:");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == num) {
                printf("%d, %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("ko tim thay");
    free(arr);
    return 0;
}