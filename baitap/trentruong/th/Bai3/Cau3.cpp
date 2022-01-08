#include<stdio.h>

int main() {
    int n, dem = 0, sum = 0;

    do {
        printf("a) Nhap 0 < n <= 100: "); scanf("%d", &n);
    } while (n <= 0 && n > 100);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%4d", i);

            dem++;

            if (i == n) {
                continue;
            }
            sum += i;
        }
    }

    printf("\nb) Co %d uoc so\n", dem);
    if (dem == 2) printf("   n la so nguyen to\n");
    else		  printf("   n khong phai la so nguyen to\n");

    printf("c) Tong cac uoc la: %d\n", sum);
    if (sum == n) printf("   n la so hoan thien\n\n");
    else		  printf("   n la so khong hoan thien\n\n");
}