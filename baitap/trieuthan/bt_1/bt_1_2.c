/**
 * Nhập vào một số nguyên n.
 * Hãy cho biết số đó chẵn hay lẻ, âm hay dương.
 * In kết quả kiểm tra ra màn hình, mỗi kết luận trên một dòng.
*/

#include<stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("\n%d la so chan", n);
    } else {
        printf("\n%d la so le", n);
    }

    if (n > 0) {
        printf("\n%d la so duong", n);
    } else if (n < 0) {
        printf("\n%d la so am", n);
    } else {
        printf("\n%d khong la so duong, cung khong la so am", n);
    }

    return 0;
}