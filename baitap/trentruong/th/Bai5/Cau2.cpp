#include<stdio.h>
#include<math.h>

#define max 100

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

void cauA(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            printf("\t%d", a[i]);
        }
    }
}

void cauB(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            dem++;
        }
    }
    printf("%d", dem);
}

void cauC(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%d", sum);
}

void cauD(int a[], int n) {
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        dem++;
        sum += a[i];
    }
    printf("%.2f", (float) sum / dem);
}

void cauE(int a[], int n) {
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            dem++;
            sum += a[i];
        }
    }
    printf("%.2f", (float) sum / dem);
}

void cauF(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            printf("\t%d", a[i]);
        }
    }
}

void cauG(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            dem++;
        }
    }
    printf("%d", dem);
}

void cauH(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            sum += a[i];
        }
    }
    printf("%d", sum);
}

void cauI(int a[], int n) {
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            dem++;
            sum += a[i];
        }
    }
    printf("%.2f", (float) sum / dem);
}

void cauJ(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            printf("a[%d] = %d", i, a[i]);
            break;
        }
    }
}

void cauK(int a[], int n) {
    for (int i = (n - 1); i >= 0; i--) {
        if (a[i] > 0) {
            printf("a[%d] = %d", i, a[i]);
            break;
        }
    }
}

void cauL(int a[], int n) {
    int _min = a[0], _max = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > _max) _max = a[i];
		if(a[i] < _min) _min = a[i];
	}
    printf("min = %d, max = %d", _min, _max);
}

int main() {
    int a[max], n;

    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }

    printf("\n\na) Cac phan tu chia het cho 3:\n"); cauA(a, n);
    printf("\n\nb) So luong phan tu duong: "); cauB(a, n);
    printf("\n\nc) Tong cac phan tu: "); cauC(a, n);
    printf("\n\nd) Trung binh cong cua mang: "); cauD(a, n);
    printf("\n\ne) Trung binh cong phan tu duong cua mang: "); cauE(a, n);
    printf("\n\nf) Cac so nguyen to trong mang:\n"); cauF(a, n);
    printf("\n\ng) So luong so nguyen to: "); cauG(a, n);
    printf("\n\nh) Tong so nguyen to: "); cauH(a, n);
    printf("\n\ni) Trung binh cong so nguyen to: "); cauI(a, n);
    printf("\n\nj) Phan tu duong dau tien: "); cauJ(a, n);
    printf("\n\nk) Phan tu duong cuoi cung: "); cauK(a, n);
    printf("\n\nl) "); cauL(a, n);
}
