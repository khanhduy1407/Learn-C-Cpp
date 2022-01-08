#include<stdio.h>
#include<math.h>

#define MAX 100

int kiemTraSoNT(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int daoSoNT(int a) {
    int m = a, dao;
    if (m > 0) {
        while (m > 0) {
            dao = dao * 10 + m % 10;
            m /= 10;
        }
        if (kiemTraSoNT(dao)) {
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}
void cauA(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i]) && daoSoNT(a[i]) && a[i] > 10) {
            printf("\t%d", a[i]);
        }
    }
}

void cauB(int *a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            dem++;
        }
    }
    printf("%d", dem);
}

void cauC(int *a, int n) {
    int scc = 0;
	for (int i = n; i >= 0; i--) {
		if (kiemTraSoNT(a[i])) {
			scc = a[i];
			break;
		}
	}
	if (scc == 0) {
		printf("\nc) Khong co so nguyen to trong mang");
	} else {
		printf("\nc) So nguyen to cuoi cung trong mang la: %d", scc);
	}
}

void cauD(int *a, int n) {
    int x, min = a[0], dc;
	printf("Nhap x: "); scanf("%d", &x);
	for(int i = 0; i < n; i++) {
		if(a[i] < min) min = a[i];
	}
    printf("   Mang moi:");
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
            printf("\t%d\t%d", a[i], x);
        } else {
            printf("\t%d", a[i]);
        }
	}
}

void cauE(int *a, int n) {
    int dc;
	for (int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++){
            if(a[i] % 2 == 1 && a[j] % 2 == 1 && a[i] < a[j]){
                dc = a[i];
                a[i] = a[j];
                a[j] = dc;        
            }
        }
	}
	for (int i = 0; i < n; i++) {
		printf("\t%d", a[i]);
	}
}

void cauF(int *a, int n) {
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
            continue;
        }
        printf("\t%d", a[i]);
	}
}

int main() {
    int a[MAX], n;

    printf("Nhap so phan tu trong mang: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }

    printf("\na) Cac so nguyen to lon hon 10:\n"); cauA(a, n);
    printf("\nb) So phan tu la so nguyen to: "); cauB(a, n);
    cauC(a, n);
    printf("\nd) "); cauD(a, n);
    printf("\ne) Sap xep so le trong mang:\n"); cauE(a, n);
    printf("\nf) Xoa phan tu la so nguyen to:\n"); cauF(a, n);
}
