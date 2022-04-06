/**
 * 2. Phần 2: Con trỏ và mảng 1 chiều có cấu trúc
 * Viết chương trình xử lý mảng 1 chiều có cấu trúc dùng kỹ thuật lập trình con trỏ
*/

#include<iostream>

/**
 * In ra màn hình 1 mảng ma trận
*/
void OutArr(int *a, int n, FILE *fw) {
    for (int i = 0; i < n; i++)
        fprintf(fw, "\t%d", *(a+i));
}

/**
 * Tìm số Fibonacci thứ n
*/
int Fibonacci(int n) {
	if (n < 2) return 1;
	return Fibonacci(n-1) + Fibonacci(n-2);
}

/**
 * Hàm giải các phép toán: cộng, trừ, nhân, chia, fibo
*/
void SolveMath(int *a, int n, FILE *fw) {
    int tong = 0, hieu = 0;
    long long tich = 1;
    double thuong = 1;

    for (int i = 0; i < n; i++) {
		tong += *(a+i);
        hieu -= *(a+i);
        tich *= *(a+i);
        thuong /= float(*(a+i));
	}

	fprintf(fw, "\nTổng: %d", tong);
	fprintf(fw, "\nHiệu: %d", hieu);
	fprintf(fw, "\nTích: %lld", tich);
	fprintf(fw, "\nThương: %.4lf", thuong);
	fprintf(fw, "\nSố Fibonacci thứ %d: %d", n, Fibonacci(n));
}

/**
 * Hàm đổi vị trí 2 số cho nhau
*/
void Swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

/**
 * Hàm sắp xếp chèn trực tiếp
 * Xếp theo thứ tự từ bé đến lớn
*/
void InsertionSort(int *a, int n) {
   for (int i = 1; i < n; i++) {
       int k = *(a+i);
       int j = i - 1;
 
       while (j >= 0 && *(a+j) < k) {
           *(a+j+1) = *(a+j);
           j -= 1;
       }
       *(a+j+1) = k;
   }
}

/**
 * Hàm sắp xếp chọn trực tiếp
 * Xếp theo thứ tự từ lớn đến bé
*/
void SelectionSort(int *a, int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (*(a+min) > *(a+j))
				min = j;
		Swap(*(a+i), *(a+min));
	}
}

/**
 * Hàm sắp xếp nổi bọt
 * Xếp theo thứ tự từ bé đến lớn
*/
void BubbleSort(int *a, int n) {
    bool flag = false;
    for (int i = 0; i < n-1; i++) {
        flag = false;
        for (int j = 0; j < n-i-1; j++) {
            if (*(a+j) > *(a+j+1)) {
                Swap(*(a+j), *(a+j+1));
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}

/**
 * Hàm giải thuật tìm kiếm tuần tự
*/
void LinearSearch(int *a, int n, int x, FILE *fw) {
	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (*(a+i) == x) {
			fprintf(fw, "\tPhần tử \"%d\" nằm ở vị trí \"%d\"", x, i);
			flag = 1;
			break;
		}
	}

	if (flag == 0) fprintf(fw, "\tKhông tìm thấy \"%d\"", x);
}

/**
 * Hàm giải thuật tìm kiếm nhị phân
*/
int BinarySearch(int *a, int x, int left, int right) {
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (*(a+mid) == x) return mid;
		if (*(a+mid) > x) return BinarySearch(a, x, left, mid - 1);

		return BinarySearch(a, x, mid + 1, right);
	}

	return -1;
}

/**
 * Hàm trình tạo file output tự động
*/
void FileGenerator(int *a, int n) {
	FILE *fw;
	fw = fopen("output2.txt", "wt");

    fprintf(fw, "/**\n * Automatically generated file. DO NOT MODIFY\n*/");

    fprintf(fw, "\n\n===== MA TRẬN =====\n");
    OutArr(a, n, fw);

	fprintf(fw, "\n\n===== CÁC PHÉP TOÁN TRÊN MA TRẬN SỐ NGUYÊN =====");
    SolveMath(a, n, fw);

    fprintf(fw, "\n\n===== MA TRẬN ĐÃ SẮP XẾP =====");
    fprintf(fw, "\n+ Sắp xếp chọn trực tiếp:\n");
    SelectionSort(a, n); OutArr(a, n, fw);
    fprintf(fw, "\n+ Sắp xếp chèn trực tiếp:\n");
    InsertionSort(a, n); OutArr(a, n, fw);
    fprintf(fw, "\n+ Sắp xếp nổi bọt:\n");
    BubbleSort(a, n); OutArr(a, n, fw);

    fprintf(fw, "\n\n===== GIẢI THUẬT TÌM KIẾM =====");
    fprintf(fw, "\n+ Tuần tự:\n");
	LinearSearch(a, n, 4, fw);
    fprintf(fw, "\n+ Nhị phân:\n");
	int x = 7;
	int kq = BinarySearch(a, x, 0, n - 1);
	if (kq == -1) fprintf(fw, "\tKhông tìm thấy \"%d\"", x);
	else          fprintf(fw, "\tPhần tử \"%d\" nằm ở vị trí \"%d\"", x, kq);
    
	fclose(fw);

    printf("Du lieu da duoc tao trong file output2.txt");
}

int main() {
    FILE *fr;

    fr = fopen("./input.txt", "rt");

    if (fr == NULL) {
        printf("Khong the mo file nay!");
        return 0;
    }

	int a[100], n;
	
	fscanf(fr, "%d", &n);

	for (int i = 0; i < n; i++)
		fscanf(fr, "%d", (a+i));
    
	fclose(fr);

    FileGenerator(a, n);
}
