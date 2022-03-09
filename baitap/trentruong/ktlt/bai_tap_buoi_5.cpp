#include<stdio.h>
#include<conio.h>
#include<windows.h>

typedef struct {
    char maMatHang[5], tenMatHang[20], xuatXu[10];
    int gia;
} MatHang;
typedef MatHang Mang[100];

void nhap(Mang m, int &n) {
    printf("Nhap so luong mat hang: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        fflush(stdin);
        printf("Mat hang thu %d\n", i + 1);
        printf("\t- Ma mat hang: "); gets(m[i].maMatHang);
        fflush(stdin);
        printf("\t- Ten mat hang: "); gets(m[i].tenMatHang);
        fflush(stdin);
        printf("\t- Xuat xu: "); gets(m[i].xuatXu);
        fflush(stdin);
        printf("\t- Gia: "); scanf("%d", &m[i].gia);
    }
}

void hien(Mang m, int n) {
    printf("Danh sach mat hang:");
    for (int i = 0; i < n; i++) {
        printf("\n%s, %s, xuat xu tai %s, gia %dd", m[i].maMatHang, m[i].tenMatHang, m[i].xuatXu, m[i].gia);
    }
}

int main(){
    Mang a;
    int n, i;

    system("cls"); nhap(a, n);

    system("cls"); hien(a, n);

    printf("\n"); getch();

    printf("\n"); getch();
}
