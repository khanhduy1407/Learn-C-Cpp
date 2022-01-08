#include<stdio.h>
#include<conio.h>
#include<windows.h>

void xuatMenu() {
    printf("0. Thoat"
           "\n1. Giai phuong trinh bac 1"
           "\n2. Kiem tra 1 so nguyen co phai so hoan thien khong"
           "\n3. Liet ke cac so hoan thien tu 1 den n"
           "\n4. Tim UCLN cua 2 so nguyen a, b");
}

void giaiPTB1(int a, int b) {
    if (a == 0) {
        if (b == 0) {
            printf("\nPT vo so nghiem\n\n");
        } else {
            printf("\nPT vo nghiem\n\n");
        }
    } else {
        printf("\nPT co 1 nghiem = %.2f\n\n", (float) -b / a);
    }
}

/**
 * return 0 Nếu không hoàn thiện
 * return 1 Nếu hoàn thiện
*/
int KTHT(int n) {
    int tongUS = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tongUS += i;
        }
    }

    if (tongUS == n) {
        return 1;
    } else {
        return 0;
    }
}

void lietKeSoHT(int n) {
    printf("\nCac so hoan thien tu 1 den %d:", n);

    for (int i = 1; i <= n; i++) {
        if (KTHT(i)) {
            printf("%6d", i);
        }
    }

    printf("\n\n");
}

void timUCLN(int a, int b) {
    if (a >= 0 && b >= 0) {
        if (a == 0 && b == 0) {
            printf("\nKhong ton tai UCLN");
        } else if (a == 0 || b == 0) {
            printf("\nUCLN = %d", (a == 0) ? b : a);
        } else {
            int bc = a * b;
            
            while (b != 0) {
                int x = b;
                b = a % b;
                a = x;
            }

            printf("\nUCLN = %d", a);
        }
    } else {
        printf("\na va b phai lon hon 0");
    }
}

int main() {
    int chon;

    do {
        system("cls");

        xuatMenu();
        printf("\nChon 1 bai tap: "); scanf("%d", &chon);

        switch (chon) {
            case 0: break;
            case 1: {
                int a, b;
                printf("Nhap he so a, b: "); scanf("%d%d", &a, &b);
                giaiPTB1(a, b);
                break;
            }
            case 2: {
                int n;
                printf("Nhap so nguyen: "); scanf("%d", &n);
                if (KTHT(n)) {
                    printf("\n%d la so hoan thien\n\n", n);
                } else {
                    printf("\n%d khong phai la so hoan thien\n\n", n);
                }
                break;
            }
            case 3: {
                int n;
                printf("Nhap so nguyen: "); scanf("%d", &n);
                lietKeSoHT(n);
                break;
            }
            case 4: {
                int a, b;
                printf("Nhap 2 so a, b: "); scanf("%d%d", &a, &b);
                timUCLN(a, b);
                break;
            }
            default: break;   
        }

        getch();
    } while (chon != 0);
}