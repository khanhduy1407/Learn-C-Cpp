/**
 * Nhập số tự nhiên n sau đó in ra các số chẵn nhỏ hơn n và các số lẻ nhỏ hơn n.
*/

#include<stdio.h>

int main() {
    int i, n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    i = 0;
    printf("\nCac so chan nho hon %d:", n);
    while (i < n) {
        if (i % 2 == 0)
            printf(" %d", i);
        ++i;
    }

    i = 0;
    printf("\nCac so le nho hon %d:", n);
    while (i < n) {
        if (i % 2 == 1)
            printf(" %d", i);
        ++i;
    }

    return 0;
}