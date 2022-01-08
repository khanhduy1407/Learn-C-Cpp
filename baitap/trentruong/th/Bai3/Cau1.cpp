#include<stdio.h>

int main() {
    printf("a)\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\tXIN CHAO CAC BAN\n", i);
    }

    printf("\n==================\n\n");

    int n;
    printf("b) Nhap so dong: ");   scanf("%d", &n);
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d\tXIN CHAO CAC BAN\n", i);
        }
    } else {
        printf("Nhap so dong n > 0");
    }

    return 0;
}