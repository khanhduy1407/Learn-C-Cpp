/**
 * Nhập số tự nhiên n rồi tính tổng: S = 1 + 2 + ... + n.
*/

#include<stdio.h>

int main() {
    int i, n;
    int sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += i;
    }

    printf("sum = %d", sum);

    return 0;
}