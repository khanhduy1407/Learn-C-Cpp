/**
 * Nhập vào ba số a, b, c (là các số thực không âm).
 * Kiểm tra xem đó có phải là ba cạnh của một tam giác hay không.
*/

#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;

    printf("Nhap 3 canh a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    /**
     * Dạng: |AC - AB| < BC < AC + AB
     * hay: |b - c| < a < b + c
    */

    // Cách 1
    if ((abs(b - c) < a && a < (b + c))) {
        printf("\n3 canh da cho la 1 tam giac");
    } else {
        printf("\n3 canh da cho khong la 1 tam giac");
    }
   
    // Cách 2
    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        printf("\n3 canh da cho la 1 tam giac");
    } else {
        printf("\n3 canh da cho khong la 1 tam giac");
    }

    return 0;
}