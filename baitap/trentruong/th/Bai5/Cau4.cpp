#include<stdio.h>
#include<conio.h>

#define max 100

void nhapMang(int &n) {
	do {
		printf("Nhap so phan tu trong mang: ");
		scanf("%d", &n);
	} while (n < 0 || n > 100);
}

void nhapPhanTuCuaMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}

void kiemTraTrung(int *a, int i) {
    for (int j = 0; j < i; j++) {
        while (a[i] == a[j]) {
            printf("%d da ton tai, nhap lai: a[%d] = ", a[j], i);
            scanf("%d", &a[i]);
            kiemTraTrung(a, i);
        }
    }
}

int kiemTraSoCP(int a) {
    for (int i = 1; i <= a; i++) {
        if (i * i == a) {
            return 1;
        }
    }
    return 0;
}

void cauC(int a[], int n) {
    nhapMang(n);
    nhapPhanTuCuaMang(a, n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            if (kiemTraSoCP(a[i])) {
                printf("\t%d", a[i]);
            }
        }
    }
}

void cauD(int a[], int n) {
    nhapMang(n);
    nhapPhanTuCuaMang(a, n);
    int _max = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > _max) _max = a[i];
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == _max) {
            printf("\ta[%d]", i);
        }
	}
}

void cauE(int a[], int n) {
    nhapMang(n);
    nhapPhanTuCuaMang(a, n);
    int sum = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) {
            sum += a[i];
        }
	}
    printf("%d", sum);
}

void cauF(int a[], int n) {
    nhapMang(n);
    nhapPhanTuCuaMang(a, n);
    int dc;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++){
            if(a[j] > a[i]){
                dc = a[i];
                a[i] = a[j];
                a[j] = dc;
            }
        }
	}
	for(int i = 0; i < n; i++) {
		printf("\t%d", a[i]);
	}
}

int main() {
    int cau, a[max], n;

    do {
        fflush(stdin);
        printf("0. Thoat\n"
               "1. Nhap so phan tu khong duoc trung\n"
               "2. Xuat mang\n"
               "3. Cac so chinh phuong o vi tri le\n"
               "4. Vi tri cac phan tu lon nhat\n"
               "5. Tong cac phan tu o vi tri chan\n"
               "6. Xep mang theo thu tu tang dan\n"
               "Chon 1 cau: ");
        scanf("%d", &cau);

        switch (cau) {
            case 0: printf("Nhan lan nua de thoat..."); break;
            case 1: {
                nhapMang(n);
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i); scanf("%d", &a[i]);
                    kiemTraTrung(a, i);
                }
                for (int i = 0; i < n; i++) {
                    printf("\t%d", a[i]);
                }
                break;
            }
            case 2: {
                nhapMang(n);
                nhapPhanTuCuaMang(a, n);
                for (int i = 0; i < n; i++) {
                    printf("\t%d", a[i]);
                }
                break;
            }
            case 3: {
                cauC(a, n);
                break;
            }
            case 4: {
                cauD(a, n);
                break;
            }
            case 5: {
                cauE(a, n);
                break;
            }
            case 6: {
                cauF(a, n);
                break;
            }
            default: printf("Cau khong hop le, vui long nhap lai!"); break;
        }
        printf("\n\n");
        getch();
    } while (cau != 0);
}
