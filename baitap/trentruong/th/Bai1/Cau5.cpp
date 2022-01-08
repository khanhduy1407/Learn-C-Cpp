#include<stdio.h>

int main() {
    int a, b, max1;
    printf("a) Nhap 2 so nguyen: ");   scanf("%d%d", &a, &b);
    max1 = a;
    if (max1 < b)   max1 = b;
    printf("So lon nhat trong 2 so la: %d", max1);

    int x, y, z, max2;
    printf("\n\nb) Nhap 3 so nguyen: ");   scanf("%d%d%d", &x, &y, &z);
    max2 = x;
    if (max2 < y)   max2 = y;
    if (max2 < z)   max2 = z;
    printf("So lon nhat trong 3 so la: %d", max2);

    return 0;
}