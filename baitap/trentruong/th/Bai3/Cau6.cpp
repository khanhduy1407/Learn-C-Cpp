#include<stdio.h>

int main() {
    int n, dem = 0, sum = 0;
    printf("a) Nhap n > 0: "); scanf("%d", &n);

    if (n > 0) {
        #pragma region Câu b
        printf("b)");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%6d", i);
            }
        }
        #pragma endregion

        #pragma region Câu c
        printf("\nc)");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                dem++;
            }
        }
        printf(" %d co %d so nguyen to", n, dem);
        #pragma endregion

        #pragma region Câu d
        printf("\nd)");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        printf(" %d co tong so nguyen to = %d", n, sum);
        #pragma endregion
    } else {
        printf("Vui long nhap n > 0");
    }
}