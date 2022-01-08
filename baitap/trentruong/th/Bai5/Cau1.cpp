#include<stdio.h>

#define max 100

int main() {
    int a[max], n;

    do {
        printf("a) Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]);
    }

    printf("\nb)");
    for (int i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
}
