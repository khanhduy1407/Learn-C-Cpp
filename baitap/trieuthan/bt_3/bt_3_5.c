/**
 * Nhập số dương h sau đó in ra tam giác số đối xứng chiều cao h.
 * Ví dụ h = 5:
 *                  1
 *                1 2 1
 *              1 2 3 2 1
 *            1 2 3 4 3 2 1
 *          1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>
#include<math.h>

int main() {
    int h, i, j;

    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    if (h > 0) {
        for (i = 1; i <= h; i++) {
            for (j = 1; j < 2 * h; j++) {
                if (abs(h - j) <= (i - 1)) {
                    printf("%3d", i - abs(h - j));
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