#include<stdio.h>
#include<conio.h>

void upper(char *a) {
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }
        i++;
    }
    printf("\n1. Chuoi hoa:        %s", a);
}

void lower(char *a) {
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        i++;
    }
    printf("2. Chuoi thuong:     %s", a);
}

void proper(char *a) {
    int i = 0;
    while (a[i] != '\0') {
        if (a[0] >= 'a' && a[0] <= 'z') {
            a[0] -= 32;
        }
        if (a[i] == 32 && a[i + 1] >= 'a' && a[i + 1] <= 'z') {
            a[i + 1] -= 32;
        }
        i++;
    }
    printf("3. In hoa dau tu:    %s", a);
}

void removeSpace(char *a, int lcl, int strLen) {
    for (int i = lcl; i < strLen; i++) {
        a[i] = a[i + 1];
    }
    a[strLen - 1] = '\0';
}

void trim(char *a) {
    int i = 0, strLen = 0;
    while (a[i] != '\0') {
        strLen++;
        i++;
    }
    for (i = 0; i < strLen; i++) {
        if (a[i] == 32 && a[i + 1] == 32) {
            removeSpace(a, i, strLen);
            i--;
        }
    }
    if (a[0] == 32) removeSpace(a, 0, strLen);
    if (a[strLen - 1] == 32) removeSpace(a, strLen - 1, strLen);
    printf("4. Cach dau cuoi:    %s", a);
}

void xoaTatCaSpace(char *a) {
    int i = 0, strLen = 0;
    while (a[i] != '\0') {
        strLen++;
        i++;
    }
    for (i = 0; i < strLen; i++) {
        if (a[i] == 32) {
            removeSpace(a, i, strLen);
            i--;
        }
    }
    if (a[0] == 32) removeSpace(a, 0, strLen);
    if (a[strLen - 1] == 32) removeSpace(a, strLen - 1, strLen);
    printf("5. Xoa tat ca cach:  %s", a);
}

int main() {
    char a[50];
    int bai;
    
    do {
        printf("0. Thoat\n"
               "1. Doi toan bo ky tu sang ky tu hoa\n"
               "2. Doi toan bo ky tu sang ky tu thuong\n"
               "3. In hoa chu cai dau moi tu\n"
               "4. Xoa khoang trang dau cuoi, giua 2 tu chi con 1 khoang trang\n"
               "5. Xoa tat ca khoang trang cua chuoi\n"
               "Chon 1 bai tap: ");
        scanf("%d", &bai);

        if (bai == 1 || bai == 2 || bai == 3 || bai == 4 || bai == 5) {
            fflush(stdin);
            printf("\nNhap 1 chuoi bat ky: ");
            fgets(a, sizeof(a), stdin); // gets(a); (Dev-C++)
        }

        switch (bai) {
            case 0: printf("Nhan phim bat ky de thoat..."); break;
            case 1: upper(a); break;
            case 2: lower(a); break;
            case 3: proper(a); break;
            case 4: trim(a); break;
            case 5: xoaTatCaSpace(a); break;
            default: printf("Bai tap khong ton tai, chon lai!"); break;
        }
        printf("\n");
        getch();
    } while (bai != 0);
}
