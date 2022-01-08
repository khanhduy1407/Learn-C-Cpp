/**
 * Nhập số tự nhiên n rồi tính tổng(lưu ý phép chia các số nguyên): S = 1 + 1/2 + 1/3 + ... + 1/n
*/

#include<stdio.h>

int main() {
    int i, n;
    float sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1.0f/i;
    }

    printf("sum = %0.2f", sum);

    return 0;
}