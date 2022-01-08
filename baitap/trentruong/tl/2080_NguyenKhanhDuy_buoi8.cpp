#include<stdio.h>
#include<string.h>

#define MAX 100

struct DATE {
    int ngay, thang, nam;
};

struct SV {
    char msv[15], hoten[25], gt, lop[8];
    DATE ns;
    float dtb;
};

void nhapDATE(DATE &x) {
    printf("Nhap ngay/thang/nam: ");
    scanf("%d%*c%d%*c%d", &x.ngay, &x.thang, &x.nam);
}
void xuatDATE(DATE x) {
    printf("  %02d/%02d/%4d  ", x.ngay, x.thang, x.nam);
}

void nhap1SV(SV &x) {
    fflush(stdin);
    printf("\nLop: "); scanf("%s", &x.lop);
    fflush(stdin);
    printf("Ma SV: "); scanf("%s", &x.msv);
    fflush(stdin);
    printf("Ho ten: "); gets(x.hoten);
    do {
        fflush(stdin);
        printf("Gioi tinh (x: nu, y: nam): "); scanf("%c", &x.gt);
    } while (x.gt != 'x' && x.gt != 'y' && x.gt != 'X' && x.gt != 'Y');
    nhapDATE(x.ns);
    float t;
    printf("DTB: "); scanf("%f", &t); x.dtb = t;
}
void xuat1SV(SV x) {
    printf("\n%-10s", x.lop);
    printf("%-15s%-20s %c", x.msv, x.hoten, x.gt);
    xuatDATE(x.ns);
    printf(" %5.1f", x.dtb);
}

void nhapSoPhanTu(int &n) {
    do {
        printf("a) Nhap so luong sinh vien: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
}
void nhapMangSV(SV *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n# Nhap sinh vien thu %d:", i + 1);
        nhap1SV(x[i]);
    }
}
void xuatMangSV(SV *x, int n) {
    for (int i = 0; i < n; i++) {
        xuat1SV(x[i]);
    }
}

void xuatSVdtbHon5(SV *x, int n) {
    for (int i = 0; i < n; i++) {
        if (x[i].dtb > 5) {
            xuat1SV(x[i]);
        }
    }
}

void xuatSV_TH(SV *x, int n) {
    for (int i = 0; i < n; i++) {
        if ((x[i].lop[3] == 't' || x[i].lop[3] == 'T') && (x[i].lop[4] == 'h' || x[i].lop[4] == 'H')) {
            xuat1SV(x[i]);
        }
    }
}

int demSVnu(SV *x, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (x[i].gt == 'x' || x[i].gt == 'X') {
            dem++;
        }
    }
    return dem;
}

void xuatSVdtbMax(SV *x, int n) {
    float max = x[0].dtb;
    for (int i = 0; i < n; i++) {
        if (x[i].dtb > 'x') {
            max = x[i].dtb;
        }
    }
    for (int i = 0; i < n; i++) {
        if (x[i].dtb == max) {
            xuat1SV(x[i]);
        }
    }
}

void themSVvaoCuoi(SV *x, int &n) {
    nhap1SV(x[n]);
    n++;
}

void xoaTaivtk(SV *x, int &n, int k) {
    for (int i = k; i < (n - 1); i++) {
        x[i] = x[i + 1];
    }
    n--;
}
void timXvaXoa(SV *a, int &n, char *x) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].msv, x) == 0) {
            xoaTaivtk(a, n, i);
            i--;
        }
    }
}

void doiCho(SV &a, SV &b) {
    SV tam = a;
    a = b;
    b = tam;
}
void sortTang(SV *a, int n) {
    for (int i = 0; i < (n - 1); i++) {
        for (int k = i + 1; k < n; k++) {
            if (a[i].dtb > a[k].dtb) {
                doiCho(a[i], a[k]);
            }
        }
    }
}

int main() {
    int n;
    nhapSoPhanTu(n);

    SV a[MAX];
    nhapMangSV(a, n);
    printf("\nb) Danh sach sinh vien:");
    xuatMangSV(a, n);
    printf("\n\nc) Danh sach SV co dtb > 5:");
    xuatSVdtbHon5(a, n);
    printf("\n\nd) Danh sach SV nganh CNTT:");
    xuatSV_TH(a, n);
    printf("\n\ne) Co %d sv nu", demSVnu(a, n));
    printf("\n\nf) Danh sach SV co dtb lon nhat:");
    xuatSVdtbMax(a, n);
    printf("\n\ng) Them 1 SV moi vao cuoi danh sach:");
    themSVvaoCuoi(a, n);
    printf("\n   Danh sach sau khi them:");
    xuatMangSV(a, n);
    char x[15];
    printf("\n\nh) Nhap ma sv muon xoa: "); scanf("%s", &x);
    timXvaXoa(a, n, x);
    printf("\n   Danh sach sau khi xoa:");
    xuatMangSV(a, n);
    printf("\n\ni) Danh sach sau khi sap xep:");
    sortTang(a, n);
    xuatMangSV(a, n);
}
