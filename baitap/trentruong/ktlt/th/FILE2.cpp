#include<stdio.h>

/**
 *  "r": đọc file
 *  "w": ghi file
 *  "t": text (file văn bản)
 *  "b": binary (file nhị phân)
 *  "r+": modify ( vừa đọc và ghi file)
*/

int main(int argc, char const *argv[]) {
    FILE *fr;

    fr = fopen("./input2.txt", "rt");

    if (fr == NULL) {
        printf("Khong the mo file nay!");
        return 0;
    }

	int n, a[100], tong = 0;
	
	fscanf(fr, "%d", &n);

	for (int i = 0; i < n ;i++) {
		fscanf(fr, "%d", &a[i]);	
    }

	for (int i = 0; i < n; i++){
		printf("\t%d", a[i]);
	}
	
	for (int i = 0; i < n; i++){
		tong += a[i];
	}
    
	fclose(fr);
	
	FILE *fw;
	fw = fopen("output2.txt", "wt");
	fprintf(fw, "Tong: %d", tong);
	fclose(fw);
}
