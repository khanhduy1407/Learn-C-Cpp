#include<stdio.h>

int main() {
    long n;
    int sum = 0;
    printf("a) Nhap n > 0: ");	scanf("%ld", &n);

    if (n < 0) n *= -1;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("b) sum = %d\n\n", sum);
}