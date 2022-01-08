#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
    int bai;

    do {
    	printf("0. Thoat\n"
			   "1. Viet chuong trinh tinh S = a! + b! + c! voi a, b, c la 3 so duong < 20\n"
	           "2. Nhap mot so nguyen n sao cho 0 < n <%= 100\n"
			   "       a) Dem so uoc cua n\n"
			   "       b) Tinh tong cac uoc cua n (khong tinh chinh no)\n"
	           "3. Nhap n > 0. Tinh tong cac chu so cua n\n"
	           "\nChon bai tap: ");
	    scanf("%d", &bai);
	
	    switch(bai) {
	        case 0: printf("Nhan phim bat ki de thoat..."); break;
	        case 1: {	/** Bai 1 */
				unsigned int a, b, c;
				unsigned long long  sum = 0;
				printf("Nhap a, b, c < 20: ");	scanf("%d%d%d", &a, &b, &c);

				if (a < 20 && a > 0 && b < 20 && b > 0 && c < 20 && c > 0) {
					unsigned long long gtA = 1, gtB = 1, gtC = 1;

					/**
					 * Tính giai thừa lần lượt a, b, c
					 * cộng dồn sum vào mỗi lượt tính giai thừa
					 * vì giai thừa là số rất lớn nên sum phải dùng kiểu long long
					*/
					for (int i = 1; i <= a; i++) {
						 gtA *= i;
					}
					sum += gtA;
					for (int i = 1; i <= b; i++) {
						 gtB *= i;
					}
					sum += gtB;
					for (int i = 1; i <= c; i++) {
						 gtC *= i;
					}
					sum += gtC;

					printf("S = %lld\n\n", sum);
				} else {
					printf("Vui long nhap a, b, c cung > 0 va < 20\n\n");
				}

	            break;
	        }
	        case 2: {	/** Bai 2 */
				int n, dem = 0, sum = 0;
				
				do {
					printf("Nhap n (0 < n <%= 100): ");	scanf("%d", &n);
				} while (n < 0 && n > 100);

				for (int i = 1; i <= n; i++) {
					if (n % i == 0) {
						printf("%3d", i);

						/**
						 * Đếm ước số
						*/
						dem++;

						/**
						 * Tính tổng các ước (trừ chính n)
						*/
						if (i == n) {
							continue;
						}
						sum += i;
					}
				}

				printf("\na) Co %d uoc so\n", dem);
				/**
				 * Kiểm tra biến đếm có bằng 2 hay không
				*/
				if (dem == 2) printf("   n la so nguyen to\n");
				else		  printf("   n khong phai la so nguyen to\n");

				printf("b) Tong cac uoc la: %d\n", sum);
				/**
				 * Kiểm tra n có hoàn thiện hay không
				 * Ví dụ: 6 là số hoàn thiện, 2 là số không hoàn thiện
				*/
				if (sum == n) printf("   n la so hoan thien\n\n");
				else		  printf("   n la so khong hoan thien\n\n");

	            break;
	        }
	        case 3: {	/** Bai 3 */
				long n;
				int sum = 0;
				printf("Nhap n > 0: ");	scanf("%ld", &n);

				/**
				 * Nếu n là số âm thì nhân thêm -1 để n thành số dương
				 * sau đó tính tổng các chữ số của n
				*/
				if (n < 0) n *= -1;

				while (n > 0) {
					sum += n % 10;
        			n /= 10;
				}

				printf("sum = %d\n\n", sum);

	            break;
	        }
	        default: printf("Bai tap khong ton tai! Vui long chon lai!\n\n"); getch(); break;
	    }

		getch();
	} while (bai != 0);
}
