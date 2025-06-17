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
        int count = 1;
        int show = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                show = 1;
                break;
            }
        }
        if (show == 0) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    count++;
                }
            }
            printf("Phan tu %d xuat hien %d lan \n", arr[i], count);
        }
    }
    free(arr);
    return 0;
}