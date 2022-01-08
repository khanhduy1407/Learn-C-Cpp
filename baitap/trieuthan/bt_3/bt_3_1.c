/**
 * Hãy nhập vào hai số dương m, n sau đó in ra màn hình một hình chữ nhật m hàng,
 * mỗi hàng liệt kê các giá trị từ 1 đến n. Ví dụ với m = n = 4:
 *          1 2 3 4
 *          1 2 3 4
 *          1 2 3 4
 *          1 2 3 4
*/

#include<stdio.h>

int main() {
    int m, n, i, j;

    printf("Nhap so hang va cot: ");
    scanf("%d%d", &m, &n);

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}