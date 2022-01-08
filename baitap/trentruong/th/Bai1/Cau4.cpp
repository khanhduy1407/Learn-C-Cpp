#include<stdio.h>

#define pi 3.14

int main() {
    float r;

    printf("Nhap ban kinh: ");  scanf("%f", &r);

    printf("Chu vi hinh tron: %0.2f", 2 * pi * r);
    printf("\nDien tich hinh tron: %0.2f", pi * r * r);

    return 0;
}