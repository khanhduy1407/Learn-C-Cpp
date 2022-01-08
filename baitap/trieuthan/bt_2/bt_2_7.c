/**
 * Nhập số tự nhiên n rồi liệt kê các ước số của nó. Số đó bao nhiêu ước?
*/

#include<stdio.h>

int main() {
    unsigned long i, n;
    unsigned int count = 0;

    printf("Nhap so nguyen n: ");
    scanf("%li", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf(" %li", i);
            count++;
        }
    }

    printf("\n%li co %d uoc so", n, count);

    return 0;
}