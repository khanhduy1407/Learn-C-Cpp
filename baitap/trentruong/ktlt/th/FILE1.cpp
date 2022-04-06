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

    fr = fopen("./input1.txt", "rt");

    if (fr == NULL) {
        printf("Khong the mo file nay!");
        return 0;
    }

    int num1, num2;

    fscanf(fr, "%d%d", &num1, &num2);

    printf("Tong:   %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Hieu:   %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Tich:   %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Thuong: %d / %d = %.2f\n", num1, num2, (float) num1 / num2);
    
	fclose(fr);
}
