#include<stdio.h>

int kiemTraGio(int time) {
    if (time >= 6 && time <= 18) {
        return 1;
    }

    return 0;
}

int tienLuong(int a, int b) {
    int luong;

    if (b <= 12) {
        luong = (b - a) * 6000;
    } else {
        if (a >= 12) {
            luong = (b - a) * 7500;
        } else {
            luong = (12 - a) * 6000 + (b - 12) * 7500;
        }
    }

    return luong;
}

int main() {
    int a, b;
    printf("Nhap gio vao ca: "); scanf("%d", &a);
    printf("Nhap gio ra ca: "); scanf("%d", &b);
    
    if (kiemTraGio(a) == 0 || kiemTraGio(b) == 0) {
        printf("Thoi gian lam viec khong hop le!");
    } else {
        printf("Tien ngay luong: %d (vnd)", tienLuong(a, b));
    }
}