#include<stdio.h>

int main() {
    int a;

    printf("Nhap so nguyen co 3 chu so: "); scanf("%d", &a);
    
    long m = a, dao;

    if (m >= 100 && m <= 999) {
        while (m > 0) {
            dao = dao * 10 + m % 10;
            m /= 10;
        }
        printf("%d dao nguoc thanh %li\n\n", a, dao);
    } else {
        printf("Vui long nhap so co 3 chu so!\n\n");
    }

    return 0;
}