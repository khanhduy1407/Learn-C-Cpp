/**
 * Nhập số dương h sau đó in ra tam giác cân với chiều cao h. Ví dụ h = 5:
 *                  *
 *                * * *
 *              * * * * *
 *            * * * * * * *
 *          * * * * * * * * *
*/

#include<stdio.h>
#include<math.h>

int main() {
    int h;

    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    if (h > 0) {
        int i, j;

        for (i = 1; i <= h; i++) {
            for (j = 1; j < 2 * h; j++) {
                if (abs(h - j) <= (i - 1)) {
                    printf(" * ");
                } else {
                    printf("   ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Nhap h > 0");
    }

    return 0;
}