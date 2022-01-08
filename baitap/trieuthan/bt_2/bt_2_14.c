/**
 * Nhập số tự nhiên n rồi tính n! theo công thức:
 * n! = 1 nếu n = 0
 * n! = n*(n - 1) * (n - 2) * ... * 2 * 1 nếu n > 0
*/

#include<stdio.h>

int main() {
    int n;

    printf("Nhap n > 0: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nhap n > 0");
    } else {
        unsigned long long gt = 1;
        int i;

        for (i = n; i >= 1; i--) {
            gt *= i;
        }

        printf("%d! = %lli", n, gt);
    }

    return 0;
}