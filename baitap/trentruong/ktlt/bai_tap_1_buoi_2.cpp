#include<iostream>

#define MAX 100

typedef int maTran[MAX][MAX];

void ThietLap(int &a, int &b);
void Nhap(int dong, int cot);
void Xuat(int dong, int cot);
void TimVTPTLonNhat(int dong, int cot, int &vtdong, int &vtvot);
void TimGiaTriX(int dong, int cot);
void TimDongCoTongLon(int dong, int cot);

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

int TimPTLonNhat(int dong, int cot) {
    maTran a;
    int x = a[0][0];

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (x < a[i][j]) {
                x = a[i][j];
            }
        }
    }

    return x;
}

void TimVTPTLonNhat(int dong, int cot, int &vtdong, int &vtvot) {
    maTran a;
    vtdong = 0;
    vtvot = 0;
    int x = a[vtdong][vtvot];

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (x < a[i][j]) {
                x = a[i][j];
                vtdong = i;
                vtvot = j;
            }
        }
    }

    printf("\na[%d][%d]", vtdong, vtvot);
}

void TimGiaTriX(int dong, int cot) {
    maTran a;
    int x;
    bool br = false;

    printf("   Nhap gia tri X: "); scanf("%d", &x);

    for (int i = 0; i < dong; i++) {
        if (br) {
            break;
        }
        
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == x) {
                printf("   a[%d][%d] = %d", i, j, a[i][j]);
                br = true;
                break;
            }
        }
    }
}

void TimDongCoTongLon(int dong, int cot, int &dl) {
    maTran a;
    int tong = 0;
    int max = tong;
    dl = 0;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            tong += a[i][j];
        }
        if (tong > max) {
            max = tong;
            dl = i;
        }
        tong = 0;
    }

    printf("\nDong co tong lon nhat la: %d", dl);
}

int main() {
    int a, b, vtd, vtc, dl;

    ThietLap(a, b);

    printf("\nNhap ma tran so nguyen:\n");
    Nhap(a, b);

    printf("\nXuat ma tran:\n");
    Xuat(a, b);

    printf("\nPhan tu lon nhat la: %d", TimPTLonNhat(a, b));
   
    TimVTPTLonNhat(a, b, vtd, vtc);

    printf("\nXuat vi tri hang va cot dau tien cua X:\n");
    TimGiaTriX(a, b);

    TimDongCoTongLon(a, b, dl);
}
