#include<stdio.h>

int main() {
    char ch;

    printf("Nhap 1 ky tu (a-z hoac A-Z): "); scanf("%c", &ch);

    fflush(stdin);

    if (ch >= 'A' && ch <= 'z') {
        switch (ch) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                printf("Ky tu %c la nguyen am!", ch);
                break;
            default:
                if (ch > 'Z' && ch < 'a') {
                    printf("Ky tu %c khong phai la chu cai!", ch);
                } else {
                    printf("Ky tu %c la phu am!", ch);
                }
                break;
        }
    } else {
        printf("Ky tu %c khong phai la chu cai!", ch);
    }
}
