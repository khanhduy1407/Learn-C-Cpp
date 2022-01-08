#include<stdio.h>
#include<string.h>

#define MAX 100

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
    printf("Chuoi thuong: %s", a);
}

void lower(char *a) {
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        i++;
    }
    trim(a);
}

int demSoTu(char *a) {
    int dem = (a[0] != ' ');
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ' && a[i + 1] != ' ') {
            dem++;
        }
    }
    return dem;
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
}
int demKyTuChuoi(char *a) {
    xoaTatCaSpace(a);
    int i = 0, dem = 0;
    while (a[i] != '\0') {
        dem++;
        i++;
    }
    return dem;
}

int main() {
    char a[MAX];
    
    printf("Nhap 1 chuoi bat ky: ");
    gets(a);
    lower(a);

    printf("\na) Chuoi nay co %d tu", demSoTu(a));
    printf("\nb) Chuoi nay co %d ky tu", demKyTuChuoi(a));
}
