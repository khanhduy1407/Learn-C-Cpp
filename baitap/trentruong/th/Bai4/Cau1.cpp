#include<stdio.h>

void nhapSoNguyen(int &n) {
    do {
        printf("a) Nhap 0 < n < 100: "); scanf("%d", &n);
    } while (n <= 0 || n > 99);
}

int ktnt(int n) {
    /**
     * return 0 nếu n không phải là số nguyên tố
     * return 1 nếu n là số nguyên tố
    */
    if (n < 2) {
        return 0;       // n không phải là số nguyên tố
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;   // n không phải là số nguyên tố
        }
    }

    return 1;           // n là số nguyên tố
}

void lietKeSoTu1DenN(int n) {
    printf("\nc) Cac so nguyen to tu 1 den %d:", n);

    for (int i = 1; i <= n; i++) {
        if (ktnt(i) == 1) {
            printf("\t%d", i);
        }
    }
}

int demSoNT(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (ktnt(i) == 1) {
            count++;
        }
    }

    return count;
}

int tinhTongNT(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (ktnt(i) == 1) {
            sum += i;
        }
    }

    return sum;
}

float tbcNT(int n) {
    return (float) tinhTongNT(n) / demSoNT(n);
}

int main() {
    int n;
    nhapSoNguyen(n);

    if (ktnt(n) == 1) {
        printf("\nb) %d la so nguyen to", n);
    } else {
        printf("\nb) %d khong phai la so nguyen to", n);
    }

    lietKeSoTu1DenN(n);

    printf("\nd) Tu 1 den %d co %d so nguyen to", n, demSoNT(n));

    printf("\ne) Tu 1 den %d co tong = %d", n, tinhTongNT(n));

    printf("\nf) Tu 1 den %d co trung binh cong = %.2f", n, tbcNT(n));
}