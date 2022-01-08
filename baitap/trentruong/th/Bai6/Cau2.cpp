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
void nhapMangPS(PS *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap ps thu %d:", i + 1);
        nhap1PhanSo(x[i]);
    }
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
    printf("\t%d/%d", x.tu, x.mau);
}
void xuatMangPS(PS *x, int n) {
    for (int i = 0; i < n; i++) {
        xuat1PhanSo(x[i]);
    }
}

PS cong(PS a, PS b) {
    PS c;
    c.tu = (a.tu * b.mau) + (b.tu * a.mau);
    c.mau = a.mau * b.mau;
    return c;
}
void tongDayPS(PS *x, int n) {
    PS tong = x[0];
    for (int i = 1; i < n; i++) {
       tong = cong(tong, x[i]);
    }
    rutGonPS(tong);
    printf("\n\nc) Tong day ps = %d/%d", tong.tu, tong.mau);
}

void timPSlonNhat(PS *x, int n) {
    int maxPS;
    double gt[MAX], max;
    for (int i = 0; i < n; i++) {
       gt[i] = (double) x[i].tu / x[i].mau;
    }
    max = gt[0];
    for (int i = 1; i < n; i++) {
        if (max < gt[i]) {
            maxPS = i;
            max = gt[i];
        }
    }
    rutGonPS(x[maxPS]);
    printf("\n\nd) PS lon nhat: %d/%d", x[maxPS].tu, x[maxPS].mau);
}

void sortPS(PS *x, int n) {
    PS dc;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (((float) x[i].tu / x[i].mau) > ((float) x[j].tu / x[j].mau)) {
                dc = x[i];
                x[i] = x[j];
                x[j] = dc;
            }
        }
    }
    printf("\n\ne) Sap xep PS tang dan:\n");
    for (int i = 0; i < n; i++) {
        xuat1PhanSo(x[i]);
    }
}

int main() {
    int n;
    PS x[MAX];

    printf("Nhap so luong phan so: "); scanf("%d", &n);
    nhapMangPS(x, n);
    printf("\n");
    xuatMangPS(x, n);

    tongDayPS(x, n);
    timPSlonNhat(x, n);
    sortPS(x, n);
}
