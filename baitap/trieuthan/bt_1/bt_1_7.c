/**
 * Viết chương trình nhập bán kính của hình tròn
 * và tính chu vi, diện tích hình tròn đó.
*/

#include<stdio.h>
#include<math.h>

#define pi 3.14

int main() {
    int r;
    float cv, dt;

    printf("Nhap ban kinh r: ");
    scanf("%d", &r);

    cv = (float) 2 * pi * r;
    dt = (float) pi * pow(r, 2);    // pow(a, x) = a^x

    printf("\nChu vi hinh tron la %0.2f", cv);
    printf("\nDien tich hinh tron la %0.2f", dt);

    return 0;
}