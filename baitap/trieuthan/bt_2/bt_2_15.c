/**
 * Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.
 * Ví dụ: số 8545604 có tổng các chữ số là: 8 + 5 + 4 + 5 + 6 + 0 + 4 = 32
*/

#include<stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) n *= -1;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("sum = %d", sum);

    return 0;
}