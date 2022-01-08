#include<stdio.h>

int main() {
    int a, b;
    char pt;
    printf("Nhap 1 phep toan: ");
    /**
     * @param %*c%c
     * %*c tách "Enter" ra nhưng có "*" nên không ghi dữ liệu vào biến pt
     * %c tiếp theo tách dấu phép toán ra và ghi vào biến pt
    */
    scanf("%d%*c%c%d", &a, &pt, &b);

    switch (pt) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %.2f", a, b, (float) a / b);
            break;
        default:
            printf("Phep toan khong hop le!");
            break;
    }
}