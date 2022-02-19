/**
 * 1) Viết hàm nhập ma trận số thực
 * 2) Xuất ma trận
 * 3) Tính tổng các phần tử lẻ trong ma trận
 * 4) Đếm có bao nhiêu giá trị chia hết cho 3
 * 5) Tính trung bình các phần tử chẵn trong ma trận
 * 6) Nhập vào giá trị X, xuất vị trí hàng và cột đầu tiên của X nếu có
*/

#include<stdio.h>

#define MAX 100

typedef float kieuMaTran;

void ThietLap(int &a, int &b);
void Nhap(int dong, int cot);
void Xuat(int dong, int cot);
kieuMaTran TongPhanTuLe(int dong, int cot);
int DemChiaHetCho3(int dong, int cot);
kieuMaTran TbPhanTuChan(int dong, int cot);
void TimGiaTriX(int dong, int cot);

void ThietLap(int &a, int &b) {
    do {
        printf("Nhap so dong: "); scanf("%d", &a);
    } while (a <= 0 || a > MAX);

    do {
        printf("Nhap so cot: "); scanf("%d", &b);
    } while (b <= 0 || b > MAX);
}

void Nhap(int dong, int cot) {
    kieuMaTran a[MAX][MAX];

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j); scanf("%f", &a[i][j]);
        }
    }
}

void Xuat(int dong, int cot) {
    kieuMaTran a[MAX][MAX];

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("\t%.1f", a[i][j]);
        }
        printf("\n");
    }
}

kieuMaTran TongPhanTuLe(int dong, int cot) {
    kieuMaTran a[MAX][MAX], tong = 0;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if ((int) a[i][j] % 2 == 1) {
                tong += a[i][j];
            }
        }
    }

    return tong;
}

int DemChiaHetCho3(int dong, int cot) {
    kieuMaTran a[MAX][MAX];
    int dem = 0;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if ((int) a[i][j] % 3 == 0) {
                dem++;
            }
        }
    }

    return dem;
}

kieuMaTran TbPhanTuChan(int dong, int cot) {
    kieuMaTran a[MAX][MAX], tong = 0;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if ((int) a[i][j] % 2 == 0) {
                tong += a[i][j];
            }
        }
    }

    return tong;
}

void TimGiaTriX(int dong, int cot) {
    kieuMaTran a[MAX][MAX], x;
    bool br = false;

    printf("   Nhap gia tri X: "); scanf("%f", &x);

    for (int i = 0; i < dong; i++) {
        if (br) {
            break;
        }
        
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == x) {
                printf("   a[%d][%d] = %.1f", i, j, a[i][j]);
                br = true;
                break;
            }
        }
    }
}

int main() {
    int a, b;

    ThietLap(a, b);

    printf("\n1) Nhap ma tran so thuc:\n");
    Nhap(a, b);

    printf("\n2) Xuat ma tran:\n");
    Xuat(a, b);

    printf("\n3) Tong phan tu le trong ma tran: %.1f\n", TongPhanTuLe(a, b));

    printf("\n4) Co \"%d\" phan tu chia het cho 3\n", DemChiaHetCho3(a, b));

    printf("\n5) Trung binh cac phan tu chan: %.1f\n", TbPhanTuChan(a, b));

    printf("\n6) Xuat vi tri hang va cot dau tien cua X:\n");
    TimGiaTriX(a, b);
}
