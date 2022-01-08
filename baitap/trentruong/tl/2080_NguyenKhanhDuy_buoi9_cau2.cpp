#include<stdio.h>
#include<string.h>

struct DATE {
    int ngay, thang, nam;
};
int kiemTraDATE(DATE x); // khai báo nguyên mẫu hàm (prototype)
struct TB {
    char mtb[7], hoten[10], sdt[11], ltb[3];
    DATE ndk;
    int tgnoi, tgngoai;
};
int tinhCPTB(TB x);

void nhapDATE(DATE &x) {
    do {
        printf("\tNgay dang ky: ");
        scanf("%d%*c%d%*c%d", &x.ngay, &x.thang, &x.nam);
    } while (kiemTraDATE(x) == 0);
}
void xuatDATE(DATE x) {
    printf(" %02d/%02d/%d ", x.ngay, x.thang, x.nam);
}
int kiemTraDATE(DATE x) {
    if (x.ngay <= 0 || x.thang <= 0 || x.thang > 12 || x.nam < 1900 || x.nam > 9999) {
        return 0;
    }

    int soNgay;
    /**
     * Tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày
     * Tháng 4, 6, 9, 11 có 30 ngày
     * Tháng 2 có 28 ngày (năm nhuận có 29 ngày)
    */
   if (x.thang == 1 || x.thang == 3 || x.thang == 5 || x.thang == 7
       || x.thang == 8 || x.thang == 10 || x.thang == 12) {
        soNgay = 31;
    } else if (x.thang == 4 || x.thang == 6 || x.thang == 9 || x.thang == 11) {
        soNgay = 30;
    } else {
        if (x.nam % 4 == 0) {
            soNgay = 29;
        } else {
            soNgay = 28;
        }
    }
    if (x.ngay > soNgay) {
        return 0;
    } else {
        return 1;
    }
}

void nhap1TB(TB &x) {
    fflush(stdin);
    printf("\n\tMa thue bao: "); scanf("%s", &x.mtb);
    fflush(stdin);
    printf("\tHo ten: "); gets(x.hoten);
    fflush(stdin);
    printf("\tSo dien thoai: "); scanf("%s", &x.sdt);
    nhapDATE(x.ndk);
    do{
        fflush(stdin);
        printf("\tLoai thue bao (tt/ts): "); scanf("%s", &x.ltb);
    } while (stricmp(x.ltb, "tt") && stricmp(x.ltb, "ts"));
    printf("\tThoi gian goi noi mang: "); scanf("%d", &x.tgnoi);
    printf("\tThoi gian goi ngoai mang: "); scanf("%d", &x.tgngoai);
}
void xuat1TB(TB x) {
    printf("\n%-6s%-12s%-12s %s ", x.mtb, x.hoten, x.sdt, x.ltb);
    xuatDATE(x.ndk);
    printf("%5d%5d", x.tgnoi, x.tgngoai);
    printf("%15d", tinhCPTB(x));
}

void nhapSoNguyen(int &n) {
    do {
        printf("Nhap so luong thue bao: "); scanf("%d", &n);
    } while (n <= 0 || n > 100);
}

void nhapMangTB(TB *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thue bao thu %d:", i + 1);
        nhap1TB(x[i]);
    }
}
void xuatMangTB(TB *x, int n) {
    for (int i = 0; i < n; i++) {
        xuat1TB(x[i]);
    }
}

void themTB(TB *x, int &n) {
    printf("\n\nc) Nhap them 1 thue bao:");
    nhap1TB(x[n]);
    n++;
}

void timVaXuatTB(TB *x, int n, char *ten) {
    for (int i = 0; i < n; i++) {
        if (stricmp(x[i].hoten, ten) == 0) {
            xuat1TB(x[i]);
        }
    }
}

void sortGiam(TB *x, int n) {
    TB s;
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (stricmp(x[i].mtb, x[j].mtb) < 0) {
                s = x[i];
                x[i] = x[j];
                x[j] = s;
            }
        }
    }
}

void xuatTBloai(TB *x, int n, char *loaiXuat) {
    for (int i = 0; i < n; i++) {
        if (stricmp(x[i].ltb, loaiXuat) == 0) {
            xuat1TB(x[i]);
        }
    }
}

void xuatTBsau2010(TB *x, int n) {
    for (int i = 0; i < n; i++) {
        if (x[i].ndk.nam > 2010) {
            xuat1TB(x[i]);
        }
    }
}

int tinhCPTB(TB x) {
    return x.tgnoi * 1500 + x.tgngoai * 3000;
}

int demTBTT(TB *x, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (stricmp(x[i].ltb, "tt") == 0) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int n;
    nhapSoNguyen(n);

    TB a[100];
    nhapMangTB(a, n);
    printf("\n");
    xuatMangTB(a, n);

    themTB(a, n);
    printf("\n   Mang thue bao sau khi them:");
    xuatMangTB(a, n);

    sortGiam(a, n);
    printf("\n\nd) Mang thue bao sau khi xep:");
    xuatMangTB(a, n);

    char tenMuonTim[10];
    printf("\n\ne) Nhap ho ten muon tim: ");
    fflush(stdin);
    gets(tenMuonTim);
    printf("   Cac thue bao tim duoc:");
    timVaXuatTB(a, n, tenMuonTim);

    printf("\n\nf)");
    char loaiMuonTim[3];
    do{
        fflush(stdin);
        printf("   Nhap loai muon tim: "); scanf("%s", &loaiMuonTim);
    } while (stricmp(loaiMuonTim, "tt") && stricmp(loaiMuonTim, "ts"));
    printf("   Cac thue bao tim duoc:");
    xuatTBloai(a, n, loaiMuonTim);

    printf("\n\ng) Cac thue bao dang ky sau 2010:");
    xuatTBsau2010(a, n);

    printf("\n\ni) Co %d thue bao tra truoc", demTBTT(a, n));
}
