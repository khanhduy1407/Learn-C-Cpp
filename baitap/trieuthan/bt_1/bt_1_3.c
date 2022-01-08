/**
 * Nhập vào hai số nguyên a, b.
 * In ra màn hình tổng, hiệu, tích, thương a/b của chúng.
 * Lưu ý khi xử lý phép chia sẽ cần ép kiểu, kiểm tra mẫu khác 0.
 * Xuất kết quả ra màn hình.
*/

#include<stdio.h>

int main() {
    int a, b;
    int tong, hieu, tich;
    float thuong;

    printf("Nhap 2 so nguyen a, b: ");
    scanf("%d %d", &a, &b);

    tong = a + b;
    hieu = a - b;
    tich = a * b;

    printf("\n%d + %d = %d", a, b, tong);
    printf("\n%d - %d = %d", a, b, hieu);
    printf("\n%d * %d = %d", a, b, tich);

    if (b != 0) {
        thuong = (float) a / b;
        printf("\n%d / %d = %0.2f", a, b, thuong);
    } else {
        printf("\nKhong co phep chia cho 0");
    }

    return 0;
}