/**
 * Nhập vào một số tự nhiên n rồi tính:
 * a) S = tổng các số tự nhiên không lớn hơn n.
 * b) S1 = tổng các số tự nhiên lẻ không lớn hơn n.
 * c) S2 = tổng các số tự nhiên chẵn không lớn hơn n.
*/

#include<stdio.h>

int main() {
    int i = 0, n;
    int S = 0, S1 = 0, S2 = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    while (i < n) {
        S += i;
        if (i % 2 == 1) S1 += i;
        if (i % 2 == 0) S2 += i;
        ++i;
    }

    printf("\nTong: S = %d", S);
    printf("\nTong le: S1 = %d", S1);
    printf("\nTong chan: S2 = %d", S2);

    return 0;
}