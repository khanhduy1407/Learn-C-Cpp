/**
 * Hãy nhập 4 số nguyên a, b, c, d.
 * Tìm giá trị lớn nhất của chúng và gán giá trị lớn nhất đó cho biến max.
 * In giá trị max tìm được ra màn hình.
 * Trong trường hợp 4 số bằng nhau thì in ra: không có số lớn nhất.
*/

#include<stdio.h>

int main() {
    int a, b, c, d, max;

    printf("Nhap 4 so nguyen a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    max = a;

    if (max != b) {
        if (max < b) max = b;
        if (max < c) max = c;
        if (max < d) max = d;

        printf("\nSo lon nhat la: %d", max);
    }

    if (a == b && b == c && c == d) {
        printf("\nKhong co so lon nhat");
    }

    return 0;
}