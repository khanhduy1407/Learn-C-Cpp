#include<stdio.h>

int main() {
    int S = 0, S1 = 1, S2, n;
    do {
        printf("Nhap n: "); scanf("%d", &n);
    } while (n < 0);

    for (int i = 1; i < n; i++) {
        if (i == 2) S2 = S1;
        else S2 = i - 1;
        S += S2 + (i-S1);
    }

    printf("%d", S);
}
