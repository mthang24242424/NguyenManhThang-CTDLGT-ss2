#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("nhap so phan tu trong khoang (0-100): ");
    scanf("%d", &n);
    while (n>100 || n < 0) {
        printf("vui long nhap so phan tu trong khoang (0-100):");
        scanf("%d", &n);
    }
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("ko cap phat dc bo nho");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int num, count = 0;
    printf("Nhap so bat ki de kiem tra");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("so lan xuat hien la: %d", count);
    free(arr);
    return 0;
}