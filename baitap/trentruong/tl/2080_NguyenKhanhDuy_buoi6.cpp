#include<stdio.h>
#include<math.h>
#include<conio.h>

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
void nhapPhanTuCuaMangChen(int a[], int n) {
	for (int i = 0; i < (n - 1); i++) {
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}

int kiemTraSoNT(int a) {
	for(int i = 2; i <= sqrt(a); i++) {
		if(a % i == 0) {
			return 0;
		}
	}
   	return 1;
}

int kiemTraSoCP(int a) {
	for (int i = 1; i < a; i++) {
		if (i * i == a) {
			return 1;
		}
	}
	return 0;
}

void cau1(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			printf("%d\t", a[i]);
		}
	}
}

void cau2(int a[], int n) {
	int dem = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			dem++;
		}
	}
	printf("Mang da cho co %d so nguyen to", dem);
}

void cau3(int a[], int n) {
	int sum = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			sum += a[i];
		}
	}
	printf("Tong cac so nguyen to la: %d", sum);
}

void cau4(int a[], int n) {
	int sum = 0, t = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			sum += a[i];
			t++;
		}
	}
	printf("TBC cac so nguyen to la: %.2f", (float) sum / t);
}

void cau5(int a[], int n) {
	int sdt = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			sdt = a[i];
			break;
		}
	}
	if (sdt == 0) {
		printf("Khong co so nguyen to trong mang");
	} else {
		printf("So nguyen to dau tien trong mang la: %d", sdt);
	}
}

void cau6(int a[], int n) {
	int scc = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = n; i >= 0; i--) {
		if (kiemTraSoNT(a[i])) {
			scc = a[i];
			break;
		}
	}
	if (scc == 0) {
		printf("Khong co so nguyen to trong mang");
	} else {
		printf("So nguyen to cuoi cung trong mang la: %d", scc);
	}
}

void cau7(int a[], int n) {
	int scc = 0;
	nhapPhanTuCuaMang(a, n);
	for (int i = n; i >= 0; i--) {
		if (kiemTraSoCP(a[i])) {
			scc = a[i];
			break;
		}
	}
	if (scc == 0) {
		printf("So chinh phuong cuoi cung trong mang la: 0");
	} else {
		printf("So chinh phuong cuoi cung trong mang la: %d", scc);
	}
}

void cau8(int a[], int n) {
	int dc;
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                dc = a[i];
                a[i] = a[j];
                a[j] = dc;        
            }
        }
	}
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}

void cau9(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	int dc;
	for (int i = 0; i < n - 1; i++) {
		if (kiemTraSoNT(a[i])) {
			for(int j = i + 1; j < n; j++){
				if(kiemTraSoNT(a[j]) && a[i] > a[j]){
					dc = a[i];
					a[i] = a[j];
					a[j] = dc;        
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}

void cau10(int a[], int n) {
	int k = -1, x;
	nhapPhanTuCuaMangChen(a, n);
	while (k < 0 || k >= n) {
		printf("Nhap vi tri k (0 < k < n): "); scanf("%d", &k);
	}
	printf("Nhap x: "); scanf("%d", &x);
	for (int i = n - 1; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = x;
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}

void cau11(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
		if (kiemTraSoNT(a[i])) {
			printf("0\t");
		}
	}
}

void cau12(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (kiemTraSoNT(a[i])) {
			printf("0\t");
			continue;
		}
		printf("%d\t", a[i]);
	}
}

void cau13(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	int min = a[0], max = a[0], dc;
	for(int i = 0; i < n; i++) {
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			a[i] = max;
		}
		printf("%d\t", a[i]);
	}
}

void cau14(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				for (int k = i; k < n; k++)  {
					a[k] = a[k + 1];
					n--;
					i--;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}

void cau15(int a[], int n) {
	nhapPhanTuCuaMang(a, n);
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			continue;
		}
		printf("%d\t", a[i]);
	}
}

int main() {
    int bai, a[100], n;

    do {
    	printf("0.  Thoat\n"
			   "1.  Liet ke cac phan tu la so nguyen to trong mang\n"
	           "2.  Dem cac phan tu la so nguyen to trong mang\n"
	           "3.  Tinh tong cac phan tu la so nguyen to trong mang\n"
	           "4.  Tinh trung binh cong so nguyen to trong mang\n"
	           "5.  Tim vi tri so nguyen to dau tien trong mang\n"
	           "6.  Tim vi tri so nguyen to cuoi cung trong mang\n"
	           "7.  Tim so chinh phuong cuoi cung co trong mang, neu khong ton tai thi ham tra ve 0\n"
	           "8.  Sap xep cac so trong mang theo thu tu giam dan\n"
	           "9.  Sap xep cac so nguyen to trong mang theo thu tu tang dan\n"
	           "10. Chen phan tu co gia tri x vao vi tri k\n"
	           "11. Chen so 0 dang sau cac so nguyen to trong mang\n"
	           "12. Sua cac so nguyen to co trong mang thanh so 0\n"
	           "13. Sua lai gia tri cua cac phan tu co gia tri nho nhat thanh gia tri lon nhat\n"
	           "14. Xoa cac phan tu co gia tri trung trong mang\n"
	           "15. Xaa tat ca so 0 co trong mang\n"
	           "\nChon bai tap: ");
	    scanf("%d", &bai);
	
	    switch(bai) {
	        case 0: printf("Nhan phim bat ki de thoat..."); break;
	        case 1: {	/** Bai 1 */
				nhapMang(n);
				cau1(a, n);
				break;
	        }
	        case 2: {	/** Bai 2 */
				nhapMang(n);
				cau2(a, n);
				break;
	        }
	        case 3: {	/** Bai 3 */
				nhapMang(n);
				cau3(a, n);
				break;
	        }
	        case 4: {	/** Bai 4 */
				nhapMang(n);
				cau4(a, n);
				break;
	        }
	        case 5: {	/** Bai 5 */
				nhapMang(n);
				cau5(a, n);
				break;
	        }
	        case 6: {	/** Bai 6 */
				nhapMang(n);
				cau6(a, n);
				break;
	        }
	        case 7: {	/** Bai 7 */
				nhapMang(n);
				cau7(a, n);
				break;
	        }
	        case 8: {	/** Bai 8 */
				nhapMang(n);
				cau8(a, n);
				break;
	        }
	        case 9: {	/** Bai 9 */
				nhapMang(n);
				cau9(a, n);
				break;
	        }
	        case 10: {	/** Bai 10 */
				nhapMang(n);
				cau10(a, n);
				break;
	        }
	        case 11: {	/** Bai 11 */
				nhapMang(n);
				cau11(a, n);
				break;
	        }
	        case 12: {	/** Bai 12 */
				nhapMang(n);
				cau12(a, n);
				break;
	        }
	        case 13: {	/** Bai 13 */
				nhapMang(n);
				cau13(a, n);
				break;
	        }
	        case 14: {	/** Bai 14 */
				nhapMang(n);
				cau14(a, n);
				break;
	        }
	        case 15: {	/** Bai 15 */
				nhapMang(n);
				cau15(a, n);
				break;
	        }
	        default: printf("Bai tap khong ton tai! Vui long chon lai!\n\n"); break;
	    }

		getch();
	} while (bai != 0);
}
