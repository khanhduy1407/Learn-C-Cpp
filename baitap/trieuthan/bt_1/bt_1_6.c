/**
 * Viết chương trình nhập vào hai cạnh của hình chữ nhật
 * và tính chu vi và diện tích của hình chữ nhật đó.
 * Hiển thị kết quả lên màn hình.
*/

#include<stdio.h>

int main() {
    int a, b, cv, dt;

    printf("Nhap 2 canh a, b: ");
    scanf("%d %d", &a, &b);

    cv = (a + b) * 2;
    dt = a * b;

    printf("\nChu vi hinh chu nhat la %d", cv);
    printf("\nDien tich hinh chu nhat la %d", dt);

    return 0;
}