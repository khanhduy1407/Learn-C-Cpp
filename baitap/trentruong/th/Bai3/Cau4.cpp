#include<stdio.h>

int main() {
    int n, k;
    printf("a) Nhap so dong, so dau sao: "); scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\nb)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}