/**
 * Nhập số dương h sau đó in ra tam giác vuông
 *  góc trái dưới có chiều cao h bằng các dấu *. Ví dụ h = 4:
 *          *
 *          * *
 *          * * *
 *          * * * *
*/

#include<stdio.h>

int main() {
    int h;

    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    if (h > 0) {
        int i, j;

        for (i = 1; i <= h; i++) {
            for (j = 1; j <= i; j++) {
                printf(" *");
            }
            printf("\n");
        } 
    } else {
        printf("Nhap h >= 1");
    }

    return 0;
}