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
            printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
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

int main() {
    int a, b;

    ThietLap(a, b);

    printf("\n1) Nhap ma tran so thuc:\n");
    Nhap(a, b);

    printf("\n2) Xuat ma tran:\n");
    Xuat(a, b);
}
