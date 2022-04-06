/**
 * Dãy số Fibonacci được định nghĩa như sau:
 * F0 = 0, F1 = 1; Fn = Fn-1 + Fn-2 với n >= 2.
 * Hãy viết chương trình tìm số Fibonacci thứ n.
*/

#include<stdio.h>

int main() {
    int n;
	unsigned long long f0 = 1, f1 = 1, fn = 1;
	
	printf("Nhap n >= 0: "); scanf("%d", &n);
	if(n < 0) {
		printf("Nhap n >= 0");
	} else {
		for(int i = 2; i <= n; i++) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
		printf("So fibo thu %d: %lld", n, fn);
	}

    return 0;
}