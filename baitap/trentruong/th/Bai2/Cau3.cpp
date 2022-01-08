#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;

    printf("Nhap 3 canh a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    /**
     * Dạng tam giác: |AC - AB| < BC < AC + AB
     * hay:           |b - c| < a < b + c
    */

    if ((abs(b - c) < a && a < (b + c))) {
        if (a == b && b == c) {
            printf("\n3 canh da cho tao thanh tam giac deu");
        } else if (a == b || b == c || c == a) {
            printf("\n3 canh da cho tao thanh tam giac can");
        } else if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)) {
            printf("\n3 canh da cho tao thanh tam giac vuong");
        } else {
            printf("\n3 canh da cho la 1 tam giac thuong");
        }
    } else {
        printf("\n3 canh da cho khong la 1 tam giac");
    }

    return 0;
}