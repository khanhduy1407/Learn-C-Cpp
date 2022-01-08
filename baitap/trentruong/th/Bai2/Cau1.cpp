#include<stdio.h>

int main() {
    int a, b;
    float x;

    printf("Nhap he so a, b: ");
    scanf("%d %d", &a, &b);

    /**
     * Trường hợp 1: a ≠ 0 => Phương trình đã cho có 1 nghiệm duy nhất
     * x = -b / a (nghiệm đúng với mọi x)
    */
    if (a != 0) {
        x = (float) -b / a;
        printf("\nPT co 1 nghiem duy nhat la x = %0.2f", x);
    }

    /**
     * Trường hợp 2: a = 0
     *     + b = 𝟎 => Phương trình đã cho vô số nghiệm
     *     + b ≠ 𝟎 => Phương trình đã cho vô nghiệm
    */
    else {
        if (b == 0) {
            printf("\nPT da cho vo so nghiem");
        } else {
            printf("\nPT da cho vo nghiem");
        }
    }

    return 0;
}