#include<stdio.h>
#include<string.h>

struct DATE {
    int ngay, thang, nam;
};
struct BK {
    char ma[6], tenGui[10], tenNhan[10];
    DATE ng;
    float tl, dg;
};
int kiemTraDATE(DATE x);
float gtBK(BK x);

void nhapDATE(DATE &x) {
    do {
        printf("\tNhap ngay/thang/nam: ");
        scanf("%d%*c%d%*c%d", &x.ngay, &x.thang, &x.nam);
    } while (kiemTraDATE(x) == 0);
}
void xuatDATE(DATE x) {
    printf("%02d/%02d/%04d", x.ngay, x.thang, x.nam);
}
int kiemTraDATE(DATE x) {
    if (x.ngay <= 0 || x.thang <= 0 || x.thang > 12 || x.nam < 1900 || x.nam > 9999) {
        return 0;
    }
    int songay;
    switch (x.thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            songay = 31;
            break;
        case 4: case 6: case 9: case 11:
            songay = 30;
            break;
        case 2:
            if (x.nam % 4 == 0) {
                songay = 29;
            } else {
                songay = 28;
            }
    }
    if (x.ngay > songay) {
        return 0;
    }
    return 1;
}

void nhap1BK(BK &x) {
    fflush(stdin);
    printf("\n\tMa: "); scanf("%s", &x.ma);
    fflush(stdin);
    printf("\tTen nguoi gui: "); gets(x.tenGui);
    fflush(stdin);
    printf("\tTen nguoi nhan: "); gets(x.tenNhan);
    nhapDATE(x.ng);
    float tam;
    printf("\tTrong luong: "); scanf("%f", &tam); x.tl = tam;
    printf("\tDon gia: "); scanf("%f", &tam); x.dg = tam;
}
void xuat1BK(BK x) {
    printf("\n%-6s%-10s%-10s  ", x.ma, x.tenGui, x.tenNhan);
    xuatDATE(x.ng);
    printf("  %8.1f%10.1f", x.tl, x.dg);
    printf("%15.1f", gtBK(x));
}

void nhapN(int &n) {
    do {
        printf("a) Nhap so luong buu kien: "); scanf("%d", &n);
    } while (n <= 0 || n > 100);
}

void nhapMangBK(BK *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap buu kien thu %d:", i + 1);
        nhap1BK(x[i]);
    }
}
void xuatMangBK(BK *x, int n) {
    for (int i = 0; i < n; i++) {
        xuat1BK(x[i]);
    }
}

void them1BK(BK *x, int &n) {
    printf("\n\nc) Them 1 buu kien:");
    nhap1BK(x[n]);
    n++;
}

void sortBK(BK *x, int n) { // tăng dần theo mã
    BK dc;
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(x[i].ma, x[j].ma) > 0) {
                dc = x[i];
                x[i] = x[j];
                x[j] = dc;
            }
        }
    }
}

float gtBK(BK x) {
    return x.tl * x.dg;
}

float tlMax(BK *x, int n) {
    float max = x[0].tl;
    for (int i = 1; i < n; i++) {
        if (x[i].tl > max) {
            max = x[i].tl;
        }
    }
    return max;
}
int demTlMax(BK *x, int n) {
    int dem = 0;
    float max = tlMax(x, n);
    for (int i = 0; i < n; i++) {
        if (x[i].tl == max) {
            dem++;
        }
    }
    return dem;
}

void timVaXuatBK(BK *x, int n, char *tg) { // tg: tên người gửi
    for (int i = 0; i < n; i++) {
        if (stricmp(x[i].tenGui, tg) == 0) {
            xuat1BK(x[i]);
        }
    }
}

void xuatBKthang4nam2014(BK *x, int n) {
    for (int i = 0; i < n; i++) {
        if (x[i].ng.thang == 4 && x[i].ng.nam == 2014) {
            xuat1BK(x[i]);
        }
    }
}

int main() {
    int n;
    nhapN(n);

    BK a[100];
    nhapMangBK(a, n);
    xuatMangBK(a, n);

    them1BK(a, n);
    xuatMangBK(a, n);

    sortBK(a, n);
    printf("\n\nd) Mang buu kien sau khi xep:");
    xuatMangBK(a, n);

    printf("\n\nf) Co %d buu kien co trong luong lon nhat", demTlMax(a, n));

    char tgMuonTim[10];
    printf("\n\ng) Nhap ten nguoi gui muon tim: ");
    fflush(stdin);
    gets(tgMuonTim);
    printf("   Nhung buu kien tim duoc:");
    timVaXuatBK(a, n, tgMuonTim);

    printf("\n\nh) Nhung buu kien gui vao 04/2014:");
    xuatBKthang4nam2014(a, n);
}
