#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float delta, x, x1, x2;

    printf("Nhap he so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    /**
     * Trường hợp 1: a = 0 => b𝑥 + c = 0 <=> a𝑥 + b = 𝟎
    */
    if (a == 0) {
        if (a != 0) {
            x = (float) -b / a;
            printf("\nPT co 1 nghiem duy nhat la x = %0.2f", x);
        } else {
            if (b == 0) {
                printf("\nPT da cho co tap nghiem la R");
            } else {
                printf("\nPT da cho vo nghiem");
            }
        }
    }

    /**
     * Trường hợp 2: a ≠ 0 => Δ = b^2 − 4ac
     *     - Δ < 𝟎 => Phương trình vô nghiệm
     *     - Δ = 𝟎 => Phương trình có nghiệm kép 𝑥 = -b / 2a
     *     - Δ > 𝟎 => Phương trình có 2 nghiệm phân biệt
     *         + 𝑥1 = (-b + sqrt(Δ)) / 2a
     *         + 𝑥2 = (-b - sqrt(Δ)) / 2a
    */
    else {
        delta = pow(b, 2) - 4*a*c;
        if (delta < 0) {
            printf("\nPT da cho vo nghiem");
        } else if (delta == 0) {
            x = -b / (2*a);
            printf("\nPT da cho co 1 nghiem kep la x = %0.2f", x);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("\nPT da cho co 2 nghiem phan biet la:\nx1 = %0.2f\nx2 = %0.2f", x1, x2);
        }
    }

    return 0;
}