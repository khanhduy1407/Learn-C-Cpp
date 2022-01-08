/**
 * Viết chương trình nhập số nguyên n và kiểm tra n có phải số nguyên tố hay không
*/

#include<stdio.h>
#include<math.h>

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("\n%d khong la so nguyen to", n);
    } else {
        int i;
        int mark = 1;
        
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                mark = 0;
                break;
            }
        }

        if (mark == 1) {
            printf("\n%d la so nguyen to", n);
        } else {
            printf("\n%d khong la so nguyen to", n);
        }
    }

    return 0;
}