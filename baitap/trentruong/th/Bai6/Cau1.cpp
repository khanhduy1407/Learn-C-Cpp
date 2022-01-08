#include<stdio.h>
#include<math.h>

#define MAX 100

typedef struct PhanSo {
    int tu, mau;
} PS;

void nhap1PhanSo(PS &x) {
    printf("\n\tNhap tu so: "); scanf("%d", &x.tu);
    do {
        printf("\tNhap mau so: "); scanf("%d", &x.mau);
    } while (x.mau == 0);
}

int UCLN(int a,int b){
    if (a % b != 0) {
        return UCLN(b, a % b);
    } else {
        return b;
    }
}

void rutGonPS(PS &x) {
    int ucln = UCLN(x.tu, x.mau);
    x.tu = x.tu / ucln;
    x.mau = x.mau / ucln;
    if (x.mau < 0) {
        x.tu = -x.tu; x.mau = -x.mau;
    }
}

void xuat1PhanSo(PS x) {
    rutGonPS(x);
    printf("RG: %d/%d", x.tu, x.mau);
}

void congPhanSo(PS x, PS y) {
    PS tong;
    tong.tu = (x.tu * y.mau) + (y.tu * x.mau);
    tong.mau = x.mau * y.mau;
    rutGonPS(tong);
    printf("\n\nd) Tong 2 ps = %d/%d", tong.tu, tong.mau);
}

int soSanh(PS x, PS y) {
    return (x.tu * y.mau) - (y.tu * x.mau);
}

int main() {
    PS x, y;
    
    printf("Nhap phan so thu nhat: "); nhap1PhanSo(x); xuat1PhanSo(x);
    printf("\nNhap phan so thu hai: "); nhap1PhanSo(y); xuat1PhanSo(y);
    
    congPhanSo(x, y);

    int kq = soSanh(x, y);
    if (kq == 0) {
        printf("\n\ne) PS1 = PS2");
    } else {
        if (kq > 0) {
            printf("\n\ne) PS1 > PS2");
        } else {
            printf("\n\ne) PS1 < PS2");
        }
    }
}
