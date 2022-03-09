#include<iostream>

#define MAX 100

typedef int maTran[MAX][MAX];

void ThietLap(int &a, int &b);
void Nhap(int dong, int cot);
void Xuat(int dong, int cot);

void ThietLap(int &a, int &b) {
    do {
        printf("Nhap so dong: "); scanf("%d", &a);
    } while (a <= 0 || a > MAX);

    do {
        printf("Nhap so cot: "); scanf("%d", &b);
    } while (b <= 0 || b > MAX);
}

void Nhap(int dong, int cot) {
    maTran a;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            do {
                printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
            } while (a[i][j] > 50);
        }
    }
}

void Xuat(int dong, int cot) {
    maTran a;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

void TimCotCoTongNho(int dong, int cot, int &cl) {
    maTran a;
    int tong = 0, z = 0;
    int max = tong;
    cl = 0;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            tong += a[i][j];
            z = j;
        }
        if (tong < max) {
            max = tong;
            cl = z;
        }
        tong = 0;
    }

    printf("\nCot co tong nho nhat la: %d", cl + 1);
}

int main() {
    int a, b, cl;

    ThietLap(a, b);

    printf("\nNhap ma tran so nguyen:\n");
    Nhap(a, b);

    printf("\nXuat ma tran:\n");
    Xuat(a, b);

    TimCotCoTongNho(a, b, cl);
}
