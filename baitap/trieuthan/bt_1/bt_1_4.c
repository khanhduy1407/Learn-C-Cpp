/**
 * Nhập vào hai số nguyên a, b.
 * So sánh xem số nào lớn hơn, số nào nhỏ hơn hay hai số bằng nhau.
 * In kết quả ra màn hình.
*/

#include<stdio.h>

int main() {
    int a, b;

    printf("Nhap 2 so nguyen a, b: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("%d < %d", a, b);
    } else if (a > b) {
        printf("%d > %d", a, b);
    } else {
        printf("%d = %d", a, b);
    }

    return 0;
}