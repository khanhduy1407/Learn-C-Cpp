/**
 * Một số được gọi là số thuận nghịch nếu ta đọc từ trái sang phải
 * hay từ phải sang trái số đó ta vẫn nhận được một số giống nhau.
 * Hãy nhập một số và kiểm tra xem số đó có phải số thuật nghịch hay không
 * Ví dụ số: 558855
*/

#include<stdio.h>

int main() {
    long n;
    printf("Nhap n > 0: ");
    scanf("%li", &n);

    if (n < 0) {
        printf("Nhap n > 0");
    } else {
        long dao = 0;
        long m = n;

        while (m > 0) {
            dao = dao * 10 + m % 10;
            m /= 10;
        }

        // 1234
        /**
         * 123 => 4
         * 12 => 40 + 3 = 43
         * 1 => 430 + 2 = 432
         * 0 => 4320 + 1 = 4321
        */

        if (dao == n) {
            printf("%li la so thuan nghich", dao);
        } else {
            printf("Khong thuan nghich");
        }
    }

    return 0;
}