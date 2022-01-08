#include<stdio.h>

int main() {
    int a;
    printf("a) Nhap 1 so nguyen: ");   scanf("%d", &a);
    printf("So nguyen vua nhap la: %d", a);

    float b;
    printf("\n\nb) Nhap 1 so thuc: ");   scanf("%f", &b);
    printf("So thuc vua nhap la: %.2f", b);

    fflush(stdin);
    char c;
    printf("\n\nc) Nhap 1 ky tu: ");   scanf("%c", &c);
    printf("Ky tu vua nhap la: %c", c);

    int x, y;
    printf("\n\nd) Nhap hai so nguyen: ");
    scanf("%d%d", &x, &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %.2f\n", x, y, (float) x / y);

    return 0;
}