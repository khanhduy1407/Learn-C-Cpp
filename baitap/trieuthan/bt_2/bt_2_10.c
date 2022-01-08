/**
 * Viết chương trình phân tích một số nguyên thành các thừa số nguyên tố.
 * Ví dụ: Số 28 được phân tích thành 2 x 2 x 7
*/

#include<stdio.h>

int main() {
    unsigned int n;
    unsigned int i = 2;

    printf("Nhap so nguyen n >= 2: ");
    scanf("%d", &n);

    /*if (n < 2) {
        printf("Nhap n >= 2");
    } else {
        printf("%d = ", n);
        while (n > 1) {
            if ( n % i == 0) {
                printf("%d", i);
                if (n != i) {
                    printf(" * ");
                }
                n /= i;
            } else {
                i++;
            }
        }
    }*/

    // dạng mũ
    if (n < 2) {
        printf("Nhap n >= 2");
    } else {
        printf("%d = ", n);
        int count = 0;
        while (n > 1) {
            if ( n % i == 0) {
                count++;
                if (n == i) {
                    printf("%d^%d", i, count);
                }
                n /= i;
            } else {
                if (count > 0) {
                    printf("%d^%d * ", i, count);
                    count = 0;
                }
                i++;
            }
        }
    }

    return 0;
}