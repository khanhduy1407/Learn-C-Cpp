#include<stdio.h>

int minN(int n) {
    int min = 9;
    while (n > 0) {
        int t = n % 10;
        if (t < min) min = t;
        n /= 10;
    }
    return min;
}

int countMin(int n) {
    int dem = 0;
    int x = minN(n);
    while (n > 0) {
        int t = n % 10;
        if (t == x) dem++;
        n /= 10;
    }
    return dem;
}

int main() {
    int n;
    printf("Nhap so nguyen n: "); scanf("%d", &n);

    int count_min = countMin(n);

    printf("So luong chu so nho nhat: %d", count_min);
}
