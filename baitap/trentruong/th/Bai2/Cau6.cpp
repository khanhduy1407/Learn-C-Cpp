#include<stdio.h>

int main() {
    int ngay, thang, nam, check;
    printf("Nhap ngay, thang, nam: "); scanf("%d%d%d", &ngay, &thang, &nam);

    /**
     * Tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày
     * Tháng 4, 6, 9, 11 có 30 ngày
     * Tháng 2 có 28 ngày, năm nhuận có 29 ngày
    */

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (ngay >= 1 && ngay <= 31) check = 1;
            else                         check = 0;
            break;
        case 4: case 6: case 9: case 11:
            if (ngay >= 1 && ngay <= 30) check = 1;
            else                         check = 0;
            break;
        case 2:
            if (nam % 4 == 0) if (ngay >= 1 && ngay <= 29) check = 1;
                              else                         check = 0;
            else if (ngay >= 1 && ngay <= 28) check = 1;
                 else                         check = 0;
            break;
        default:
            check = 0;
            break;
    }

    if (check = 1)  printf("Ngay, thang, nam hop le");
    else            printf("Ngay, thang, nam khong hop le!");

    return 0;
}