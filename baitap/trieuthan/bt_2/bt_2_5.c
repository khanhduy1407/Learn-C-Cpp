/**
 * Nhập số nguyên dương n và tính tổng: S = 1! + 2! + 3! + ... + n!.
*/

#include<stdio.h>

int main() {
    unsigned int i, n;
    unsigned long long gt = 1, sum = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 1; i <= n; i++) {
            gt *= i;
            sum += gt;
        }

        printf("sum = %lld", sum);
    } else {
        printf("Gia tri da cho khong hop le!");
    }

    return 0;
}