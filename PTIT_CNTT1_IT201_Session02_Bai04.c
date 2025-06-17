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
    int pos, value;
    printf("nhap vi tri (0-%d): ",n-1);
    scanf("%d", &pos);
    while (pos> n-1 || pos < 0) {
        printf("vui long nhap vi tri trong khoang (0-%d):", n-1);
        scanf("%d", &pos);
    }
    printf("nhap gia tri muon thay doi: ");
    scanf("%d", &value);
    arr[pos] = value;
    for (int i = 0; i < n; i++) {
        printf("%d  ",arr[i]);
    }
    free(arr);
    return 0;
}