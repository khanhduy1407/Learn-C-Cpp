#include<stdio.h>

void TimKiemTuanTu(int *a, int n, int x) {
	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("\n(TKTT) Phan tu \"%d\" nam o vi tri \"%d\"", x, i);
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		printf("\n(TKTT) Khong tim thay \"%d\"", x);
	}
}

void XuatMang(int *a, int n) {
	for (int i = 0; i < n; i++) {
		printf("\t%d", a[i]);
	}
}

void SapXep(int *a, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int TimKiemNhiPhan(int *a, int x, int left, int right) {
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (a[mid] == x)
			return mid;

		if (a[mid] > x)
			return TimKiemNhiPhan(a, x, left, mid - 1);

		return TimKiemNhiPhan(a, x, mid + 1, right);
	}

	return -1;
}

int main(int argc, char const *argv[]) {
    int n = 5;
	int a[n] = {1, 4, 5, 2, 3};

	printf("Mang chua sap xep:"); XuatMang(a, n);
	TimKiemTuanTu(a, n, 4);

	SapXep(a, n);

	printf("\n\nMang da sap xep:"); XuatMang(a, n);
	TimKiemTuanTu(a, n, 4);
	int x = 3;
	int kq = TimKiemNhiPhan(a, x, 0, n - 1);
	if (kq == -1) {
		printf("\n(TKNP) Khong tim thay \"%d\"", x);
	} else {
		printf("\n(TKNP) Phan tu \"%d\" nam o vi tri \"%d\"", x, kq);
	}
}
