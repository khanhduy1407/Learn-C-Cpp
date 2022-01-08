#include<stdio.h>
#include<math.h>

int main() {
    int n;
    
    do {
        printf("Nhap n > 0: ");   scanf("%d", &n);
    } while (n <= 0);

    #pragma region Câu a
    printf("a)");
    for (int i = 1; i <= n; i++) {
        printf("%4d", i);
    }
    #pragma endregion

    #pragma region Câu b
    printf("\n\nb)");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%4d", i);
        }
    }
    #pragma endregion

    #pragma region Câu c
    printf("\n\nc)");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1 && i % 3 != 0) {
            printf("%4d", i);
        }
    }
    #pragma endregion

    #pragma region Câu d
    printf("\n\nd)");
    int S1 = 0, S2 = 0;
    float S3 = 0, S4 = 0, x;
    for (int i = 1; i <= n; i++) {
        S1 += i;
        S2 += pow(-1 , i) * i;
        S3 += (float) i / (i + 1);
    }
    printf(" S1 = %d\n   S2 = %d\n   S3 = %.2f", S1, S2, S3);
    
    printf("\n   Nhap x: "); scanf("%f", &x);
    for (int i = 1; i <= n; i++) {
        S4 += (float) pow(x, i);
    }
    printf("   S4 = %.2f", S4);
    #pragma endregion

    #pragma region Câu e
    int tam1 = n, sum;
    while (tam1 != 0) {
        sum += tam1 % 10;
        tam1 /= 10;
    }
    printf("\n\ne) sum = %d", sum);
    #pragma endregion

    return 0;
}