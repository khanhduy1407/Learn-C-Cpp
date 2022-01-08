/**
 * Nhập 2 số tự nhiên m, n
 * rồi kiểm tra xem chúng có nguyên tố cùng nhau không
 * (Hai số nguyên tố cùng nhau là 2 số có UCLN là 1).
*/

#include<stdio.h>

int main() {
    int m, n;

    printf("Nhap m, n > 0: ");
    scanf("%d%d", &m, &n);

    if (m > 0 && n > 0) {
        while (m != n) {
            if (m > n) {
                m -= n;
            } else {
                n -= m;
            }
        }

        // uoc chung m, n
        if (m == 1) {
            printf("Hai so nguyen to cung nhau");
        } else {
            printf("Hai so nguyen to khong cung nhau");
        }
    } else {
        printf("Nhap lai m, n > 0");
    }

    return 0;
}