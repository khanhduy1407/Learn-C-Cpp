/**
 * Viết chương trình tìm ước chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên a, b.
*/

#include<stdio.h>

int main() {
    int a, b;

    printf("Nhap 2 so nguyen a, b: ");
    scanf("%d %d", &a, &b);

    if (a >= 0 && b >= 0) {
        if (a == 0 && b == 0) {
            printf("\nKhong ton tai UCLN, BCNN");
        } else if (a == 0 || b == 0) {
            printf("\nKhong ton tai BCNN, UCLN = %d", (a == 0) ? b : a);
        } else {
            int bc = a * b;
            // Cách 1:
            /*while (a != b) {
                if (a > b) {
                    a -= b;
                } else {
                    b -= a;
                }
            }*/

            // Cách 2:
            while (b != 0) {
                int x = b;
                b = a % b;
                a = x;
            }

            printf("\nUCLN = %d", a);
            printf("\nBCNN = %d", bc / a);
        }
    } else {
        printf("\na va b phai lon hon 0");
    }

    return 0;
}