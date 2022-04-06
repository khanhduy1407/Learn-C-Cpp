#include<stdio.h>

int main() {
    int n, s = 0;

    printf("Nhap n: "); scanf("%d", &n);

    printf("S = ");
    for (int i = 1; i <= n; i++) {
        if (i < n) printf("%d + ", i);
        else       printf("%d", i);
        s += i;
    }
    printf(" = %d", s);

    return 0;
}
