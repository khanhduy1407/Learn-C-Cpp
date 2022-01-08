#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, cv;
    float p, dt;

    printf("Nhap 3 canh a, b, c: "); scanf("%d%d%d", &a, &b, &c);

    if ((abs(b - c) < a && a < (b + c))) {
        cv = a + b + c;
        p = cv / 2;
        dt = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("\nChu vi tam giac la: %d", cv);
        printf("\nDien tich tam giac la: %0.2f\n\n", dt);
    } else {
        printf("\n3 canh da cho khong la 1 tam giac\n\n");
    }

    return 0;
}