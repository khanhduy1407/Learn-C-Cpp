/**
 * Nhập vào hai số dương m, n sau đó in ra hình chữ nhật rỗng bằng các dấu x.
 *  Ví dụ với m = 4, n = 5:
 *          x x x x x
 *          x x x x x
 *          x x x x x
 *          x x x x x
*/

#include<stdio.h>

int main() {
    int m, n, i, j;

    printf("Nhap so hang va cot: ");
    scanf("%d%d", &m, &n);

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            printf(" x");
        }
        printf("\n");
    }

    return 0;
}