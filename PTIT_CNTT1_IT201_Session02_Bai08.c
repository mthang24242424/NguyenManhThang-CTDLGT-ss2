#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
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
    for (int i = 0; i < n; i++) {
        int check = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}